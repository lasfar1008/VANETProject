//
// Generated file, do not edit! Created by nedtool 4.6 from wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg.
//

#ifndef _IEEE802154FRAME_M_H_
#define _IEEE802154FRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "Ieee802154Const.h"
#include "Ieee802154Def.h"
#include "Ieee802154Enum.h"
#include "Ieee802154Field.h"
// }}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:27</tt> by nedtool.
 * <pre>
 * packet Ieee802154Frame
 * {
 *     //	MHR
 *     //	Frame control fieled (FCF)(16 bits) - Fig 35
 *     FrameCtrl frmCtrl;
 * 
 *     //	Sequence number field (8 bits)
 *     unsigned char bdsn;
 * 
 *     //	Addressing fields
 *     uint16_t dstPanId;
 *     MACAddress dstAddr;
 *     uint16_t srcPanId;
 *     MACAddress srcAddr;
 * 
 *     bool isIndirect = false;
 *     bool isGTS = false;
 * 
 * 		//	MFR
 * 		//	FCS is not modeled and only included in the length (2 bytes)
 * }
 * 
 * 
 * // *****************************************
 * // Format of 802.15.4 beacon frame - Fig 37
 * // *****************************************
 * </pre>
 */
class Ieee802154Frame : public ::cPacket
{
  protected:
    FrameCtrl frmCtrl_var;
    unsigned char bdsn_var;
    uint16_t dstPanId_var;
    MACAddress dstAddr_var;
    uint16_t srcPanId_var;
    MACAddress srcAddr_var;
    bool isIndirect_var;
    bool isGTS_var;

  private:
    void copy(const Ieee802154Frame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154Frame&);

