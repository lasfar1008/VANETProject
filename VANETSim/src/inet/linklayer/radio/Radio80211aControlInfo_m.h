//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/radio/Radio80211aControlInfo.msg.
//

#ifndef _RADIO80211ACONTROLINFO_M_H_
#define _RADIO80211ACONTROLINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "ModulationType.h"
// }}

/**
 * Class generated from <tt>linklayer/radio/Radio80211aControlInfo.msg:28</tt> by nedtool.
 * <pre>
 * class Radio80211aControlInfo
 * {
 *     double snr;
 *     double lossRate;
 *     double recPow;
 *     ModulationType modulationType;
 *     bool airtimeMetric;
 *     double testFrameDuration;
 *     double testFrameError;
 *     int testFrameSize;
 * }
 * </pre>
 */
class Radio80211aControlInfo : public ::cObject
{
  protected:
    double snr_var;
    double lossRate_var;
    double recPow_var;
    ModulationType modulationType_var;
    bool airtimeMetric_var;
    double testFrameDuration_var;
    double testFrameError_var;
    int testFrameSize_var;

  private:
    void copy(const Radio80211aControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Radio80211aControlInfo&);

  public:
    Radio80211aControlInfo();
    Radio80211aControlInfo(const Radio80211aControlInfo& other);
    virtual ~Radio80211aControlInfo();
    Radio80211aControlInfo& operator=(const Radio80211aControlInfo& other);
    virtual Radio80211aControlInfo *dup() const {return new Radio80211aControlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getSnr() const;
    virtual void setSnr(double snr);
    virtual double getLossRate() const;
    virtual void setLossRate(double lossRate);
    virtual double getRecPow() const;
    virtual void setRecPow(double recPow);
    virtual ModulationType& getModulationType();
    virtual const ModulationType& getModulationType() const {return const_cast<Radio80211aControlInfo*>(this)->getModulationType();}
    virtual void setModulationType(const ModulationType& modulationType);
    virtual bool getAirtimeMetric() const;
    virtual void setAirtimeMetric(bool airtimeMetric);
    virtual double getTestFrameDuration() const;
    virtual void setTestFrameDuration(double testFrameDuration);
    virtual double getTestFrameError() const;
    virtual void setTestFrameError(double testFrameError);
    virtual int getTestFrameSize() const;
    virtual void setTestFrameSize(int testFrameSize);
};

inline void doPacking(cCommBuffer *b, Radio80211aControlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Radio80211aControlInfo& obj) {obj.parsimUnpack(b);}


#endif // ifndef _RADIO80211ACONTROLINFO_M_H_

