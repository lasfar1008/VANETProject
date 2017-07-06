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

#ifndef __INETVEINS_IEEE80211BAND_H
#define __INETVEINS_IEEE80211BAND_H

#include "inetveins/physicallayer/contract/packetlevel/IPrintableObject.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API IIeee80211Band : public IPrintableObject
{
  public:
    virtual std::ostream& printToStream(std::ostream& stream, int level) const override { return stream << "Ieee80211Band, name = " << getName(); }
    virtual const char *getName() const = 0;
    virtual int getNumChannels() const = 0;
    virtual Hz getCenterFreqency(int channelNumber) const = 0;
};

class INETVEINS_API Ieee80211BandBase : public IIeee80211Band
{
  protected:
    const char *name;

  public:
    Ieee80211BandBase(const char *name);

    virtual const char *getName() const { return name; }
};

class INETVEINS_API Ieee80211EnumeratedBand : public Ieee80211BandBase
{
  protected:
    std::vector<Hz> centers;

  public:
    Ieee80211EnumeratedBand(const char *name, const std::vector<Hz> centers);

    virtual int getNumChannels() const { return centers.size(); }
    virtual Hz getCenterFreqency(int channelNumber) const;
};

class INETVEINS_API Ieee80211ArithmeticalBand : public Ieee80211BandBase
{
  protected:
    Hz start;
    Hz spacing;
    int numChannels;

  public:
    Ieee80211ArithmeticalBand(const char *name, Hz start, Hz spacing, int numChannels);

    virtual int getNumChannels() const { return numChannels; }
    virtual Hz getCenterFreqency(int channelNumber) const;
};

class INETVEINS_API Ieee80211CompliantBands
{
  protected:
    static const std::vector<const IIeee80211Band *> bands;

  public:
    static const Ieee80211EnumeratedBand band2_4GHz;
    static const Ieee80211ArithmeticalBand band5GHz;
    static const Ieee80211ArithmeticalBand band5_9GHz;

    static const IIeee80211Band *findBand(const char *name);
    static const IIeee80211Band *getBand(const char *name);
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IEEE80211BAND_H

