//
// Generated file, do not edit! Created by nedtool 4.6 from veins/networklayer/routing/AODVRel/AODVRelControlPackets.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "AODVRelControlPackets_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

UnreachableNode::UnreachableNode()
{
    seqNum = 0;
}

void doPacking(cCommBuffer *b, UnreachableNode& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.seqNum);
}

void doUnpacking(cCommBuffer *b, UnreachableNode& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.seqNum);
}

class UnreachableNodeDescriptor : public cClassDescriptor
{
  public:
    UnreachableNodeDescriptor();
    virtual ~UnreachableNodeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(UnreachableNodeDescriptor);

UnreachableNodeDescriptor::UnreachableNodeDescriptor() : cClassDescriptor("UnreachableNode", "")
{
}

UnreachableNodeDescriptor::~UnreachableNodeDescriptor()
{
}

bool UnreachableNodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnreachableNode *>(obj)!=NULL;
}

const char *UnreachableNodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnreachableNodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UnreachableNodeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *UnreachableNodeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "addr",
        "seqNum",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UnreachableNodeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnreachableNodeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UnreachableNodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int UnreachableNodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnreachableNodeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->seqNum);
        default: return "";
    }
}

bool UnreachableNodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        case 1: pp->seqNum = string2ulong(value); return true;
        default: return false;
    }
}

const char *UnreachableNodeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *UnreachableNodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableNode *pp = (UnreachableNode *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("AODVRelControlPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("AODVRelControlPacketType"));
    e->insert(RREQ, "RREQ");
    e->insert(RREP, "RREP");
    e->insert(RERR, "RERR");
    e->insert(RREPACK, "RREPACK");
);

Register_Class(AODVRelControlPacket);

AODVRelControlPacket::AODVRelControlPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->packetType_var = 0;
}

AODVRelControlPacket::AODVRelControlPacket(const AODVRelControlPacket& other) : ::cPacket(other)
{
    copy(other);
}

AODVRelControlPacket::~AODVRelControlPacket()
{
}

AODVRelControlPacket& AODVRelControlPacket::operator=(const AODVRelControlPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVRelControlPacket::copy(const AODVRelControlPacket& other)
{
    this->packetType_var = other.packetType_var;
}

void AODVRelControlPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void AODVRelControlPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int AODVRelControlPacket::getPacketType() const
{
    return packetType_var;
}

void AODVRelControlPacket::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class AODVRelControlPacketDescriptor : public cClassDescriptor
{
  public:
    AODVRelControlPacketDescriptor();
    virtual ~AODVRelControlPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVRelControlPacketDescriptor);

AODVRelControlPacketDescriptor::AODVRelControlPacketDescriptor() : cClassDescriptor("AODVRelControlPacket", "cPacket")
{
}

AODVRelControlPacketDescriptor::~AODVRelControlPacketDescriptor()
{
}

bool AODVRelControlPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVRelControlPacket *>(obj)!=NULL;
}

