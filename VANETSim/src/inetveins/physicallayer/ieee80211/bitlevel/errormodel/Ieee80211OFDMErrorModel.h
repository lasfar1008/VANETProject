//
// Copyright (C) 2014 OpenSim Ltd.
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

#ifndef __INETVEINS_IEEE80211OFDMERRORMODEL_H
#define __INETVEINS_IEEE80211OFDMERRORMODEL_H

#include "inetveins/physicallayer/contract/bitlevel/ILayeredErrorModel.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMSymbol.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API Ieee80211OFDMErrorModel : public ILayeredErrorModel, public cSimpleModule
{
  protected:
    double signalSymbolErrorRate;
    double dataSymbolErrorRate;
    double signalBitErrorRate;
    double dataBitErrorRate;

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void handleMessage(cMessage *msg) override { throw cRuntimeError("The module doesn't handle self messages"); }
    Ieee80211OFDMSymbol *corruptOFDMSymbol(const Ieee80211OFDMSymbol *symbol, double ser, int constellationSize, const std::vector<APSKSymbol> *constellation) const;
    void corruptBits(BitVector *bits, double ber, int begin, int end) const;

  public:
    virtual const IReceptionPacketModel *computePacketModel(const LayeredTransmission *transmission, const ISNIR *snir) const override;
    virtual const IReceptionBitModel *computeBitModel(const LayeredTransmission *transmission, const ISNIR *snir) const override;
    virtual const IReceptionSymbolModel *computeSymbolModel(const LayeredTransmission *transmission, const ISNIR *snir) const override;
    virtual const IReceptionSampleModel *computeSampleModel(const LayeredTransmission *transmission, const ISNIR *snir) const override;
    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
};

} /* namespace physicallayer */
} /* namespace inetveins */

#endif // ifndef __INETVEINS_IEEE80211LAYEREDERRORMODEL_H

