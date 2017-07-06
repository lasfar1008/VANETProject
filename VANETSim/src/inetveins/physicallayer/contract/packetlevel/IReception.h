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

#ifndef __INETVEINS_IRECEPTION_H
#define __INETVEINS_IRECEPTION_H

#include "inetveins/physicallayer/contract/bitlevel/ISignalAnalogModel.h"
#include "inetveins/physicallayer/contract/packetlevel/IRadioSignal.h"
#include "inetveins/physicallayer/contract/packetlevel/ITransmission.h"

namespace inetveins {

namespace physicallayer {

/**
 * This interface represents the reception of a transmission at a receiver. There's
 * one instance per transmission of this interface for each receiver.
 *
 * This interface is strictly immutable to safely support parallel computation.
 */
class INETVEINS_API IReception : public IPrintableObject
{
  public:
    /**
     * Returns the receiver that received the corresponding transmission
     * from the radio medium. This function never returns nullptr.
     */
    virtual const IRadio *getReceiver() const = 0;

    /**
     * Returns the transmission that corresponds to this reception at the
     * receiver. This function never returns nullptr.
     */
    virtual const ITransmission *getTransmission() const = 0;

    /**
     * Returns the time when the receiver started to receive the corresponding
     * transmission. It is the start of the first bit's reception.
     */
    virtual const simtime_t getStartTime() const = 0;

    /**
     * Returns the time when the receiver ended to receive the corresponding
     * transmission. It is the end of the last bit's reception.
     */
    virtual const simtime_t getEndTime() const = 0;

    virtual const simtime_t getStartTime(IRadioSignal::SignalPart part) const = 0;
    virtual const simtime_t getEndTime(IRadioSignal::SignalPart part) const = 0;

    virtual const simtime_t getPreambleStartTime() const = 0;
    virtual const simtime_t getPreambleEndTime() const = 0;
    virtual const simtime_t getHeaderStartTime() const = 0;
    virtual const simtime_t getHeaderEndTime() const = 0;
    virtual const simtime_t getDataStartTime() const = 0;
    virtual const simtime_t getDataEndTime() const = 0;

    /**
     * Returns the total length of this reception.
     */
    virtual const simtime_t getDuration() const = 0;

    /**
     * Returns the length of the provided part of this reception.
     */
    virtual const simtime_t getDuration(IRadioSignal::SignalPart part) const = 0;

    /**
     * Returns the length of the preamble part of this reception.
     */
    virtual const simtime_t getPreambleDuration() const = 0;

    /**
     * Returns the length of the header part of this reception.
     */
    virtual const simtime_t getHeaderDuration() const = 0;

    /**
     * Returns the length of the data part of this reception.
     */
    virtual const simtime_t getDataDuration() const = 0;

    /**
     * Returns the antenna's position when the receiver started to receive
     * the corresponding transmission.
     */
    virtual const Coord getStartPosition() const = 0;

    /**
     * Returns the antenna's position when the receiver ended to receive the
     * corresponding transmission.
     */
    virtual const Coord getEndPosition() const = 0;

    /**
     * Returns the antenna's orientation when the receiver started to receive
     * the corresponding transmission.
     */
    virtual const EulerAngles getStartOrientation() const = 0;

    /**
     * Returns the antenna's orientation when the receiver ended to receive
     * the corresponding transmission.
     */
    virtual const EulerAngles getEndOrientation() const = 0;

    /**
     * Returns the analog model of the received signal.
     */
    virtual const IReceptionAnalogModel *getAnalogModel() const = 0;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IRECEPTION_H

