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

#ifndef __INETVEINS_FLATRADIOBASE_H
#define __INETVEINS_FLATRADIOBASE_H

#include "inetveins/physicallayer/base/packetlevel/NarrowbandRadioBase.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API FlatRadioBase : public NarrowbandRadioBase
{
  protected:
    void handleUpperCommand(cMessage *message);

  public:
    FlatRadioBase();

    virtual void setPower(W newPower);
    virtual void setBitrate(bps newBitrate);
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_FLATRADIOBASE_H

