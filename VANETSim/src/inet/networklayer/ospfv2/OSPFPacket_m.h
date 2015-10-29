//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/ospfv2/OSPFPacket.msg.
//

#ifndef _OSPFPACKET_M_H_
#define _OSPFPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "IPv4Address.h"
// }}

/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFPacket.msg:26</tt> by nedtool.
 * <pre>
 * enum OSPFPacketType
 * {
 * 
 *     HELLO_PACKET = 1;
 *     DATABASE_DESCRIPTION_PACKET = 2;
 *     LINKSTATE_REQUEST_PACKET = 3;
 *     LINKSTATE_UPDATE_PACKET = 4;
 *     LINKSTATE_ACKNOWLEDGEMENT_PACKET = 5;
 * }
 * </pre>
 */
enum OSPFPacketType {
    HELLO_PACKET = 1,
    DATABASE_DESCRIPTION_PACKET = 2,
    LINKSTATE_REQUEST_PACKET = 3,
    LINKSTATE_UPDATE_PACKET = 4,
    LINKSTATE_ACKNOWLEDGEMENT_PACKET = 5
};

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg:36 by nedtool.
 */
struct OSPFOptions
{
    OSPFOptions();
    bool unused_1;
    bool E_ExternalRoutingCapability;
    bool MC_MulticastForwarding;
    bool NP_Type7LSA;
    bool EA_ForwardExternalLSAs;
    bool DC_DemandCircuits;
    bool unused_2;
    bool unused_3;
};

