//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/ipv4/IGMPMessage.msg.
//

#ifndef _INETVEINS_IGMPMESSAGE_M_H_
#define _INETVEINS_IGMPMESSAGE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/networklayer/contract/ipv4/IPv4Address.h"
#include <vector>
// }}


namespace inetveins {

// cplusplus {{
typedef std::vector<IPv4Address> IPv4AddressVector;
// }}

/**
 * Enum generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:35</tt> by nedtool.
 * <pre>
 * enum IGMPType
 * {
 * 
 *     IGMP_MEMBERSHIP_QUERY = 0x11;
 *     IGMPV1_MEMBERSHIP_REPORT = 0x12;
 *     IGMPV2_MEMBERSHIP_REPORT = 0x16;
 *     IGMPV2_LEAVE_GROUP = 0x17;
 *     IGMPV3_MEMBERSHIP_REPORT = 0x22;
 * }
 * </pre>
 */
enum IGMPType {
    IGMP_MEMBERSHIP_QUERY = 0x11,
    IGMPV1_MEMBERSHIP_REPORT = 0x12,
    IGMPV2_MEMBERSHIP_REPORT = 0x16,
    IGMPV2_LEAVE_GROUP = 0x17,
    IGMPV3_MEMBERSHIP_REPORT = 0x22
};

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:44</tt> by nedtool.
 * <pre>
 * packet IGMPMessage
 * {
 *     int type @enum(IGMPType);
 * }
 * </pre>
 */
class IGMPMessage : public ::cPacket
{
  protected:
    int type_var;

  private:
    void copy(const IGMPMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPMessage&);

