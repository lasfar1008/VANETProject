//
// (C) 2005 Vojtech Janota
//
// This library is free software, you can redistribute it
// and/or modify
// it under  the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation;
// either version 2 of the License, or any later version.
// The library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//

#ifndef __INETVEINS_SIMPLECLASSIFIER_H
#define __INETVEINS_SIMPLECLASSIFIER_H

#include <vector>
#include <string>

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/networklayer/mpls/ConstType.h"
#include "inetveins/networklayer/contract/ipv4/IPv4Address.h"
#include "inetveins/networklayer/ipv4/IPv4Datagram.h"
#include "inetveins/common/scenario/IScriptable.h"
#include "inetveins/networklayer/rsvp_te/IRSVPClassifier.h"
#include "inetveins/networklayer/mpls/LIBTable.h"
#include "inetveins/networklayer/rsvp_te/IntServ.h"

namespace inetveins {

class RSVP;

/**
 * TODO documentation
 */
class INETVEINS_API SimpleClassifier : public cSimpleModule, public IScriptable, public IRSVPClassifier
{
  public:
    struct FECEntry
    {
        int id;

        IPv4Address src;
        IPv4Address dest;

        SessionObj_t session;
        SenderTemplateObj_t sender;

        int inLabel;
    };

  protected:
    IPv4Address routerId;
    int maxLabel = 0;

    std::vector<FECEntry> bindings;
    LIBTable *lt = nullptr;
    RSVP *rsvp = nullptr;

  public:
    SimpleClassifier() {}

  protected:
    virtual void initialize(int stage) override;
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void handleMessage(cMessage *msg) override;

    // IScriptable implementation
    virtual void processCommand(const cXMLElement& node) override;

    // IRSVPClassifier implementation
    virtual bool lookupLabel(IPv4Datagram *ipdatagram, LabelOpVector& outLabel, std::string& outInterface, int& color) override;
    virtual void bind(const SessionObj_t& session, const SenderTemplateObj_t& sender, int inLabel) override;

  protected:
    virtual void readTableFromXML(const cXMLElement *fectable);
    virtual void readItemFromXML(const cXMLElement *fec);
    std::vector<FECEntry>::iterator findFEC(int fecid);
};

} // namespace inetveins

#endif // ifndef __INETVEINS_SIMPLECLASSIFIER_H