const char *AODVRelControlPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVRelControlPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AODVRelControlPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AODVRelControlPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AODVRelControlPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVRelControlPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AODVRelControlPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVRelControlPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelControlPacket *pp = (AODVRelControlPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVRelControlPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelControlPacket *pp = (AODVRelControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVRelControlPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelControlPacket *pp = (AODVRelControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVRelControlPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *AODVRelControlPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelControlPacket *pp = (AODVRelControlPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(AODVRelRREQ);

AODVRelRREQ::AODVRelRREQ(const char *name) : ::AODVRelControlPacket(name)
{
    this->packetType_var = RREQ;
    this->joinFlag_var = 0;
    this->repairFlag_var = 0;
    this->gratuitousRREPFlag_var = 0;
    this->destOnlyFlag_var = 0;
    this->unknownSeqNumFlag_var = 0;
    this->hopCount_var = 0;
    this->rreqId_var = 0;
    this->destSeqNum_var = 0;
    this->originatorSeqNum_var = 0;
    this->XPosition_var = 0;
    this->YPosition_var = 0;
    this->XVelocity_var = 0;
    this->YVelocity_var = 0;
    this->routeReliability_var = 0;
}

AODVRelRREQ::AODVRelRREQ(const AODVRelRREQ& other) : ::AODVRelControlPacket(other)
{
    copy(other);
}

AODVRelRREQ::~AODVRelRREQ()
{
}

AODVRelRREQ& AODVRelRREQ::operator=(const AODVRelRREQ& other)
{
    if (this==&other) return *this;
    ::AODVRelControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVRelRREQ::copy(const AODVRelRREQ& other)
{
    this->packetType_var = other.packetType_var;
    this->joinFlag_var = other.joinFlag_var;
    this->repairFlag_var = other.repairFlag_var;
    this->gratuitousRREPFlag_var = other.gratuitousRREPFlag_var;
    this->destOnlyFlag_var = other.destOnlyFlag_var;
    this->unknownSeqNumFlag_var = other.unknownSeqNumFlag_var;
    this->hopCount_var = other.hopCount_var;
    this->rreqId_var = other.rreqId_var;
    this->destAddr_var = other.destAddr_var;
    this->destSeqNum_var = other.destSeqNum_var;
    this->originatorAddr_var = other.originatorAddr_var;
    this->originatorSeqNum_var = other.originatorSeqNum_var;
    this->XPosition_var = other.XPosition_var;
    this->YPosition_var = other.YPosition_var;
    this->XVelocity_var = other.XVelocity_var;
    this->YVelocity_var = other.YVelocity_var;
    this->routeReliability_var = other.routeReliability_var;
}

void AODVRelRREQ::parsimPack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->joinFlag_var);
    doPacking(b,this->repairFlag_var);
    doPacking(b,this->gratuitousRREPFlag_var);
    doPacking(b,this->destOnlyFlag_var);
    doPacking(b,this->unknownSeqNumFlag_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->rreqId_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destSeqNum_var);
    doPacking(b,this->originatorAddr_var);
    doPacking(b,this->originatorSeqNum_var);
    doPacking(b,this->XPosition_var);
    doPacking(b,this->YPosition_var);
    doPacking(b,this->XVelocity_var);
    doPacking(b,this->YVelocity_var);
    doPacking(b,this->routeReliability_var);
}

void AODVRelRREQ::parsimUnpack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->joinFlag_var);
    doUnpacking(b,this->repairFlag_var);
    doUnpacking(b,this->gratuitousRREPFlag_var);
    doUnpacking(b,this->destOnlyFlag_var);
    doUnpacking(b,this->unknownSeqNumFlag_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->rreqId_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destSeqNum_var);
    doUnpacking(b,this->originatorAddr_var);
    doUnpacking(b,this->originatorSeqNum_var);
    doUnpacking(b,this->XPosition_var);
    doUnpacking(b,this->YPosition_var);
    doUnpacking(b,this->XVelocity_var);
    doUnpacking(b,this->YVelocity_var);
    doUnpacking(b,this->routeReliability_var);
}

unsigned int AODVRelRREQ::getPacketType() const
{
    return packetType_var;
}

void AODVRelRREQ::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool AODVRelRREQ::getJoinFlag() const
{
    return joinFlag_var;
}

void AODVRelRREQ::setJoinFlag(bool joinFlag)
{
    this->joinFlag_var = joinFlag;
}

bool AODVRelRREQ::getRepairFlag() const
{
    return repairFlag_var;
}

void AODVRelRREQ::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool AODVRelRREQ::getGratuitousRREPFlag() const
{
    return gratuitousRREPFlag_var;
}

void AODVRelRREQ::setGratuitousRREPFlag(bool gratuitousRREPFlag)
{
    this->gratuitousRREPFlag_var = gratuitousRREPFlag;
}

bool AODVRelRREQ::getDestOnlyFlag() const
{
    return destOnlyFlag_var;
}

void AODVRelRREQ::setDestOnlyFlag(bool destOnlyFlag)
{
    this->destOnlyFlag_var = destOnlyFlag;
}

bool AODVRelRREQ::getUnknownSeqNumFlag() const
{
    return unknownSeqNumFlag_var;
}

void AODVRelRREQ::setUnknownSeqNumFlag(bool unknownSeqNumFlag)
{
    this->unknownSeqNumFlag_var = unknownSeqNumFlag;
}

unsigned int AODVRelRREQ::getHopCount() const
{
    return hopCount_var;
}

void AODVRelRREQ::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

unsigned int AODVRelRREQ::getRreqId() const
{
    return rreqId_var;
}

void AODVRelRREQ::setRreqId(unsigned int rreqId)
{
    this->rreqId_var = rreqId;
}

IPv4Address& AODVRelRREQ::getDestAddr()
{
    return destAddr_var;
}

void AODVRelRREQ::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int AODVRelRREQ::getDestSeqNum() const
{
    return destSeqNum_var;
}

void AODVRelRREQ::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& AODVRelRREQ::getOriginatorAddr()
{
    return originatorAddr_var;
}

void AODVRelRREQ::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int AODVRelRREQ::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void AODVRelRREQ::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

double AODVRelRREQ::getXPosition() const
{
    return XPosition_var;
}

void AODVRelRREQ::setXPosition(double XPosition)
{
    this->XPosition_var = XPosition;
}

double AODVRelRREQ::getYPosition() const
{
    return YPosition_var;
}

void AODVRelRREQ::setYPosition(double YPosition)
{
    this->YPosition_var = YPosition;
}

double AODVRelRREQ::getXVelocity() const
{
    return XVelocity_var;
}

void AODVRelRREQ::setXVelocity(double XVelocity)
{
    this->XVelocity_var = XVelocity;
}

double AODVRelRREQ::getYVelocity() const
{
    return YVelocity_var;
}

void AODVRelRREQ::setYVelocity(double YVelocity)
{
    this->YVelocity_var = YVelocity;
}

double AODVRelRREQ::getRouteReliability() const
{
    return routeReliability_var;
}

void AODVRelRREQ::setRouteReliability(double routeReliability)
{
    this->routeReliability_var = routeReliability;
}

class AODVRelRREQDescriptor : public cClassDescriptor
{
  public:
    AODVRelRREQDescriptor();
    virtual ~AODVRelRREQDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVRelRREQDescriptor);

AODVRelRREQDescriptor::AODVRelRREQDescriptor() : cClassDescriptor("AODVRelRREQ", "AODVRelControlPacket")
{
}

AODVRelRREQDescriptor::~AODVRelRREQDescriptor()
{
}

bool AODVRelRREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVRelRREQ *>(obj)!=NULL;
}

