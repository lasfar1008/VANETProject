//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/wiseroute/WiseRouteDatagram.msg.
//

#ifndef _INETVEINS_WISEROUTEDATAGRAM_M_H_
#define _INETVEINS_WISEROUTEDATAGRAM_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
   #include "inetveins/networklayer/base/NetworkDatagramBase_m.h"
// }}


namespace inetveins {

/**
 * Class generated from <tt>inetveins/networklayer/wiseroute/WiseRouteDatagram.msg:28</tt> by nedtool.
 * <pre>
 * packet WiseRouteDatagram extends NetworkDatagramBase
 * {
 *     @customize(true);
 * 
 *     unsigned long seqNum = 0;
 *     int isFlood;
 *     int nbHops;
 *     int transportProtocol = -1;
 *     L3Address finalDestAddr;
 *     L3Address initialSrcAddr;
 * }
 * </pre>
 *
 * WiseRouteDatagram_Base is only useful if it gets subclassed, and WiseRouteDatagram is derived from it.
 * The minimum code to be written for WiseRouteDatagram is the following:
 *
 * <pre>
 * class WiseRouteDatagram : public WiseRouteDatagram_Base
 * {
 *   private:
 *     void copy(const WiseRouteDatagram& other) { ... }

 *   public:
 *     WiseRouteDatagram(const char *name=NULL, int kind=0) : WiseRouteDatagram_Base(name,kind) {}
 *     WiseRouteDatagram(const WiseRouteDatagram& other) : WiseRouteDatagram_Base(other) {copy(other);}
 *     WiseRouteDatagram& operator=(const WiseRouteDatagram& other) {if (this==&other) return *this; WiseRouteDatagram_Base::operator=(other); copy(other); return *this;}
 *     virtual WiseRouteDatagram *dup() const {return new WiseRouteDatagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from WiseRouteDatagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(WiseRouteDatagram);
 * </pre>
 */
class WiseRouteDatagram_Base : public ::inetveins::NetworkDatagramBase
{
  protected:
    unsigned long seqNum_var;
    int isFlood_var;
    int nbHops_var;
    int transportProtocol_var;
    L3Address finalDestAddr_var;
    L3Address initialSrcAddr_var;

  private:
    void copy(const WiseRouteDatagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WiseRouteDatagram_Base&);
    // make constructors protected to avoid instantiation
    WiseRouteDatagram_Base(const char *name=NULL, int kind=0);
    WiseRouteDatagram_Base(const WiseRouteDatagram_Base& other);
    // make assignment operator protected to force the user override it
    WiseRouteDatagram_Base& operator=(const WiseRouteDatagram_Base& other);

  public:
    virtual ~WiseRouteDatagram_Base();
    virtual WiseRouteDatagram_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class WiseRouteDatagram");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned long getSeqNum() const;
    virtual void setSeqNum(unsigned long seqNum);
    virtual int getIsFlood() const;
    virtual void setIsFlood(int isFlood);
    virtual int getNbHops() const;
    virtual void setNbHops(int nbHops);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual L3Address& getFinalDestAddr();
    virtual const L3Address& getFinalDestAddr() const {return const_cast<WiseRouteDatagram_Base*>(this)->getFinalDestAddr();}
    virtual void setFinalDestAddr(const L3Address& finalDestAddr);
    virtual L3Address& getInitialSrcAddr();
    virtual const L3Address& getInitialSrcAddr() const {return const_cast<WiseRouteDatagram_Base*>(this)->getInitialSrcAddr();}
    virtual void setInitialSrcAddr(const L3Address& initialSrcAddr);
};

} // namespace inetveins

#endif // ifndef _INETVEINS_WISEROUTEDATAGRAM_M_H_

