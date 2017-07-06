/***************************************************************************
* author:      Andreas Kuntz
*
* copyright:   (c) 2008 Institute of Telematics, University of Karlsruhe (TH)
*
* author:      Alfonso Ariza
*              Malaga university
*
*              This program is free software; you can redistribute it
*              and/or modify it under the terms of the GNU General Public
*              License as published by the Free Software Foundation; either
*              version 2 of the License, or (at your option) any later
*              version.
*              For further information see file COPYING
*              in the top level directory
***************************************************************************/

#ifndef __INETVEINS_NAKAGAMIFADING_H
#define __INETVEINS_NAKAGAMIFADING_H

#include "inetveins/physicallayer/pathloss/FreeSpacePathLoss.h"

namespace inetveins {

namespace physicallayer {

/**
 * This class implements the Nakagami fading model.
 */
class INETVEINS_API NakagamiFading : public FreeSpacePathLoss
{
  protected:
    double shapeFactor;

  protected:
    virtual void initialize(int stage) override;

  public:
    NakagamiFading();
    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    virtual double computePathLoss(mps propagationSpeed, Hz frequency, m distance) const override;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_NAKAGAMIFADING_H