void doPacking(cCommBuffer *b, OSPFOptions& a);
void doUnpacking(cCommBuffer *b, OSPFOptions& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:51</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF packet header
 * //
 * packet OSPFPacket
 * {
 *     char version = 2;
 *     char type @enum(OSPFPacketType) = HELLO_PACKET;
 * 
 *     IPv4Address routerID;
 *     IPv4Address areaID;
 * 
 *     short authenticationType = 0;
 *     char authentication[8];
 * }
 * </pre>
 */
class OSPFPacket : public ::cPacket
{
  protected:
    char version_var;
    char type_var;
    IPv4Address routerID_var;
    IPv4Address areaID_var;
    short authenticationType_var;
    char authentication_var[8];

  private:
    void copy(const OSPFPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFPacket&);

  public:
    OSPFPacket(const char *name=NULL, int kind=0);
    OSPFPacket(const OSPFPacket& other);
    virtual ~OSPFPacket();
    OSPFPacket& operator=(const OSPFPacket& other);
    virtual OSPFPacket *dup() const {return new OSPFPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char getVersion() const;
    virtual void setVersion(char version);
    virtual char getType() const;
    virtual void setType(char type);
    virtual IPv4Address& getRouterID();
    virtual const IPv4Address& getRouterID() const {return const_cast<OSPFPacket*>(this)->getRouterID();}
    virtual void setRouterID(const IPv4Address& routerID);
    virtual IPv4Address& getAreaID();
    virtual const IPv4Address& getAreaID() const {return const_cast<OSPFPacket*>(this)->getAreaID();}
    virtual void setAreaID(const IPv4Address& areaID);
    virtual short getAuthenticationType() const;
    virtual void setAuthenticationType(short authenticationType);
    virtual unsigned int getAuthenticationArraySize() const;
    virtual char getAuthentication(unsigned int k) const;
    virtual void setAuthentication(unsigned int k, char authentication);
};

inline void doPacking(cCommBuffer *b, OSPFPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:66</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Hello packet
 * //
 * packet OSPFHelloPacket extends OSPFPacket
 * {
 *     IPv4Address networkMask;
 * 
 *     short helloInterval = 5;
 * 
 *     OSPFOptions options;
 * 
 *     char routerPriority = 0;
 *     long routerDeadInterval = 0;
 * 
 *     IPv4Address designatedRouter;
 *     IPv4Address backupDesignatedRouter;
 *     IPv4Address neighbor[];
 * }
 * </pre>
 */
class OSPFHelloPacket : public ::OSPFPacket
{
  protected:
    IPv4Address networkMask_var;
    short helloInterval_var;
    OSPFOptions options_var;
    char routerPriority_var;
    long routerDeadInterval_var;
    IPv4Address designatedRouter_var;
    IPv4Address backupDesignatedRouter_var;
    IPv4Address *neighbor_var; // array ptr
    unsigned int neighbor_arraysize;

  private:
    void copy(const OSPFHelloPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFHelloPacket&);

  public:
    OSPFHelloPacket(const char *name=NULL, int kind=0);
    OSPFHelloPacket(const OSPFHelloPacket& other);
    virtual ~OSPFHelloPacket();
    OSPFHelloPacket& operator=(const OSPFHelloPacket& other);
    virtual OSPFHelloPacket *dup() const {return new OSPFHelloPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFHelloPacket*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual short getHelloInterval() const;
    virtual void setHelloInterval(short helloInterval);
    virtual OSPFOptions& getOptions();
    virtual const OSPFOptions& getOptions() const {return const_cast<OSPFHelloPacket*>(this)->getOptions();}
    virtual void setOptions(const OSPFOptions& options);
    virtual char getRouterPriority() const;
    virtual void setRouterPriority(char routerPriority);
    virtual long getRouterDeadInterval() const;
    virtual void setRouterDeadInterval(long routerDeadInterval);
    virtual IPv4Address& getDesignatedRouter();
    virtual const IPv4Address& getDesignatedRouter() const {return const_cast<OSPFHelloPacket*>(this)->getDesignatedRouter();}
    virtual void setDesignatedRouter(const IPv4Address& designatedRouter);
    virtual IPv4Address& getBackupDesignatedRouter();
    virtual const IPv4Address& getBackupDesignatedRouter() const {return const_cast<OSPFHelloPacket*>(this)->getBackupDesignatedRouter();}
    virtual void setBackupDesignatedRouter(const IPv4Address& backupDesignatedRouter);
    virtual void setNeighborArraySize(unsigned int size);
    virtual unsigned int getNeighborArraySize() const;
    virtual IPv4Address& getNeighbor(unsigned int k);
    virtual const IPv4Address& getNeighbor(unsigned int k) const {return const_cast<OSPFHelloPacket*>(this)->getNeighbor(k);}
    virtual void setNeighbor(unsigned int k, const IPv4Address& neighbor);
};

inline void doPacking(cCommBuffer *b, OSPFHelloPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFHelloPacket& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFPacket.msg:83</tt> by nedtool.
 * <pre>
 * enum LSAType
 * {
 * 
 *     ROUTERLSA_TYPE = 1;
 *     NETWORKLSA_TYPE = 2;
 *     SUMMARYLSA_NETWORKS_TYPE = 3;
 *     SUMMARYLSA_ASBOUNDARYROUTERS_TYPE = 4;
 *     AS_EXTERNAL_LSA_TYPE = 5;
 * }
 * </pre>
 */
enum LSAType {
    ROUTERLSA_TYPE = 1,
    NETWORKLSA_TYPE = 2,
    SUMMARYLSA_NETWORKS_TYPE = 3,
    SUMMARYLSA_ASBOUNDARYROUTERS_TYPE = 4,
    AS_EXTERNAL_LSA_TYPE = 5
};

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:95</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF LSA header
 * //
 * class OSPFLSAHeader
 * {
 *     unsigned short lsAge = 0;
 *     OSPFOptions lsOptions;
 *     char lsType @enum(LSAType) = ROUTERLSA_TYPE;
 *     IPv4Address linkStateID;
 *     IPv4Address advertisingRouter;
 *     long lsSequenceNumber = 0;
 *     unsigned short lsaLength = 0;
 * }
 * </pre>
 */
class OSPFLSAHeader : public ::cObject
{
  protected:
    unsigned short lsAge_var;
    OSPFOptions lsOptions_var;
    char lsType_var;
    IPv4Address linkStateID_var;
    IPv4Address advertisingRouter_var;
    long lsSequenceNumber_var;
    unsigned short lsaLength_var;

  private:
    void copy(const OSPFLSAHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLSAHeader&);

  public:
    OSPFLSAHeader();
    OSPFLSAHeader(const OSPFLSAHeader& other);
    virtual ~OSPFLSAHeader();
    OSPFLSAHeader& operator=(const OSPFLSAHeader& other);
    virtual OSPFLSAHeader *dup() const {return new OSPFLSAHeader(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getLsAge() const;
    virtual void setLsAge(unsigned short lsAge);
    virtual OSPFOptions& getLsOptions();
    virtual const OSPFOptions& getLsOptions() const {return const_cast<OSPFLSAHeader*>(this)->getLsOptions();}
    virtual void setLsOptions(const OSPFOptions& lsOptions);
    virtual char getLsType() const;
    virtual void setLsType(char lsType);
    virtual IPv4Address& getLinkStateID();
    virtual const IPv4Address& getLinkStateID() const {return const_cast<OSPFLSAHeader*>(this)->getLinkStateID();}
    virtual void setLinkStateID(const IPv4Address& linkStateID);
    virtual IPv4Address& getAdvertisingRouter();
    virtual const IPv4Address& getAdvertisingRouter() const {return const_cast<OSPFLSAHeader*>(this)->getAdvertisingRouter();}
    virtual void setAdvertisingRouter(const IPv4Address& advertisingRouter);
    virtual long getLsSequenceNumber() const;
    virtual void setLsSequenceNumber(long lsSequenceNumber);
    virtual unsigned short getLsaLength() const;
    virtual void setLsaLength(unsigned short lsaLength);
};

inline void doPacking(cCommBuffer *b, OSPFLSAHeader& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLSAHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:109</tt> by nedtool.
 * <pre>
 * //
 * // common ancestor type for all LSAs
 * //
 * class OSPFLSA
 * {
 *     OSPFLSAHeader header;
 * }
 * </pre>
 */
class OSPFLSA : public ::cObject
{
  protected:
    OSPFLSAHeader header_var;

  private:
    void copy(const OSPFLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLSA&);

  public:
    OSPFLSA();
    OSPFLSA(const OSPFLSA& other);
    virtual ~OSPFLSA();
    OSPFLSA& operator=(const OSPFLSA& other);
    virtual OSPFLSA *dup() const {return new OSPFLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OSPFLSAHeader& getHeader();
    virtual const OSPFLSAHeader& getHeader() const {return const_cast<OSPFLSA*>(this)->getHeader();}
    virtual void setHeader(const OSPFLSAHeader& header);
};

inline void doPacking(cCommBuffer *b, OSPFLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLSA& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFPacket.msg:114</tt> by nedtool.
 * <pre>
 * enum LinkType
 * {
 * 
 *     POINTTOPOINT_LINK = 1;
 *     TRANSIT_LINK = 2;
 *     STUB_LINK = 3;
 *     VIRTUAL_LINK = 4;
 * }
 * </pre>
 */
enum LinkType {
    POINTTOPOINT_LINK = 1,
    TRANSIT_LINK = 2,
    STUB_LINK = 3,
    VIRTUAL_LINK = 4
};

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg:122 by nedtool.
 */
struct TOSData
{
    TOSData();
    unsigned char tos;
    unsigned char tosMetric[3];
};

void doPacking(cCommBuffer *b, TOSData& a);
void doUnpacking(cCommBuffer *b, TOSData& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:128</tt> by nedtool.
 * <pre>
 * class Link
 * {
 *     IPv4Address linkID;
 *     unsigned long linkData = 0;
 *     unsigned char type @enum(LinkType) = POINTTOPOINT_LINK;
 *     unsigned char numberOfTOS = 0;
 *     unsigned long linkCost = 1;
 *     TOSData tosData[];
 * }
 * </pre>
 */
class Link : public ::cObject
{
  protected:
    IPv4Address linkID_var;
    unsigned long linkData_var;
    unsigned char type_var;
    unsigned char numberOfTOS_var;
    unsigned long linkCost_var;
    TOSData *tosData_var; // array ptr
    unsigned int tosData_arraysize;

  private:
    void copy(const Link& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Link&);

  public:
    Link();
    Link(const Link& other);
    virtual ~Link();
    Link& operator=(const Link& other);
    virtual Link *dup() const {return new Link(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getLinkID();
    virtual const IPv4Address& getLinkID() const {return const_cast<Link*>(this)->getLinkID();}
    virtual void setLinkID(const IPv4Address& linkID);
    virtual unsigned long getLinkData() const;
    virtual void setLinkData(unsigned long linkData);
    virtual unsigned char getType() const;
    virtual void setType(unsigned char type);
    virtual unsigned char getNumberOfTOS() const;
    virtual void setNumberOfTOS(unsigned char numberOfTOS);
    virtual unsigned long getLinkCost() const;
    virtual void setLinkCost(unsigned long linkCost);
    virtual void setTosDataArraySize(unsigned int size);
    virtual unsigned int getTosDataArraySize() const;
    virtual TOSData& getTosData(unsigned int k);
    virtual const TOSData& getTosData(unsigned int k) const {return const_cast<Link*>(this)->getTosData(k);}
    virtual void setTosData(unsigned int k, const TOSData& tosData);
};

inline void doPacking(cCommBuffer *b, Link& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Link& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:141</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Router LSA
 * //
 * class OSPFRouterLSA extends OSPFLSA
 * {
 *     bool V_VirtualLinkEndpoint = false;
 *     bool E_ASBoundaryRouter = false;
 *     bool B_AreaBorderRouter = false;
 *     unsigned short numberOfLinks = 0;
 *     Link links[];
 * }
 * </pre>
 */
class OSPFRouterLSA : public ::OSPFLSA
{
  protected:
    bool V_VirtualLinkEndpoint_var;
    bool E_ASBoundaryRouter_var;
    bool B_AreaBorderRouter_var;
    unsigned short numberOfLinks_var;
    Link *links_var; // array ptr
    unsigned int links_arraysize;

  private:
    void copy(const OSPFRouterLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFRouterLSA&);

  public:
    OSPFRouterLSA();
    OSPFRouterLSA(const OSPFRouterLSA& other);
    virtual ~OSPFRouterLSA();
    OSPFRouterLSA& operator=(const OSPFRouterLSA& other);
    virtual OSPFRouterLSA *dup() const {return new OSPFRouterLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getV_VirtualLinkEndpoint() const;
    virtual void setV_VirtualLinkEndpoint(bool V_VirtualLinkEndpoint);
    virtual bool getE_ASBoundaryRouter() const;
    virtual void setE_ASBoundaryRouter(bool E_ASBoundaryRouter);
    virtual bool getB_AreaBorderRouter() const;
    virtual void setB_AreaBorderRouter(bool B_AreaBorderRouter);
    virtual unsigned short getNumberOfLinks() const;
    virtual void setNumberOfLinks(unsigned short numberOfLinks);
    virtual void setLinksArraySize(unsigned int size);
    virtual unsigned int getLinksArraySize() const;
    virtual Link& getLinks(unsigned int k);
    virtual const Link& getLinks(unsigned int k) const {return const_cast<OSPFRouterLSA*>(this)->getLinks(k);}
    virtual void setLinks(unsigned int k, const Link& links);
};

inline void doPacking(cCommBuffer *b, OSPFRouterLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFRouterLSA& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:153</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Network LSA
 * //
 * class OSPFNetworkLSA extends OSPFLSA
 * {
 *     IPv4Address networkMask;
 *     IPv4Address attachedRouters[];
 * }
 * </pre>
 */
class OSPFNetworkLSA : public ::OSPFLSA
{
  protected:
    IPv4Address networkMask_var;
    IPv4Address *attachedRouters_var; // array ptr
    unsigned int attachedRouters_arraysize;

  private:
    void copy(const OSPFNetworkLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFNetworkLSA&);

  public:
    OSPFNetworkLSA();
    OSPFNetworkLSA(const OSPFNetworkLSA& other);
    virtual ~OSPFNetworkLSA();
    OSPFNetworkLSA& operator=(const OSPFNetworkLSA& other);
    virtual OSPFNetworkLSA *dup() const {return new OSPFNetworkLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFNetworkLSA*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual void setAttachedRoutersArraySize(unsigned int size);
    virtual unsigned int getAttachedRoutersArraySize() const;
    virtual IPv4Address& getAttachedRouters(unsigned int k);
    virtual const IPv4Address& getAttachedRouters(unsigned int k) const {return const_cast<OSPFNetworkLSA*>(this)->getAttachedRouters(k);}
    virtual void setAttachedRouters(unsigned int k, const IPv4Address& attachedRouters);
};

inline void doPacking(cCommBuffer *b, OSPFNetworkLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFNetworkLSA& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:162</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Summary LSA
 * //
 * class OSPFSummaryLSA extends OSPFLSA
 * {
 *     IPv4Address networkMask;
 *     unsigned long routeCost = 1;
 *     TOSData tosData[];
 * }
 * </pre>
 */
class OSPFSummaryLSA : public ::OSPFLSA
{
  protected:
    IPv4Address networkMask_var;
    unsigned long routeCost_var;
    TOSData *tosData_var; // array ptr
    unsigned int tosData_arraysize;

  private:
    void copy(const OSPFSummaryLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFSummaryLSA&);

  public:
    OSPFSummaryLSA();
    OSPFSummaryLSA(const OSPFSummaryLSA& other);
    virtual ~OSPFSummaryLSA();
    OSPFSummaryLSA& operator=(const OSPFSummaryLSA& other);
    virtual OSPFSummaryLSA *dup() const {return new OSPFSummaryLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFSummaryLSA*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual unsigned long getRouteCost() const;
    virtual void setRouteCost(unsigned long routeCost);
    virtual void setTosDataArraySize(unsigned int size);
    virtual unsigned int getTosDataArraySize() const;
    virtual TOSData& getTosData(unsigned int k);
    virtual const TOSData& getTosData(unsigned int k) const {return const_cast<OSPFSummaryLSA*>(this)->getTosData(k);}
    virtual void setTosData(unsigned int k, const TOSData& tosData);
};

inline void doPacking(cCommBuffer *b, OSPFSummaryLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFSummaryLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg:169 by nedtool.
 */
struct ExternalTOSInfo
{
    ExternalTOSInfo();
    TOSData tosData;
    bool E_ExternalMetricType;
    IPv4Address forwardingAddress;
    long externalRouteTag;
};

void doPacking(cCommBuffer *b, ExternalTOSInfo& a);
void doUnpacking(cCommBuffer *b, ExternalTOSInfo& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:180</tt> by nedtool.
 * <pre>
 * //
 * // Represents the contents of an OSPF AS External LSA
 * //
 * class OSPFASExternalLSAContents
 * {
 *     IPv4Address networkMask;
 *     bool E_ExternalMetricType = false;
 *     unsigned long routeCost = 1;
 *     IPv4Address forwardingAddress;
 *     long externalRouteTag = 0;
 *     ExternalTOSInfo externalTOSInfo[];
 * }
 * </pre>
 */
class OSPFASExternalLSAContents : public ::cObject
{
  protected:
    IPv4Address networkMask_var;
    bool E_ExternalMetricType_var;
    unsigned long routeCost_var;
    IPv4Address forwardingAddress_var;
    long externalRouteTag_var;
    ExternalTOSInfo *externalTOSInfo_var; // array ptr
    unsigned int externalTOSInfo_arraysize;

  private:
    void copy(const OSPFASExternalLSAContents& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFASExternalLSAContents&);

  public:
    OSPFASExternalLSAContents();
    OSPFASExternalLSAContents(const OSPFASExternalLSAContents& other);
    virtual ~OSPFASExternalLSAContents();
    OSPFASExternalLSAContents& operator=(const OSPFASExternalLSAContents& other);
    virtual OSPFASExternalLSAContents *dup() const {return new OSPFASExternalLSAContents(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFASExternalLSAContents*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual bool getE_ExternalMetricType() const;
    virtual void setE_ExternalMetricType(bool E_ExternalMetricType);
    virtual unsigned long getRouteCost() const;
    virtual void setRouteCost(unsigned long routeCost);
    virtual IPv4Address& getForwardingAddress();
    virtual const IPv4Address& getForwardingAddress() const {return const_cast<OSPFASExternalLSAContents*>(this)->getForwardingAddress();}
    virtual void setForwardingAddress(const IPv4Address& forwardingAddress);
    virtual long getExternalRouteTag() const;
    virtual void setExternalRouteTag(long externalRouteTag);
    virtual void setExternalTOSInfoArraySize(unsigned int size);
    virtual unsigned int getExternalTOSInfoArraySize() const;
    virtual ExternalTOSInfo& getExternalTOSInfo(unsigned int k);
    virtual const ExternalTOSInfo& getExternalTOSInfo(unsigned int k) const {return const_cast<OSPFASExternalLSAContents*>(this)->getExternalTOSInfo(k);}
    virtual void setExternalTOSInfo(unsigned int k, const ExternalTOSInfo& externalTOSInfo);
};

inline void doPacking(cCommBuffer *b, OSPFASExternalLSAContents& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFASExternalLSAContents& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:193</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF AS External LSA
 * //
 * class OSPFASExternalLSA extends OSPFLSA
 * {
 *     OSPFASExternalLSAContents contents;
 * }
 * </pre>
 */
class OSPFASExternalLSA : public ::OSPFLSA
{
  protected:
    OSPFASExternalLSAContents contents_var;

  private:
    void copy(const OSPFASExternalLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFASExternalLSA&);

  public:
    OSPFASExternalLSA();
    OSPFASExternalLSA(const OSPFASExternalLSA& other);
    virtual ~OSPFASExternalLSA();
    OSPFASExternalLSA& operator=(const OSPFASExternalLSA& other);
    virtual OSPFASExternalLSA *dup() const {return new OSPFASExternalLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OSPFASExternalLSAContents& getContents();
    virtual const OSPFASExternalLSAContents& getContents() const {return const_cast<OSPFASExternalLSA*>(this)->getContents();}
    virtual void setContents(const OSPFASExternalLSAContents& contents);
};

inline void doPacking(cCommBuffer *b, OSPFASExternalLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFASExternalLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg:200 by nedtool.
 */
struct OSPFDDOptions
{
    OSPFDDOptions();
    bool unused_1;
    bool unused_2;
    bool unused_3;
    bool unused_4;
    bool unused_5;
    bool I_Init;
    bool M_More;
    bool MS_MasterSlave;
};

void doPacking(cCommBuffer *b, OSPFDDOptions& a);
void doUnpacking(cCommBuffer *b, OSPFDDOptions& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:215</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Database Description packet
 * //
 * packet OSPFDatabaseDescriptionPacket extends OSPFPacket
 * {
 *     unsigned short interfaceMTU;
 *     OSPFOptions options;
 *     OSPFDDOptions ddOptions;
 *     unsigned long ddSequenceNumber;
 *     OSPFLSAHeader lsaHeaders[];
 * }
 * </pre>
 */
class OSPFDatabaseDescriptionPacket : public ::OSPFPacket
{
  protected:
    unsigned short interfaceMTU_var;
    OSPFOptions options_var;
    OSPFDDOptions ddOptions_var;
    unsigned long ddSequenceNumber_var;
    OSPFLSAHeader *lsaHeaders_var; // array ptr
    unsigned int lsaHeaders_arraysize;

  private:
    void copy(const OSPFDatabaseDescriptionPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFDatabaseDescriptionPacket&);

  public:
    OSPFDatabaseDescriptionPacket(const char *name=NULL, int kind=0);
    OSPFDatabaseDescriptionPacket(const OSPFDatabaseDescriptionPacket& other);
    virtual ~OSPFDatabaseDescriptionPacket();
    OSPFDatabaseDescriptionPacket& operator=(const OSPFDatabaseDescriptionPacket& other);
    virtual OSPFDatabaseDescriptionPacket *dup() const {return new OSPFDatabaseDescriptionPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getInterfaceMTU() const;
    virtual void setInterfaceMTU(unsigned short interfaceMTU);
    virtual OSPFOptions& getOptions();
    virtual const OSPFOptions& getOptions() const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getOptions();}
    virtual void setOptions(const OSPFOptions& options);
    virtual OSPFDDOptions& getDdOptions();
    virtual const OSPFDDOptions& getDdOptions() const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getDdOptions();}
    virtual void setDdOptions(const OSPFDDOptions& ddOptions);
    virtual unsigned long getDdSequenceNumber() const;
    virtual void setDdSequenceNumber(unsigned long ddSequenceNumber);
    virtual void setLsaHeadersArraySize(unsigned int size);
    virtual unsigned int getLsaHeadersArraySize() const;
    virtual OSPFLSAHeader& getLsaHeaders(unsigned int k);
    virtual const OSPFLSAHeader& getLsaHeaders(unsigned int k) const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getLsaHeaders(k);}
    virtual void setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders);
};

inline void doPacking(cCommBuffer *b, OSPFDatabaseDescriptionPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFDatabaseDescriptionPacket& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg:224 by nedtool.
 */
struct LSARequest
{
    LSARequest();
    unsigned long lsType;
    IPv4Address linkStateID;
    IPv4Address advertisingRouter;
};

void doPacking(cCommBuffer *b, LSARequest& a);
void doUnpacking(cCommBuffer *b, LSARequest& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:234</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Link State Request packet
 * //
 * packet OSPFLinkStateRequestPacket extends OSPFPacket
 * {
 *     LSARequest requests[];
 * }
 * </pre>
 */
class OSPFLinkStateRequestPacket : public ::OSPFPacket
{
  protected:
    LSARequest *requests_var; // array ptr
    unsigned int requests_arraysize;

  private:
    void copy(const OSPFLinkStateRequestPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateRequestPacket&);

  public:
    OSPFLinkStateRequestPacket(const char *name=NULL, int kind=0);
    OSPFLinkStateRequestPacket(const OSPFLinkStateRequestPacket& other);
    virtual ~OSPFLinkStateRequestPacket();
    OSPFLinkStateRequestPacket& operator=(const OSPFLinkStateRequestPacket& other);
    virtual OSPFLinkStateRequestPacket *dup() const {return new OSPFLinkStateRequestPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setRequestsArraySize(unsigned int size);
    virtual unsigned int getRequestsArraySize() const;
    virtual LSARequest& getRequests(unsigned int k);
    virtual const LSARequest& getRequests(unsigned int k) const {return const_cast<OSPFLinkStateRequestPacket*>(this)->getRequests(k);}
    virtual void setRequests(unsigned int k, const LSARequest& requests);
};

inline void doPacking(cCommBuffer *b, OSPFLinkStateRequestPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLinkStateRequestPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:242</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Link State Update packet
 * //
 * packet OSPFLinkStateUpdatePacket extends OSPFPacket
 * {
 *     unsigned long numberOfLSAs;
 *     OSPFRouterLSA routerLSAs[];
 *     OSPFNetworkLSA networkLSAs[];
 *     OSPFSummaryLSA summaryLSAs[];
 *     OSPFASExternalLSA asExternalLSAs[];
 * }
 * </pre>
 */
class OSPFLinkStateUpdatePacket : public ::OSPFPacket
{
  protected:
    unsigned long numberOfLSAs_var;
    OSPFRouterLSA *routerLSAs_var; // array ptr
    unsigned int routerLSAs_arraysize;
    OSPFNetworkLSA *networkLSAs_var; // array ptr
    unsigned int networkLSAs_arraysize;
    OSPFSummaryLSA *summaryLSAs_var; // array ptr
    unsigned int summaryLSAs_arraysize;
    OSPFASExternalLSA *asExternalLSAs_var; // array ptr
    unsigned int asExternalLSAs_arraysize;

  private:
    void copy(const OSPFLinkStateUpdatePacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateUpdatePacket&);

  public:
    OSPFLinkStateUpdatePacket(const char *name=NULL, int kind=0);
    OSPFLinkStateUpdatePacket(const OSPFLinkStateUpdatePacket& other);
    virtual ~OSPFLinkStateUpdatePacket();
    OSPFLinkStateUpdatePacket& operator=(const OSPFLinkStateUpdatePacket& other);
    virtual OSPFLinkStateUpdatePacket *dup() const {return new OSPFLinkStateUpdatePacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned long getNumberOfLSAs() const;
    virtual void setNumberOfLSAs(unsigned long numberOfLSAs);
    virtual void setRouterLSAsArraySize(unsigned int size);
    virtual unsigned int getRouterLSAsArraySize() const;
    virtual OSPFRouterLSA& getRouterLSAs(unsigned int k);
    virtual const OSPFRouterLSA& getRouterLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getRouterLSAs(k);}
    virtual void setRouterLSAs(unsigned int k, const OSPFRouterLSA& routerLSAs);
    virtual void setNetworkLSAsArraySize(unsigned int size);
    virtual unsigned int getNetworkLSAsArraySize() const;
    virtual OSPFNetworkLSA& getNetworkLSAs(unsigned int k);
    virtual const OSPFNetworkLSA& getNetworkLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getNetworkLSAs(k);}
    virtual void setNetworkLSAs(unsigned int k, const OSPFNetworkLSA& networkLSAs);
    virtual void setSummaryLSAsArraySize(unsigned int size);
    virtual unsigned int getSummaryLSAsArraySize() const;
    virtual OSPFSummaryLSA& getSummaryLSAs(unsigned int k);
    virtual const OSPFSummaryLSA& getSummaryLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getSummaryLSAs(k);}
    virtual void setSummaryLSAs(unsigned int k, const OSPFSummaryLSA& summaryLSAs);
    virtual void setAsExternalLSAsArraySize(unsigned int size);
    virtual unsigned int getAsExternalLSAsArraySize() const;
    virtual OSPFASExternalLSA& getAsExternalLSAs(unsigned int k);
    virtual const OSPFASExternalLSA& getAsExternalLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getAsExternalLSAs(k);}
    virtual void setAsExternalLSAs(unsigned int k, const OSPFASExternalLSA& asExternalLSAs);
};

inline void doPacking(cCommBuffer *b, OSPFLinkStateUpdatePacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLinkStateUpdatePacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg:254</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Link State Acknowledgement packet
 * //
 * packet OSPFLinkStateAcknowledgementPacket extends OSPFPacket
 * {
 *     OSPFLSAHeader lsaHeaders[];
 * }
 * </pre>
 */
class OSPFLinkStateAcknowledgementPacket : public ::OSPFPacket
{
  protected:
    OSPFLSAHeader *lsaHeaders_var; // array ptr
    unsigned int lsaHeaders_arraysize;

  private:
    void copy(const OSPFLinkStateAcknowledgementPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateAcknowledgementPacket&);

  public:
    OSPFLinkStateAcknowledgementPacket(const char *name=NULL, int kind=0);
    OSPFLinkStateAcknowledgementPacket(const OSPFLinkStateAcknowledgementPacket& other);
    virtual ~OSPFLinkStateAcknowledgementPacket();
    OSPFLinkStateAcknowledgementPacket& operator=(const OSPFLinkStateAcknowledgementPacket& other);
    virtual OSPFLinkStateAcknowledgementPacket *dup() const {return new OSPFLinkStateAcknowledgementPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setLsaHeadersArraySize(unsigned int size);
    virtual unsigned int getLsaHeadersArraySize() const;
    virtual OSPFLSAHeader& getLsaHeaders(unsigned int k);
    virtual const OSPFLSAHeader& getLsaHeaders(unsigned int k) const {return const_cast<OSPFLinkStateAcknowledgementPacket*>(this)->getLsaHeaders(k);}
    virtual void setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders);
};

inline void doPacking(cCommBuffer *b, OSPFLinkStateAcknowledgementPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLinkStateAcknowledgementPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _OSPFPACKET_M_H_