  public:
    IGMPMessage(const char *name=NULL, int kind=0);
    IGMPMessage(const IGMPMessage& other);
    virtual ~IGMPMessage();
    IGMPMessage& operator=(const IGMPMessage& other);
    virtual IGMPMessage *dup() const {return new IGMPMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type);
};

inline void doPacking(cCommBuffer *b, IGMPMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:49</tt> by nedtool.
 * <pre>
 * packet IGMPQuery extends IGMPMessage
 * {
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPQuery : public ::inetveins::IGMPMessage
{
  protected:
    IPv4Address groupAddress_var;

  private:
    void copy(const IGMPQuery& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPQuery&);

  public:
    IGMPQuery(const char *name=NULL, int kind=0);
    IGMPQuery(const IGMPQuery& other);
    virtual ~IGMPQuery();
    IGMPQuery& operator=(const IGMPQuery& other);
    virtual IGMPQuery *dup() const {return new IGMPQuery(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPQuery*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doPacking(cCommBuffer *b, IGMPQuery& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPQuery& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:54</tt> by nedtool.
 * <pre>
 * packet IGMPv1Query extends IGMPQuery
 * {
 *     type = IGMP_MEMBERSHIP_QUERY;
 * }
 * </pre>
 */
class IGMPv1Query : public ::inetveins::IGMPQuery
{
  protected:

  private:
    void copy(const IGMPv1Query& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv1Query&);

  public:
    IGMPv1Query(const char *name=NULL, int kind=0);
    IGMPv1Query(const IGMPv1Query& other);
    virtual ~IGMPv1Query();
    IGMPv1Query& operator=(const IGMPv1Query& other);
    virtual IGMPv1Query *dup() const {return new IGMPv1Query(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, IGMPv1Query& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPv1Query& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:59</tt> by nedtool.
 * <pre>
 * packet IGMPv1Report extends IGMPMessage
 * {
 *     type = IGMPV1_MEMBERSHIP_REPORT;
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPv1Report : public ::inetveins::IGMPMessage
{
  protected:
    IPv4Address groupAddress_var;

  private:
    void copy(const IGMPv1Report& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv1Report&);

  public:
    IGMPv1Report(const char *name=NULL, int kind=0);
    IGMPv1Report(const IGMPv1Report& other);
    virtual ~IGMPv1Report();
    IGMPv1Report& operator=(const IGMPv1Report& other);
    virtual IGMPv1Report *dup() const {return new IGMPv1Report(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPv1Report*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doPacking(cCommBuffer *b, IGMPv1Report& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPv1Report& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:65</tt> by nedtool.
 * <pre>
 * packet IGMPv2Query extends IGMPQuery
 * {
 *     @fieldNameSuffix("_var"); //TODO remove when OMNeT++ 4.x compatibility is no longer required
 *     type = IGMP_MEMBERSHIP_QUERY;
 *     unsigned char maxRespTime;
 * }
 * </pre>
 */
class IGMPv2Query : public ::inetveins::IGMPQuery
{
  protected:
    unsigned char maxRespTime_var;

  private:
    void copy(const IGMPv2Query& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv2Query&);

  public:
    IGMPv2Query(const char *name=NULL, int kind=0);
    IGMPv2Query(const IGMPv2Query& other);
    virtual ~IGMPv2Query();
    IGMPv2Query& operator=(const IGMPv2Query& other);
    virtual IGMPv2Query *dup() const {return new IGMPv2Query(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getMaxRespTime() const;
    virtual void setMaxRespTime(unsigned char maxRespTime);
};

inline void doPacking(cCommBuffer *b, IGMPv2Query& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPv2Query& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:72</tt> by nedtool.
 * <pre>
 * packet IGMPv2Report extends IGMPMessage
 * {
 *     type = IGMPV2_MEMBERSHIP_REPORT;
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPv2Report : public ::inetveins::IGMPMessage
{
  protected:
    IPv4Address groupAddress_var;

  private:
    void copy(const IGMPv2Report& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv2Report&);

  public:
    IGMPv2Report(const char *name=NULL, int kind=0);
    IGMPv2Report(const IGMPv2Report& other);
    virtual ~IGMPv2Report();
    IGMPv2Report& operator=(const IGMPv2Report& other);
    virtual IGMPv2Report *dup() const {return new IGMPv2Report(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPv2Report*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doPacking(cCommBuffer *b, IGMPv2Report& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPv2Report& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:78</tt> by nedtool.
 * <pre>
 * packet IGMPv2Leave extends IGMPMessage
 * {
 *     type = IGMPV2_LEAVE_GROUP;
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPv2Leave : public ::inetveins::IGMPMessage
{
  protected:
    IPv4Address groupAddress_var;

  private:
    void copy(const IGMPv2Leave& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv2Leave&);

  public:
    IGMPv2Leave(const char *name=NULL, int kind=0);
    IGMPv2Leave(const IGMPv2Leave& other);
    virtual ~IGMPv2Leave();
    IGMPv2Leave& operator=(const IGMPv2Leave& other);
    virtual IGMPv2Leave *dup() const {return new IGMPv2Leave(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPv2Leave*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doPacking(cCommBuffer *b, IGMPv2Leave& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPv2Leave& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:91</tt> by nedtool.
 * <pre>
 * //
 * // IGMPv3Query extends IGMPv2Query, because
 * // IGMPv2 routers must accept IGMPv3Query packets.
 * //
 * // Note: in IGMPv3Query the maxResponseTime field is
 * // renamed to maxResponseCode and it is interpreted
 * // differently than in IGMPv2.
 * packet IGMPv3Query extends IGMPv2Query
 * {
 *     @customize(true);
 *     @fieldNameSuffix("_var"); //TODO remove when OMNeT++ 4.x compatibility is no longer required
 *     bool suppressRouterProc;
 *     unsigned char robustnessVariable;
 *     unsigned char queryIntervalCode;
 *     IPv4AddressVector sourceList;
 *     abstract unsigned char maxRespCode;
 * }
 * </pre>
 *
 * IGMPv3Query_Base is only useful if it gets subclassed, and IGMPv3Query is derived from it.
 * The minimum code to be written for IGMPv3Query is the following:
 *
 * <pre>
 * class IGMPv3Query : public IGMPv3Query_Base
 * {
 *   private:
 *     void copy(const IGMPv3Query& other) { ... }

 *   public:
 *     IGMPv3Query(const char *name=NULL, int kind=0) : IGMPv3Query_Base(name,kind) {}
 *     IGMPv3Query(const IGMPv3Query& other) : IGMPv3Query_Base(other) {copy(other);}
 *     IGMPv3Query& operator=(const IGMPv3Query& other) {if (this==&other) return *this; IGMPv3Query_Base::operator=(other); copy(other); return *this;}
 *     virtual IGMPv3Query *dup() const {return new IGMPv3Query(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IGMPv3Query_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IGMPv3Query);
 * </pre>
 */
class IGMPv3Query_Base : public ::inetveins::IGMPv2Query
{
  protected:
    bool suppressRouterProc_var;
    unsigned char robustnessVariable_var;
    unsigned char queryIntervalCode_var;
    IPv4AddressVector sourceList_var;

  private:
    void copy(const IGMPv3Query_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv3Query_Base&);
    // make constructors protected to avoid instantiation
    IGMPv3Query_Base(const char *name=NULL, int kind=0);
    IGMPv3Query_Base(const IGMPv3Query_Base& other);
    // make assignment operator protected to force the user override it
    IGMPv3Query_Base& operator=(const IGMPv3Query_Base& other);

  public:
    virtual ~IGMPv3Query_Base();
    virtual IGMPv3Query_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IGMPv3Query");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getSuppressRouterProc() const;
    virtual void setSuppressRouterProc(bool suppressRouterProc);
    virtual unsigned char getRobustnessVariable() const;
    virtual void setRobustnessVariable(unsigned char robustnessVariable);
    virtual unsigned char getQueryIntervalCode() const;
    virtual void setQueryIntervalCode(unsigned char queryIntervalCode);
    virtual IPv4AddressVector& getSourceList();
    virtual const IPv4AddressVector& getSourceList() const {return const_cast<IGMPv3Query_Base*>(this)->getSourceList();}
    virtual void setSourceList(const IPv4AddressVector& sourceList);
    virtual unsigned char getMaxRespCode() const = 0;
    virtual void setMaxRespCode(unsigned char maxRespCode) = 0;
};

/**
 * Enum generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:102</tt> by nedtool.
 * <pre>
 * enum GroupRecordType
 * {
 * 
 *     MODE_IS_INCLUDE = 1;
 *     MODE_IS_EXCLUDE = 2;
 *     CHANGE_TO_INCLUDE_MODE = 3;
 *     CHANGE_TO_EXCLUDE_MODE = 4;
 *     ALLOW_NEW_SOURCES = 5;
 *     BLOCK_OLD_SOURCE = 6;
 * }
 * </pre>
 */
enum GroupRecordType {
    MODE_IS_INCLUDE = 1,
    MODE_IS_EXCLUDE = 2,
    CHANGE_TO_INCLUDE_MODE = 3,
    CHANGE_TO_EXCLUDE_MODE = 4,
    ALLOW_NEW_SOURCES = 5,
    BLOCK_OLD_SOURCE = 6
};

/**
 * Struct generated from inetveins/networklayer/ipv4/IGMPMessage.msg:112 by nedtool.
 */
struct GroupRecord
{
    GroupRecord();
    int recordType;
    IPv4Address groupAddress;
    IPv4AddressVector sourceList;
};

void doPacking(cCommBuffer *b, GroupRecord& a);
void doUnpacking(cCommBuffer *b, GroupRecord& a);

/**
 * Class generated from <tt>inetveins/networklayer/ipv4/IGMPMessage.msg:119</tt> by nedtool.
 * <pre>
 * packet IGMPv3Report extends IGMPMessage
 * {
 *     type = IGMPV3_MEMBERSHIP_REPORT;
 *     GroupRecord groupRecord[];
 * }
 * </pre>
 */
class IGMPv3Report : public ::inetveins::IGMPMessage
{
  protected:
    GroupRecord *groupRecord_var; // array ptr
    unsigned int groupRecord_arraysize;

  private:
    void copy(const IGMPv3Report& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv3Report&);

  public:
    IGMPv3Report(const char *name=NULL, int kind=0);
    IGMPv3Report(const IGMPv3Report& other);
    virtual ~IGMPv3Report();
    IGMPv3Report& operator=(const IGMPv3Report& other);
    virtual IGMPv3Report *dup() const {return new IGMPv3Report(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setGroupRecordArraySize(unsigned int size);
    virtual unsigned int getGroupRecordArraySize() const;
    virtual GroupRecord& getGroupRecord(unsigned int k);
    virtual const GroupRecord& getGroupRecord(unsigned int k) const {return const_cast<IGMPv3Report*>(this)->getGroupRecord(k);}
    virtual void setGroupRecord(unsigned int k, const GroupRecord& groupRecord);
};

inline void doPacking(cCommBuffer *b, IGMPv3Report& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IGMPv3Report& obj) {obj.parsimUnpack(b);}

} // namespace inetveins

#endif // ifndef _INETVEINS_IGMPMESSAGE_M_H_