const char *AODVRelRREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVRelRREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 17+basedesc->getFieldCount(object) : 17;
}

unsigned int AODVRelRREQDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<17) ? fieldTypeFlags[field] : 0;
}

const char *AODVRelRREQDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "joinFlag",
        "repairFlag",
        "gratuitousRREPFlag",
        "destOnlyFlag",
        "unknownSeqNumFlag",
        "hopCount",
        "rreqId",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "XPosition",
        "YPosition",
        "XVelocity",
        "YVelocity",
        "routeReliability",
    };
    return (field>=0 && field<17) ? fieldNames[field] : NULL;
}

int AODVRelRREQDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinFlag")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+2;
    if (fieldName[0]=='g' && strcmp(fieldName, "gratuitousRREPFlag")==0) return base+3;
    if (fieldName[0]=='d' && strcmp(fieldName, "destOnlyFlag")==0) return base+4;
    if (fieldName[0]=='u' && strcmp(fieldName, "unknownSeqNumFlag")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "rreqId")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+8;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+9;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+10;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+11;
    if (fieldName[0]=='X' && strcmp(fieldName, "XPosition")==0) return base+12;
    if (fieldName[0]=='Y' && strcmp(fieldName, "YPosition")==0) return base+13;
    if (fieldName[0]=='X' && strcmp(fieldName, "XVelocity")==0) return base+14;
    if (fieldName[0]=='Y' && strcmp(fieldName, "YVelocity")==0) return base+15;
    if (fieldName[0]=='r' && strcmp(fieldName, "routeReliability")==0) return base+16;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVRelRREQDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "double",
        "double",
        "double",
        "double",
        "double",
    };
    return (field>=0 && field<17) ? fieldTypeStrings[field] : NULL;
}

const char *AODVRelRREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVRelRREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREQ *pp = (AODVRelRREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVRelRREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREQ *pp = (AODVRelRREQ *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: return bool2string(pp->getJoinFlag());
        case 2: return bool2string(pp->getRepairFlag());
        case 3: return bool2string(pp->getGratuitousRREPFlag());
        case 4: return bool2string(pp->getDestOnlyFlag());
        case 5: return bool2string(pp->getUnknownSeqNumFlag());
        case 6: return ulong2string(pp->getHopCount());
        case 7: return ulong2string(pp->getRreqId());
        case 8: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 9: return ulong2string(pp->getDestSeqNum());
        case 10: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 11: return ulong2string(pp->getOriginatorSeqNum());
        case 12: return double2string(pp->getXPosition());
        case 13: return double2string(pp->getYPosition());
        case 14: return double2string(pp->getXVelocity());
        case 15: return double2string(pp->getYVelocity());
        case 16: return double2string(pp->getRouteReliability());
        default: return "";
    }
}

