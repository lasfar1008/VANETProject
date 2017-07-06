//
// Copyright (C) 2013 OpenSim Ltd.
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

#ifndef __INETVEINS_IEEE80211IDEALTRANSMITTER_H
#define __INETVEINS_IEEE80211IDEALTRANSMITTER_H

#include "inetveins/physicallayer/ieee80211/packetlevel/Ieee80211TransmitterBase.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API Ieee80211IdealTransmitter : public Ieee80211TransmitterBase
{
  protected:
    m maxCommunicationRange = m(NaN);
    m maxInterferenceRange = m(NaN);
    m maxDetectionRange = m(NaN);

  protected:
    virtual void initialize(int stage) override;

  public:
    Ieee80211IdealTransmitter();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;

    virtual const ITransmission *createTransmission(const IRadio *radio, const cPacket *packet, simtime_t startTime) const override;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IEEE80211IDEALTRANSMITTER_H

