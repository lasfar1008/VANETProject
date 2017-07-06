//
// Copyright (C) 2004 Andras Varga
// Copyright (C) 2000 Institut fuer Telematik, Universitaet Karlsruhe
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INETVEINS_UDPSINK_H
#define __INETVEINS_UDPSINK_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/applications/base/ApplicationBase.h"
#include "inetveins/transportlayer/contract/udp/UDPSocket.h"

namespace inetveins {

/**
 * Consumes and prints packets received from the UDP module. See NED for more info.
 */
class INETVEINS_API UDPSink : public ApplicationBase
{
  protected:
    enum SelfMsgKinds { START = 1, STOP };

    UDPSocket socket;
    int localPort = -1;
    L3Address multicastGroup;
    simtime_t startTime;
    simtime_t stopTime;
    cMessage *selfMsg = nullptr;

    int numReceived = 0;
    static simsignal_t rcvdPkSignal;

  public:
    UDPSink() {}
    virtual ~UDPSink();

  protected:
    virtual void processPacket(cPacket *msg);
    virtual void setSocketOptions();

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void handleMessageWhenUp(cMessage *msg) override;
    virtual void finish() override;

    virtual void processStart();
    virtual void processStop();

    virtual bool handleNodeStart(IDoneCallback *doneCallback) override;
    virtual bool handleNodeShutdown(IDoneCallback *doneCallback) override;
    virtual void handleNodeCrash() override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_UDPSINK_H