bool AODVRelRREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREQ *pp = (AODVRelRREQ *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 1: pp->setJoinFlag(string2bool(value)); return true;
        case 2: pp->setRepairFlag(string2bool(value)); return true;
        case 3: pp->setGratuitousRREPFlag(string2bool(value)); return true;
        case 4: pp->setDestOnlyFlag(string2bool(value)); return true;
        case 5: pp->setUnknownSeqNumFlag(string2bool(value)); return true;
        case 6: pp->setHopCount(string2ulong(value)); return true;
        case 7: pp->setRreqId(string2ulong(value)); return true;
        case 9: pp->setDestSeqNum(string2ulong(value)); return true;
        case 11: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 12: pp->setXPosition(string2double(value)); return true;
        case 13: pp->setYPosition(string2double(value)); return true;
        case 14: pp->setXVelocity(string2double(value)); return true;
        case 15: pp->setYVelocity(string2double(value)); return true;
        case 16: pp->setRouteReliability(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVRelRREQDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 8: return opp_typename(typeid(IPv4Address));
        case 10: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *AODVRelRREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREQ *pp = (AODVRelRREQ *)object; (void)pp;
    switch (field) {
        case 8: return (void *)(&pp->getDestAddr()); break;
        case 10: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(AODVRelRREP);

AODVRelRREP::AODVRelRREP(const char *name) : ::AODVRelControlPacket(name)
{
    this->packetType_var = RREP;
    this->repairFlag_var = 0;
    this->ackRequiredFlag_var = 0;
    this->prefixSize_var = 0;
    this->hopCount_var = 0;
    this->destSeqNum_var = 0;
    this->originatorSeqNum_var = 0;
    this->lifeTime_var = 0;
    this->XPosition_var = 0;
    this->YPosition_var = 0;
    this->XVelocity_var = 0;
    this->YVelocity_var = 0;
    this->routeReliability_var = 0;
    this->reverseRouteReliability_var = 0;
}

AODVRelRREP::AODVRelRREP(const AODVRelRREP& other) : ::AODVRelControlPacket(other)
{
    copy(other);
}

AODVRelRREP::~AODVRelRREP()
{
}

AODVRelRREP& AODVRelRREP::operator=(const AODVRelRREP& other)
{
    if (this==&other) return *this;
    ::AODVRelControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVRelRREP::copy(const AODVRelRREP& other)
{
    this->packetType_var = other.packetType_var;
    this->repairFlag_var = other.repairFlag_var;
    this->ackRequiredFlag_var = other.ackRequiredFlag_var;
    this->prefixSize_var = other.prefixSize_var;
    this->hopCount_var = other.hopCount_var;
    this->destAddr_var = other.destAddr_var;
    this->destSeqNum_var = other.destSeqNum_var;
    this->originatorAddr_var = other.originatorAddr_var;
    this->originatorSeqNum_var = other.originatorSeqNum_var;
    this->lifeTime_var = other.lifeTime_var;
    this->XPosition_var = other.XPosition_var;
    this->YPosition_var = other.YPosition_var;
    this->XVelocity_var = other.XVelocity_var;
    this->YVelocity_var = other.YVelocity_var;
    this->routeReliability_var = other.routeReliability_var;
    this->reverseRouteReliability_var = other.reverseRouteReliability_var;
}

void AODVRelRREP::parsimPack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->repairFlag_var);
    doPacking(b,this->ackRequiredFlag_var);
    doPacking(b,this->prefixSize_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destSeqNum_var);
    doPacking(b,this->originatorAddr_var);
    doPacking(b,this->originatorSeqNum_var);
    doPacking(b,this->lifeTime_var);
    doPacking(b,this->XPosition_var);
    doPacking(b,this->YPosition_var);
    doPacking(b,this->XVelocity_var);
    doPacking(b,this->YVelocity_var);
    doPacking(b,this->routeReliability_var);
    doPacking(b,this->reverseRouteReliability_var);
}

void AODVRelRREP::parsimUnpack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->repairFlag_var);
    doUnpacking(b,this->ackRequiredFlag_var);
    doUnpacking(b,this->prefixSize_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destSeqNum_var);
    doUnpacking(b,this->originatorAddr_var);
    doUnpacking(b,this->originatorSeqNum_var);
    doUnpacking(b,this->lifeTime_var);
    doUnpacking(b,this->XPosition_var);
    doUnpacking(b,this->YPosition_var);
    doUnpacking(b,this->XVelocity_var);
    doUnpacking(b,this->YVelocity_var);
    doUnpacking(b,this->routeReliability_var);
    doUnpacking(b,this->reverseRouteReliability_var);
}

