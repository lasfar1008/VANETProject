//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/physicallayer/apskradio/bitlevel/APSKPhyFrame.msg.
//

#ifndef _INETVEINS__PHYSICALLAYER_APSKPHYFRAME_M_H_
#define _INETVEINS__PHYSICALLAYER_APSKPHYFRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inetveins {
namespace physicallayer {

/**
 * Class generated from <tt>inetveins/physicallayer/apskradio/bitlevel/APSKPhyFrame.msg:21</tt> by nedtool.
 * <pre>
 * packet APSKPhyFrame
 * {
 * }
 * </pre>
 */
class APSKPhyFrame : public ::cPacket
{
  protected:

  private:
    void copy(const APSKPhyFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const APSKPhyFrame&);

  public:
    APSKPhyFrame(const char *name=NULL, int kind=0);
    APSKPhyFrame(const APSKPhyFrame& other);
    virtual ~APSKPhyFrame();
    APSKPhyFrame& operator=(const APSKPhyFrame& other);
    virtual APSKPhyFrame *dup() const {return new APSKPhyFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, APSKPhyFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, APSKPhyFrame& obj) {obj.parsimUnpack(b);}

} // namespace physicallayer
} // namespace inetveins

#endif // ifndef _INETVEINS__PHYSICALLAYER_APSKPHYFRAME_M_H_

