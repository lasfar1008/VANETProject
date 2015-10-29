//
// Generated file, do not edit! Created by nedtool 4.6 from applications/udpapp/UDPVideoData.msg.
//

#ifndef _UDPVIDEODATA_M_H_
#define _UDPVIDEODATA_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "INETDefs.h"
// }}

/**
 * Class generated from <tt>applications/udpapp/UDPVideoData.msg:25</tt> by nedtool.
 * <pre>
 * //
 * // Message class used by ~        
 * //
 * packet UDPVideoDataPacket
 * {
 *     long videoSize = 0;           ///< total size of video
 *     long bytesLeft = 0;           ///< bytes left to transmit
 *     long numPkSent = 0;           ///< number of packets sent.
 * }
 * </pre>
 */
class UDPVideoDataPacket : public ::cPacket
{
  protected:
    long videoSize_var;
    long bytesLeft_var;
    long numPkSent_var;

  private:
    void copy(const UDPVideoDataPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const UDPVideoDataPacket&);

  public:
    UDPVideoDataPacket(const char *name=NULL, int kind=0);
    UDPVideoDataPacket(const UDPVideoDataPacket& other);
    virtual ~UDPVideoDataPacket();
    UDPVideoDataPacket& operator=(const UDPVideoDataPacket& other);
    virtual UDPVideoDataPacket *dup() const {return new UDPVideoDataPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual long getVideoSize() const;
    virtual void setVideoSize(long videoSize);
    virtual long getBytesLeft() const;
    virtual void setBytesLeft(long bytesLeft);
    virtual long getNumPkSent() const;
    virtual void setNumPkSent(long numPkSent);
};

inline void doPacking(cCommBuffer *b, UDPVideoDataPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, UDPVideoDataPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _UDPVIDEODATA_M_H_