unsigned int AODVRelRREP::getPacketType() const
{
    return packetType_var;
}

void AODVRelRREP::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool AODVRelRREP::getRepairFlag() const
{
    return repairFlag_var;
}

void AODVRelRREP::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool AODVRelRREP::getAckRequiredFlag() const
{
    return ackRequiredFlag_var;
}

void AODVRelRREP::setAckRequiredFlag(bool ackRequiredFlag)
{
    this->ackRequiredFlag_var = ackRequiredFlag;
}

unsigned int AODVRelRREP::getPrefixSize() const
{
    return prefixSize_var;
}

void AODVRelRREP::setPrefixSize(unsigned int prefixSize)
{
    this->prefixSize_var = prefixSize;
}

unsigned int AODVRelRREP::getHopCount() const
{
    return hopCount_var;
}

void AODVRelRREP::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

IPv4Address& AODVRelRREP::getDestAddr()
{
    return destAddr_var;
}

void AODVRelRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int AODVRelRREP::getDestSeqNum() const
{
    return destSeqNum_var;
}

void AODVRelRREP::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& AODVRelRREP::getOriginatorAddr()
{
    return originatorAddr_var;
}

void AODVRelRREP::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int AODVRelRREP::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void AODVRelRREP::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

simtime_t AODVRelRREP::getLifeTime() const
{
    return lifeTime_var;
}

void AODVRelRREP::setLifeTime(simtime_t lifeTime)
{
    this->lifeTime_var = lifeTime;
}

double AODVRelRREP::getXPosition() const
{
    return XPosition_var;
}

void AODVRelRREP::setXPosition(double XPosition)
{
    this->XPosition_var = XPosition;
}

double AODVRelRREP::getYPosition() const
{
    return YPosition_var;
}

void AODVRelRREP::setYPosition(double YPosition)
{
    this->YPosition_var = YPosition;
}

double AODVRelRREP::getXVelocity() const
{
    return XVelocity_var;
}

void AODVRelRREP::setXVelocity(double XVelocity)
{
    this->XVelocity_var = XVelocity;
}

double AODVRelRREP::getYVelocity() const
{
    return YVelocity_var;
}

void AODVRelRREP::setYVelocity(double YVelocity)
{
    this->YVelocity_var = YVelocity;
}

double AODVRelRREP::getRouteReliability() const
{
    return routeReliability_var;
}

void AODVRelRREP::setRouteReliability(double routeReliability)
{
    this->routeReliability_var = routeReliability;
}

double AODVRelRREP::getReverseRouteReliability() const
{
    return reverseRouteReliability_var;
}

void AODVRelRREP::setReverseRouteReliability(double reverseRouteReliability)
{
    this->reverseRouteReliability_var = reverseRouteReliability;
}

class AODVRelRREPDescriptor : public cClassDescriptor
{
  public:
    AODVRelRREPDescriptor();
    virtual ~AODVRelRREPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVRelRREPDescriptor);

AODVRelRREPDescriptor::AODVRelRREPDescriptor() : cClassDescriptor("AODVRelRREP", "AODVRelControlPacket")
{
}

AODVRelRREPDescriptor::~AODVRelRREPDescriptor()
{
}

bool AODVRelRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVRelRREP *>(obj)!=NULL;
}

const char *AODVRelRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVRelRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int AODVRelRREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<16) ? fieldTypeFlags[field] : 0;
}

const char *AODVRelRREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "repairFlag",
        "ackRequiredFlag",
        "prefixSize",
        "hopCount",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "lifeTime",
        "XPosition",
        "YPosition",
        "XVelocity",
        "YVelocity",
        "routeReliability",
        "reverseRouteReliability",
    };
    return (field>=0 && field<16) ? fieldNames[field] : NULL;
}

int AODVRelRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackRequiredFlag")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixSize")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+6;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+7;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+8;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifeTime")==0) return base+9;
    if (fieldName[0]=='X' && strcmp(fieldName, "XPosition")==0) return base+10;
    if (fieldName[0]=='Y' && strcmp(fieldName, "YPosition")==0) return base+11;
    if (fieldName[0]=='X' && strcmp(fieldName, "XVelocity")==0) return base+12;
    if (fieldName[0]=='Y' && strcmp(fieldName, "YVelocity")==0) return base+13;
    if (fieldName[0]=='r' && strcmp(fieldName, "routeReliability")==0) return base+14;
    if (fieldName[0]=='r' && strcmp(fieldName, "reverseRouteReliability")==0) return base+15;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVRelRREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "simtime_t",
        "double",
        "double",
        "double",
        "double",
        "double",
        "double",
    };
    return (field>=0 && field<16) ? fieldTypeStrings[field] : NULL;
}

const char *AODVRelRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVRelRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREP *pp = (AODVRelRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVRelRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREP *pp = (AODVRelRREP *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: return bool2string(pp->getRepairFlag());
        case 2: return bool2string(pp->getAckRequiredFlag());
        case 3: return ulong2string(pp->getPrefixSize());
        case 4: return ulong2string(pp->getHopCount());
        case 5: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 6: return ulong2string(pp->getDestSeqNum());
        case 7: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 8: return ulong2string(pp->getOriginatorSeqNum());
        case 9: return double2string(pp->getLifeTime());
        case 10: return double2string(pp->getXPosition());
        case 11: return double2string(pp->getYPosition());
        case 12: return double2string(pp->getXVelocity());
        case 13: return double2string(pp->getYVelocity());
        case 14: return double2string(pp->getRouteReliability());
        case 15: return double2string(pp->getReverseRouteReliability());
        default: return "";
    }
}

bool AODVRelRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREP *pp = (AODVRelRREP *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 1: pp->setRepairFlag(string2bool(value)); return true;
        case 2: pp->setAckRequiredFlag(string2bool(value)); return true;
        case 3: pp->setPrefixSize(string2ulong(value)); return true;
        case 4: pp->setHopCount(string2ulong(value)); return true;
        case 6: pp->setDestSeqNum(string2ulong(value)); return true;
        case 8: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 9: pp->setLifeTime(string2double(value)); return true;
        case 10: pp->setXPosition(string2double(value)); return true;
        case 11: pp->setYPosition(string2double(value)); return true;
        case 12: pp->setXVelocity(string2double(value)); return true;
        case 13: pp->setYVelocity(string2double(value)); return true;
        case 14: pp->setRouteReliability(string2double(value)); return true;
        case 15: pp->setReverseRouteReliability(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVRelRREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(IPv4Address));
        case 7: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *AODVRelRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREP *pp = (AODVRelRREP *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getDestAddr()); break;
        case 7: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(AODVRelRERR);

AODVRelRERR::AODVRelRERR(const char *name) : ::AODVRelControlPacket(name)
{
    this->packetType_var = RERR;
    unreachableNodes_arraysize = 0;
    this->unreachableNodes_var = 0;
    this->noDeleteFlag_var = 0;
    this->destCount_var = 0;
}

AODVRelRERR::AODVRelRERR(const AODVRelRERR& other) : ::AODVRelControlPacket(other)
{
    unreachableNodes_arraysize = 0;
    this->unreachableNodes_var = 0;
    copy(other);
}

AODVRelRERR::~AODVRelRERR()
{
    delete [] unreachableNodes_var;
}

AODVRelRERR& AODVRelRERR::operator=(const AODVRelRERR& other)
{
    if (this==&other) return *this;
    ::AODVRelControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVRelRERR::copy(const AODVRelRERR& other)
{
    this->packetType_var = other.packetType_var;
    delete [] this->unreachableNodes_var;
    this->unreachableNodes_var = (other.unreachableNodes_arraysize==0) ? NULL : new UnreachableNode[other.unreachableNodes_arraysize];
    unreachableNodes_arraysize = other.unreachableNodes_arraysize;
    for (unsigned int i=0; i<unreachableNodes_arraysize; i++)
        this->unreachableNodes_var[i] = other.unreachableNodes_var[i];
    this->noDeleteFlag_var = other.noDeleteFlag_var;
    this->destCount_var = other.destCount_var;
}

void AODVRelRERR::parsimPack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    b->pack(unreachableNodes_arraysize);
    doPacking(b,this->unreachableNodes_var,unreachableNodes_arraysize);
    doPacking(b,this->noDeleteFlag_var);
    doPacking(b,this->destCount_var);
}

void AODVRelRERR::parsimUnpack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    delete [] this->unreachableNodes_var;
    b->unpack(unreachableNodes_arraysize);
    if (unreachableNodes_arraysize==0) {
        this->unreachableNodes_var = 0;
    } else {
        this->unreachableNodes_var = new UnreachableNode[unreachableNodes_arraysize];
        doUnpacking(b,this->unreachableNodes_var,unreachableNodes_arraysize);
    }
    doUnpacking(b,this->noDeleteFlag_var);
    doUnpacking(b,this->destCount_var);
}

