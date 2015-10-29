//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/bgpv4/BGPMessage/BGPOpen.msg.
//

#ifndef _BGPOPEN_M_H_
#define _BGPOPEN_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "BGPHeader_m.h"
#include "IPv4Address.h"

const int BGP_OPEN_OCTETS = 10;
// }}

/**
 * Struct generated from networklayer/bgpv4/BGPMessage/BGPOpen.msg:31 by nedtool.
 */
struct BGPParameterValues
{
    BGPParameterValues();
    short authCode;
    long authenticationData;
};

void doPacking(cCommBuffer *b, BGPParameterValues& a);
void doUnpacking(cCommBuffer *b, BGPParameterValues& a);

/**
 * Struct generated from networklayer/bgpv4/BGPMessage/BGPOpen.msg:37 by nedtool.
 */
struct BGPOptionalParameters
{
    BGPOptionalParameters();
    short parameterType;
    unsigned short parameterLength;
    BGPParameterValues parameterValues;
};

void doPacking(cCommBuffer *b, BGPOptionalParameters& a);
void doUnpacking(cCommBuffer *b, BGPOptionalParameters& a);

/**
 * Class generated from <tt>networklayer/bgpv4/BGPMessage/BGPOpen.msg:61</tt> by nedtool.
 * <pre>
 * //
 * // Represents a BGPv4 OPEN message.
 * //
 * // Fields modelled:
 * // - Version: 1 octet (BGP version)
 * // - My Autonomous system: 2 octets  (AS of the sender)
 * // - Hold Time: 2 octets (nbr de secondes que l'emetteur propose pour le compteur de renetue)
 * // - BGP Identifier: 4 octets
 * // - Optional Param Length: 1 octet (if = 0, no optional parameters)
 * // - Optional Parameters:
 * //    - Parameter Type
 * //    - Parameter Length
 * //    - Parameter Values (variable size)
 * //    - Auth code
 * //    - Authentication Data
 * //
 * packet BGPOpenMessage extends BGPHeader
 * {
 *     @omitGetVerb(true);
 *     type = BGP_OPEN;
 *     byteLength = BGP_HEADER_OCTETS + BGP_OPEN_OCTETS;
 * 
 *     char version = 4;
 *     unsigned short myAS;
 *     simtime_t holdTime;
 *     IPv4Address BGPIdentifier;
 *     BGPOptionalParameters optionalParameters[];
 * }
 * </pre>
 */
class BGPOpenMessage : public ::BGPHeader
{
  protected:
    char version_var;
    unsigned short myAS_var;
    simtime_t holdTime_var;
    IPv4Address BGPIdentifier_var;
    BGPOptionalParameters *optionalParameters_var; // array ptr
    unsigned int optionalParameters_arraysize;

  private:
    void copy(const BGPOpenMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BGPOpenMessage&);

  public:
    BGPOpenMessage(const char *name=NULL, int kind=0);
    BGPOpenMessage(const BGPOpenMessage& other);
    virtual ~BGPOpenMessage();
    BGPOpenMessage& operator=(const BGPOpenMessage& other);
    virtual BGPOpenMessage *dup() const {return new BGPOpenMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char version() const;
    virtual void setVersion(char version);
    virtual unsigned short myAS() const;
    virtual void setMyAS(unsigned short myAS);
    virtual simtime_t holdTime() const;
    virtual void setHoldTime(simtime_t holdTime);
    virtual IPv4Address& BGPIdentifier();
    virtual const IPv4Address& BGPIdentifier() const {return const_cast<BGPOpenMessage*>(this)->BGPIdentifier();}
    virtual void setBGPIdentifier(const IPv4Address& BGPIdentifier);
    virtual void setOptionalParametersArraySize(unsigned int size);
    virtual unsigned int optionalParametersArraySize() const;
    virtual BGPOptionalParameters& optionalParameters(unsigned int k);
    virtual const BGPOptionalParameters& optionalParameters(unsigned int k) const {return const_cast<BGPOpenMessage*>(this)->optionalParameters(k);}
    virtual void setOptionalParameters(unsigned int k, const BGPOptionalParameters& optionalParameters);
};

inline void doPacking(cCommBuffer *b, BGPOpenMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BGPOpenMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _BGPOPEN_M_H_