  public:
    Ieee802154Frame(const char *name=NULL, int kind=0);
    Ieee802154Frame(const Ieee802154Frame& other);
    virtual ~Ieee802154Frame();
    Ieee802154Frame& operator=(const Ieee802154Frame& other);
    virtual Ieee802154Frame *dup() const {return new Ieee802154Frame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual FrameCtrl& getFrmCtrl();
    virtual const FrameCtrl& getFrmCtrl() const {return const_cast<Ieee802154Frame*>(this)->getFrmCtrl();}
    virtual void setFrmCtrl(const FrameCtrl& frmCtrl);
    virtual unsigned char getBdsn() const;
    virtual void setBdsn(unsigned char bdsn);
    virtual uint16_t getDstPanId() const;
    virtual void setDstPanId(uint16_t dstPanId);
    virtual MACAddress& getDstAddr();
    virtual const MACAddress& getDstAddr() const {return const_cast<Ieee802154Frame*>(this)->getDstAddr();}
    virtual void setDstAddr(const MACAddress& dstAddr);
    virtual uint16_t getSrcPanId() const;
    virtual void setSrcPanId(uint16_t srcPanId);
    virtual MACAddress& getSrcAddr();
    virtual const MACAddress& getSrcAddr() const {return const_cast<Ieee802154Frame*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const MACAddress& srcAddr);
    virtual bool getIsIndirect() const;
    virtual void setIsIndirect(bool isIndirect);
    virtual bool getIsGTS() const;
    virtual void setIsGTS(bool isGTS);
};

inline void doPacking(cCommBuffer *b, Ieee802154Frame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154Frame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:54</tt> by nedtool.
 * <pre>
 * packet Ieee802154BeaconFrame extends Ieee802154Frame
 * {
 *     // MAC payload in beacon frames
 *     SuperframeSpec sfSpec;
 * 
 * 		//GTSDescriptor gtsList[7];
 * 		//unsigned short gtsCount;		
 * 
 * 		//PendingAddrFields paFields;
 * 			//	Pending address fields (PAF) - Fig 39
 * 				// Pending address specification (8 bits) - Fig 44
 * 					//unsigned char numShortAddr;		// number of short addresses pending
 * 					//unsigned char numExtAddr;		// number of extended addresses pending
 * 				// Address list
 * 					//unsigned short addrList[7];		// pending address list, including short and extended, max 7
 * }
 * 
 * 
 * // ********************************
 * // Format of 802.15.4 Data frame 	
 * // ********************************
 * </pre>
 */
class Ieee802154BeaconFrame : public ::Ieee802154Frame
{
  protected:
    SuperframeSpec sfSpec_var;

  private:
    void copy(const Ieee802154BeaconFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154BeaconFrame&);

  public:
    Ieee802154BeaconFrame(const char *name=NULL, int kind=0);
    Ieee802154BeaconFrame(const Ieee802154BeaconFrame& other);
    virtual ~Ieee802154BeaconFrame();
    Ieee802154BeaconFrame& operator=(const Ieee802154BeaconFrame& other);
    virtual Ieee802154BeaconFrame *dup() const {return new Ieee802154BeaconFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual SuperframeSpec& getSfSpec();
    virtual const SuperframeSpec& getSfSpec() const {return const_cast<Ieee802154BeaconFrame*>(this)->getSfSpec();}
    virtual void setSfSpec(const SuperframeSpec& sfSpec);
};

inline void doPacking(cCommBuffer *b, Ieee802154BeaconFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154BeaconFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:76</tt> by nedtool.
 * <pre>
 * packet Ieee802154DataFrame extends Ieee802154Frame
 * {
 * }
 * 
 * // ******************************		
 * // Format of 802.15.4 Ack frame
 * // ******************************
 * </pre>
 */
class Ieee802154DataFrame : public ::Ieee802154Frame
{
  protected:

  private:
    void copy(const Ieee802154DataFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154DataFrame&);

  public:
    Ieee802154DataFrame(const char *name=NULL, int kind=0);
    Ieee802154DataFrame(const Ieee802154DataFrame& other);
    virtual ~Ieee802154DataFrame();
    Ieee802154DataFrame& operator=(const Ieee802154DataFrame& other);
    virtual Ieee802154DataFrame *dup() const {return new Ieee802154DataFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee802154DataFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154DataFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:84</tt> by nedtool.
 * <pre>
 * message Ieee802154AckFrame extends Ieee802154Frame
 * {
 * }
 * 
 * // ********************************				
 * // Format of 802.15.4 command frame
 * // ********************************
 * </pre>
 */
class Ieee802154AckFrame : public ::Ieee802154Frame
{
  protected:

  private:
    void copy(const Ieee802154AckFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154AckFrame&);

  public:
    Ieee802154AckFrame(const char *name=NULL, int kind=0);
    Ieee802154AckFrame(const Ieee802154AckFrame& other);
    virtual ~Ieee802154AckFrame();
    Ieee802154AckFrame& operator=(const Ieee802154AckFrame& other);
    virtual Ieee802154AckFrame *dup() const {return new Ieee802154AckFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee802154AckFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154AckFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:92</tt> by nedtool.
 * <pre>
 * message Ieee802154CmdFrame extends Ieee802154Frame
 * {
 *     int cmdType @enum(Ieee802154MacCmdType);
 * 
 * }
 * </pre>
 */
class Ieee802154CmdFrame : public ::Ieee802154Frame
{
  protected:
    int cmdType_var;

  private:
    void copy(const Ieee802154CmdFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154CmdFrame&);

  public:
    Ieee802154CmdFrame(const char *name=NULL, int kind=0);
    Ieee802154CmdFrame(const Ieee802154CmdFrame& other);
    virtual ~Ieee802154CmdFrame();
    Ieee802154CmdFrame& operator=(const Ieee802154CmdFrame& other);
    virtual Ieee802154CmdFrame *dup() const {return new Ieee802154CmdFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCmdType() const;
    virtual void setCmdType(int cmdType);
};

inline void doPacking(cCommBuffer *b, Ieee802154CmdFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154CmdFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:99</tt> by nedtool.
 * <pre>
 * // *** Association request command - Fig 48 ***
 * message Ieee802154AssoReqtCmd extends Ieee802154CmdFrame
 * {
 *     DevCapability capability;
 * }
 * </pre>
 */
class Ieee802154AssoReqtCmd : public ::Ieee802154CmdFrame
{
  protected:
    DevCapability capability_var;

  private:
    void copy(const Ieee802154AssoReqtCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154AssoReqtCmd&);

  public:
    Ieee802154AssoReqtCmd(const char *name=NULL, int kind=0);
    Ieee802154AssoReqtCmd(const Ieee802154AssoReqtCmd& other);
    virtual ~Ieee802154AssoReqtCmd();
    Ieee802154AssoReqtCmd& operator=(const Ieee802154AssoReqtCmd& other);
    virtual Ieee802154AssoReqtCmd *dup() const {return new Ieee802154AssoReqtCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual DevCapability& getCapability();
    virtual const DevCapability& getCapability() const {return const_cast<Ieee802154AssoReqtCmd*>(this)->getCapability();}
    virtual void setCapability(const DevCapability& capability);
};

inline void doPacking(cCommBuffer *b, Ieee802154AssoReqtCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154AssoReqtCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:105</tt> by nedtool.
 * <pre>
 * // *** Association response command (ARC) - Fig 50 ***
 * message Ieee802154AssoRespCmd extends Ieee802154CmdFrame
 * {
 *     // Command payload
 *     unsigned short shortAddr;		// short address field
 * 																// 16 bits short address allocated by coordinator
 * 																// 0xffff: association failed
 * 
 *     bool atCapacity;						// association status field - Table 68 (modified)
 * 																// failed reason, true: at capacity, false: access denied
 * 
 * }
 * </pre>
 */
class Ieee802154AssoRespCmd : public ::Ieee802154CmdFrame
{
  protected:
    unsigned short shortAddr_var;
    bool atCapacity_var;

  private:
    void copy(const Ieee802154AssoRespCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154AssoRespCmd&);

  public:
    Ieee802154AssoRespCmd(const char *name=NULL, int kind=0);
    Ieee802154AssoRespCmd(const Ieee802154AssoRespCmd& other);
    virtual ~Ieee802154AssoRespCmd();
    Ieee802154AssoRespCmd& operator=(const Ieee802154AssoRespCmd& other);
    virtual Ieee802154AssoRespCmd *dup() const {return new Ieee802154AssoRespCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getShortAddr() const;
    virtual void setShortAddr(unsigned short shortAddr);
    virtual bool getAtCapacity() const;
    virtual void setAtCapacity(bool atCapacity);
};

inline void doPacking(cCommBuffer *b, Ieee802154AssoRespCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154AssoRespCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:118</tt> by nedtool.
 * <pre>
 * // *** Disassociation notification command (DNC)- Fig 51 ***
 * message Ieee802154DisassoNotiCmd extends Ieee802154CmdFrame
 * {
 *     // Command payload
 *     bool isCoor;		// disassociation reason - Table 69, true: coordinator, false: device
 * }
 * </pre>
 */
class Ieee802154DisassoNotiCmd : public ::Ieee802154CmdFrame
{
  protected:
    bool isCoor_var;

  private:
    void copy(const Ieee802154DisassoNotiCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154DisassoNotiCmd&);

  public:
    Ieee802154DisassoNotiCmd(const char *name=NULL, int kind=0);
    Ieee802154DisassoNotiCmd(const Ieee802154DisassoNotiCmd& other);
    virtual ~Ieee802154DisassoNotiCmd();
    Ieee802154DisassoNotiCmd& operator=(const Ieee802154DisassoNotiCmd& other);
    virtual Ieee802154DisassoNotiCmd *dup() const {return new Ieee802154DisassoNotiCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getIsCoor() const;
    virtual void setIsCoor(bool isCoor);
};

inline void doPacking(cCommBuffer *b, Ieee802154DisassoNotiCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154DisassoNotiCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:125</tt> by nedtool.
 * <pre>
 * // *** Data request command - Fig 52 *** 
 * message Ieee802154DataReqtCmd extends Ieee802154CmdFrame
 * {
 * }
 * </pre>
 */
class Ieee802154DataReqtCmd : public ::Ieee802154CmdFrame
{
  protected:

  private:
    void copy(const Ieee802154DataReqtCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154DataReqtCmd&);

  public:
    Ieee802154DataReqtCmd(const char *name=NULL, int kind=0);
    Ieee802154DataReqtCmd(const Ieee802154DataReqtCmd& other);
    virtual ~Ieee802154DataReqtCmd();
    Ieee802154DataReqtCmd& operator=(const Ieee802154DataReqtCmd& other);
    virtual Ieee802154DataReqtCmd *dup() const {return new Ieee802154DataReqtCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee802154DataReqtCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154DataReqtCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:130</tt> by nedtool.
 * <pre>
 * // *** PAN ID conflict notification command - Fig 53 *** 
 * message Ieee802154PanIdConflictNotiCmd extends Ieee802154CmdFrame
 * {
 * }
 * </pre>
 */
class Ieee802154PanIdConflictNotiCmd : public ::Ieee802154CmdFrame
{
  protected:

  private:
    void copy(const Ieee802154PanIdConflictNotiCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154PanIdConflictNotiCmd&);

  public:
    Ieee802154PanIdConflictNotiCmd(const char *name=NULL, int kind=0);
    Ieee802154PanIdConflictNotiCmd(const Ieee802154PanIdConflictNotiCmd& other);
    virtual ~Ieee802154PanIdConflictNotiCmd();
    Ieee802154PanIdConflictNotiCmd& operator=(const Ieee802154PanIdConflictNotiCmd& other);
    virtual Ieee802154PanIdConflictNotiCmd *dup() const {return new Ieee802154PanIdConflictNotiCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee802154PanIdConflictNotiCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154PanIdConflictNotiCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:135</tt> by nedtool.
 * <pre>
 * // *** Orphan notification command - Fig 54 *** 
 * message Ieee802154OrphanNotiCmd extends Ieee802154CmdFrame
 * {
 * }
 * </pre>
 */
class Ieee802154OrphanNotiCmd : public ::Ieee802154CmdFrame
{
  protected:

  private:
    void copy(const Ieee802154OrphanNotiCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154OrphanNotiCmd&);

  public:
    Ieee802154OrphanNotiCmd(const char *name=NULL, int kind=0);
    Ieee802154OrphanNotiCmd(const Ieee802154OrphanNotiCmd& other);
    virtual ~Ieee802154OrphanNotiCmd();
    Ieee802154OrphanNotiCmd& operator=(const Ieee802154OrphanNotiCmd& other);
    virtual Ieee802154OrphanNotiCmd *dup() const {return new Ieee802154OrphanNotiCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee802154OrphanNotiCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154OrphanNotiCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:140</tt> by nedtool.
 * <pre>
 * // *** Beacon request command - Fig 55 *** 
 * message Ieee802154BeaconReqtCmd extends Ieee802154CmdFrame
 * {
 * }
 * </pre>
 */
class Ieee802154BeaconReqtCmd : public ::Ieee802154CmdFrame
{
  protected:

  private:
    void copy(const Ieee802154BeaconReqtCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154BeaconReqtCmd&);

  public:
    Ieee802154BeaconReqtCmd(const char *name=NULL, int kind=0);
    Ieee802154BeaconReqtCmd(const Ieee802154BeaconReqtCmd& other);
    virtual ~Ieee802154BeaconReqtCmd();
    Ieee802154BeaconReqtCmd& operator=(const Ieee802154BeaconReqtCmd& other);
    virtual Ieee802154BeaconReqtCmd *dup() const {return new Ieee802154BeaconReqtCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee802154BeaconReqtCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154BeaconReqtCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:145</tt> by nedtool.
 * <pre>
 * // *** Coordinator realignment command (CRC) - Fig 56 *** 
 * message Ieee802154CoorRealignCmd extends Ieee802154CmdFrame
 * {
 *     // Command payload
 *     unsigned short panId;						// PAN identifier field
 *     unsigned short coorShortAddr;		// coordinator short address field
 *     unsigned char logiChannel;			// logical channel field
 *     unsigned short shortAddr;				// short address field, 16 bits
 * 
 * }
 * </pre>
 */
class Ieee802154CoorRealignCmd : public ::Ieee802154CmdFrame
{
  protected:
    unsigned short panId_var;
    unsigned short coorShortAddr_var;
    unsigned char logiChannel_var;
    unsigned short shortAddr_var;

  private:
    void copy(const Ieee802154CoorRealignCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154CoorRealignCmd&);

  public:
    Ieee802154CoorRealignCmd(const char *name=NULL, int kind=0);
    Ieee802154CoorRealignCmd(const Ieee802154CoorRealignCmd& other);
    virtual ~Ieee802154CoorRealignCmd();
    Ieee802154CoorRealignCmd& operator=(const Ieee802154CoorRealignCmd& other);
    virtual Ieee802154CoorRealignCmd *dup() const {return new Ieee802154CoorRealignCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getPanId() const;
    virtual void setPanId(unsigned short panId);
    virtual unsigned short getCoorShortAddr() const;
    virtual void setCoorShortAddr(unsigned short coorShortAddr);
    virtual unsigned char getLogiChannel() const;
    virtual void setLogiChannel(unsigned char logiChannel);
    virtual unsigned short getShortAddr() const;
    virtual void setShortAddr(unsigned short shortAddr);
};

inline void doPacking(cCommBuffer *b, Ieee802154CoorRealignCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154CoorRealignCmd& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg:156</tt> by nedtool.
 * <pre>
 * // *** GTS request command (GRC) - Fig 57 *** 
 * message Ieee802154GtsReqtCmd extends Ieee802154CmdFrame
 * {
 *     // Command payload
 *     unsigned char gtsLength;	// number of superframe slots for GTS, 4 bit
 *     bool recvOnly;		// true: receive-only GTS, false: transmit-only GTS
 *     bool isAllocation;		// ture: GTS allocation, false: GTS deallocation
 * 
 * }
 * </pre>
 */
class Ieee802154GtsReqtCmd : public ::Ieee802154CmdFrame
{
  protected:
    unsigned char gtsLength_var;
    bool recvOnly_var;
    bool isAllocation_var;

  private:
    void copy(const Ieee802154GtsReqtCmd& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154GtsReqtCmd&);

  public:
    Ieee802154GtsReqtCmd(const char *name=NULL, int kind=0);
    Ieee802154GtsReqtCmd(const Ieee802154GtsReqtCmd& other);
    virtual ~Ieee802154GtsReqtCmd();
    Ieee802154GtsReqtCmd& operator=(const Ieee802154GtsReqtCmd& other);
    virtual Ieee802154GtsReqtCmd *dup() const {return new Ieee802154GtsReqtCmd(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getGtsLength() const;
    virtual void setGtsLength(unsigned char gtsLength);
    virtual bool getRecvOnly() const;
    virtual void setRecvOnly(bool recvOnly);
    virtual bool getIsAllocation() const;
    virtual void setIsAllocation(bool isAllocation);
};

inline void doPacking(cCommBuffer *b, Ieee802154GtsReqtCmd& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154GtsReqtCmd& obj) {obj.parsimUnpack(b);}


#endif // ifndef _IEEE802154FRAME_M_H_