unsigned int AODVRelRERR::getPacketType() const
{
    return packetType_var;
}

void AODVRelRERR::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

void AODVRelRERR::setUnreachableNodesArraySize(unsigned int size)
{
    UnreachableNode *unreachableNodes_var2 = (size==0) ? NULL : new UnreachableNode[size];
    unsigned int sz = unreachableNodes_arraysize < size ? unreachableNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableNodes_var2[i] = this->unreachableNodes_var[i];
    unreachableNodes_arraysize = size;
    delete [] this->unreachableNodes_var;
    this->unreachableNodes_var = unreachableNodes_var2;
}

unsigned int AODVRelRERR::getUnreachableNodesArraySize() const
{
    return unreachableNodes_arraysize;
}

UnreachableNode& AODVRelRERR::getUnreachableNodes(unsigned int k)
{
    if (k>=unreachableNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableNodes_arraysize, k);
    return unreachableNodes_var[k];
}

void AODVRelRERR::setUnreachableNodes(unsigned int k, const UnreachableNode& unreachableNodes)
{
    if (k>=unreachableNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableNodes_arraysize, k);
    this->unreachableNodes_var[k] = unreachableNodes;
}

bool AODVRelRERR::getNoDeleteFlag() const
{
    return noDeleteFlag_var;
}

void AODVRelRERR::setNoDeleteFlag(bool noDeleteFlag)
{
    this->noDeleteFlag_var = noDeleteFlag;
}

unsigned int AODVRelRERR::getDestCount() const
{
    return destCount_var;
}

void AODVRelRERR::setDestCount(unsigned int destCount)
{
    this->destCount_var = destCount;
}

class AODVRelRERRDescriptor : public cClassDescriptor
{
  public:
    AODVRelRERRDescriptor();
    virtual ~AODVRelRERRDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVRelRERRDescriptor);

AODVRelRERRDescriptor::AODVRelRERRDescriptor() : cClassDescriptor("AODVRelRERR", "AODVRelControlPacket")
{
}

AODVRelRERRDescriptor::~AODVRelRERRDescriptor()
{
}

bool AODVRelRERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVRelRERR *>(obj)!=NULL;
}

const char *AODVRelRERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVRelRERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int AODVRelRERRDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *AODVRelRERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "unreachableNodes",
        "noDeleteFlag",
        "destCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int AODVRelRERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableNodes")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noDeleteFlag")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVRelRERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "UnreachableNode",
        "bool",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *AODVRelRERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVRelRERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRERR *pp = (AODVRelRERR *)object; (void)pp;
    switch (field) {
        case 1: return pp->getUnreachableNodesArraySize();
        default: return 0;
    }
}

std::string AODVRelRERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRERR *pp = (AODVRelRERR *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: {std::stringstream out; out << pp->getUnreachableNodes(i); return out.str();}
        case 2: return bool2string(pp->getNoDeleteFlag());
        case 3: return ulong2string(pp->getDestCount());
        default: return "";
    }
}

bool AODVRelRERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRERR *pp = (AODVRelRERR *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 2: pp->setNoDeleteFlag(string2bool(value)); return true;
        case 3: pp->setDestCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVRelRERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(UnreachableNode));
        default: return NULL;
    };
}

