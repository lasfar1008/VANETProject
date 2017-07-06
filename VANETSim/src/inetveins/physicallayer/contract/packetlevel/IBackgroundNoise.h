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

#ifndef __INETVEINS_IBACKGROUNDNOISE_H
#define __INETVEINS_IBACKGROUNDNOISE_H

#include "inetveins/physicallayer/contract/packetlevel/IReception.h"
#include "inetveins/physicallayer/contract/packetlevel/IListening.h"
#include "inetveins/physicallayer/contract/packetlevel/INoise.h"

namespace inetveins {

namespace physicallayer {

/**
 * This interface models a source which provides background noise over space and time.
 */
class INETVEINS_API IBackgroundNoise : public IPrintableObject
{
  public:
    virtual const INoise *computeNoise(const IListening *listening) const = 0;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IBACKGROUNDNOISE_H