void *AODVRelRERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRERR *pp = (AODVRelRERR *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getUnreachableNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(AODVRelRREPACK);

AODVRelRREPACK::AODVRelRREPACK(const char *name) : ::AODVRelControlPacket(name)
{
    this->packetType_var = RREPACK;
}

AODVRelRREPACK::AODVRelRREPACK(const AODVRelRREPACK& other) : ::AODVRelControlPacket(other)
{
    copy(other);
}

AODVRelRREPACK::~AODVRelRREPACK()
{
}

AODVRelRREPACK& AODVRelRREPACK::operator=(const AODVRelRREPACK& other)
{
    if (this==&other) return *this;
    ::AODVRelControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVRelRREPACK::copy(const AODVRelRREPACK& other)
{
    this->packetType_var = other.packetType_var;
}

void AODVRelRREPACK::parsimPack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void AODVRelRREPACK::parsimUnpack(cCommBuffer *b)
{
    ::AODVRelControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int AODVRelRREPACK::getPacketType() const
{
    return packetType_var;
}

void AODVRelRREPACK::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class AODVRelRREPACKDescriptor : public cClassDescriptor
{
  public:
    AODVRelRREPACKDescriptor();
    virtual ~AODVRelRREPACKDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(AODVRelRREPACKDescriptor);

AODVRelRREPACKDescriptor::AODVRelRREPACKDescriptor() : cClassDescriptor("AODVRelRREPACK", "AODVRelControlPacket")
{
}

AODVRelRREPACKDescriptor::~AODVRelRREPACKDescriptor()
{
}

bool AODVRelRREPACKDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVRelRREPACK *>(obj)!=NULL;
}

const char *AODVRelRREPACKDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVRelRREPACKDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AODVRelRREPACKDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AODVRelRREPACKDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AODVRelRREPACKDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVRelRREPACKDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AODVRelRREPACKDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int AODVRelRREPACKDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREPACK *pp = (AODVRelRREPACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVRelRREPACKDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREPACK *pp = (AODVRelRREPACK *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVRelRREPACKDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREPACK *pp = (AODVRelRREPACK *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVRelRREPACKDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *AODVRelRREPACKDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVRelRREPACK *pp = (AODVRelRREPACK *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(WaitForRREP);

WaitForRREP::WaitForRREP(const char *name, int kind) : ::cMessage(name,kind)
{
    this->lastTTL_var = 0;
    this->fromInvalidEntry_var = 0;
}

WaitForRREP::WaitForRREP(const WaitForRREP& other) : ::cMessage(other)
{
    copy(other);
}

WaitForRREP::~WaitForRREP()
{
}

WaitForRREP& WaitForRREP::operator=(const WaitForRREP& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void WaitForRREP::copy(const WaitForRREP& other)
{
    this->destAddr_var = other.destAddr_var;
    this->lastTTL_var = other.lastTTL_var;
    this->fromInvalidEntry_var = other.fromInvalidEntry_var;
}

void WaitForRREP::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->lastTTL_var);
    doPacking(b,this->fromInvalidEntry_var);
}

void WaitForRREP::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->lastTTL_var);
    doUnpacking(b,this->fromInvalidEntry_var);
}

IPv4Address& WaitForRREP::getDestAddr()
{
    return destAddr_var;
}

void WaitForRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int WaitForRREP::getLastTTL() const
{
    return lastTTL_var;
}

void WaitForRREP::setLastTTL(unsigned int lastTTL)
{
    this->lastTTL_var = lastTTL;
}

bool WaitForRREP::getFromInvalidEntry() const
{
    return fromInvalidEntry_var;
}

void WaitForRREP::setFromInvalidEntry(bool fromInvalidEntry)
{
    this->fromInvalidEntry_var = fromInvalidEntry;
}

class WaitForRREPDescriptor : public cClassDescriptor
{
  public:
    WaitForRREPDescriptor();
    virtual ~WaitForRREPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(WaitForRREPDescriptor);

WaitForRREPDescriptor::WaitForRREPDescriptor() : cClassDescriptor("WaitForRREP", "cMessage")
{
}

WaitForRREPDescriptor::~WaitForRREPDescriptor()
{
}

bool WaitForRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<WaitForRREP *>(obj)!=NULL;
}

const char *WaitForRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int WaitForRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int WaitForRREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *WaitForRREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destAddr",
        "lastTTL",
        "fromInvalidEntry",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int WaitForRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTTL")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromInvalidEntry")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *WaitForRREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *WaitForRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int WaitForRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRREP *pp = (WaitForRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string WaitForRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRREP *pp = (WaitForRREP *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return ulong2string(pp->getLastTTL());
        case 2: return bool2string(pp->getFromInvalidEntry());
        default: return "";
    }
}

bool WaitForRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRREP *pp = (WaitForRREP *)object; (void)pp;
    switch (field) {
        case 1: pp->setLastTTL(string2ulong(value)); return true;
        case 2: pp->setFromInvalidEntry(string2bool(value)); return true;
        default: return false;
    }
}

const char *WaitForRREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *WaitForRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRREP *pp = (WaitForRREP *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


