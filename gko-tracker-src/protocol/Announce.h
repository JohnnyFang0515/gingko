/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Announce_H
#define Announce_H

#include <thrift/TDispatchProcessor.h>
#include "announce_types.h"

namespace bbts { namespace tracker {

class AnnounceIf {
 public:
  virtual ~AnnounceIf() {}
  virtual void announce( ::bbts::tracker::AnnounceResponse& _return, const  ::bbts::tracker::AnnounceRequest& announce_request) = 0;
  virtual void StopByInfohash( ::bbts::tracker::BaseResponse& _return, const  ::bbts::tracker::ControlByInfohashRequest& request) = 0;
  virtual void ResumeByInfohash( ::bbts::tracker::BaseResponse& _return, const  ::bbts::tracker::ControlByInfohashRequest& request) = 0;
};

class AnnounceIfFactory {
 public:
  typedef AnnounceIf Handler;

  virtual ~AnnounceIfFactory() {}

  virtual AnnounceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(AnnounceIf* /* handler */) = 0;
};

class AnnounceIfSingletonFactory : virtual public AnnounceIfFactory {
 public:
  AnnounceIfSingletonFactory(const boost::shared_ptr<AnnounceIf>& iface) : iface_(iface) {}
  virtual ~AnnounceIfSingletonFactory() {}

  virtual AnnounceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(AnnounceIf* /* handler */) {}

 protected:
  boost::shared_ptr<AnnounceIf> iface_;
};

class AnnounceNull : virtual public AnnounceIf {
 public:
  virtual ~AnnounceNull() {}
  void announce( ::bbts::tracker::AnnounceResponse& /* _return */, const  ::bbts::tracker::AnnounceRequest& /* announce_request */) {
    return;
  }
  void StopByInfohash( ::bbts::tracker::BaseResponse& /* _return */, const  ::bbts::tracker::ControlByInfohashRequest& /* request */) {
    return;
  }
  void ResumeByInfohash( ::bbts::tracker::BaseResponse& /* _return */, const  ::bbts::tracker::ControlByInfohashRequest& /* request */) {
    return;
  }
};

typedef struct _Announce_announce_args__isset {
  _Announce_announce_args__isset() : announce_request(false) {}
  bool announce_request;
} _Announce_announce_args__isset;

class Announce_announce_args {
 public:

  Announce_announce_args() {
  }

  virtual ~Announce_announce_args() throw() {}

   ::bbts::tracker::AnnounceRequest announce_request;

  _Announce_announce_args__isset __isset;

  void __set_announce_request(const  ::bbts::tracker::AnnounceRequest& val) {
    announce_request = val;
  }

  bool operator == (const Announce_announce_args & rhs) const
  {
    if (!(announce_request == rhs.announce_request))
      return false;
    return true;
  }
  bool operator != (const Announce_announce_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Announce_announce_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Announce_announce_pargs {
 public:


  virtual ~Announce_announce_pargs() throw() {}

  const  ::bbts::tracker::AnnounceRequest* announce_request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Announce_announce_result__isset {
  _Announce_announce_result__isset() : success(false) {}
  bool success;
} _Announce_announce_result__isset;

class Announce_announce_result {
 public:

  Announce_announce_result() {
  }

  virtual ~Announce_announce_result() throw() {}

   ::bbts::tracker::AnnounceResponse success;

  _Announce_announce_result__isset __isset;

  void __set_success(const  ::bbts::tracker::AnnounceResponse& val) {
    success = val;
  }

  bool operator == (const Announce_announce_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Announce_announce_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Announce_announce_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Announce_announce_presult__isset {
  _Announce_announce_presult__isset() : success(false) {}
  bool success;
} _Announce_announce_presult__isset;

class Announce_announce_presult {
 public:


  virtual ~Announce_announce_presult() throw() {}

   ::bbts::tracker::AnnounceResponse* success;

  _Announce_announce_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Announce_StopByInfohash_args__isset {
  _Announce_StopByInfohash_args__isset() : request(false) {}
  bool request;
} _Announce_StopByInfohash_args__isset;

class Announce_StopByInfohash_args {
 public:

  Announce_StopByInfohash_args() {
  }

  virtual ~Announce_StopByInfohash_args() throw() {}

   ::bbts::tracker::ControlByInfohashRequest request;

  _Announce_StopByInfohash_args__isset __isset;

  void __set_request(const  ::bbts::tracker::ControlByInfohashRequest& val) {
    request = val;
  }

  bool operator == (const Announce_StopByInfohash_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const Announce_StopByInfohash_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Announce_StopByInfohash_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Announce_StopByInfohash_pargs {
 public:


  virtual ~Announce_StopByInfohash_pargs() throw() {}

  const  ::bbts::tracker::ControlByInfohashRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Announce_StopByInfohash_result__isset {
  _Announce_StopByInfohash_result__isset() : success(false) {}
  bool success;
} _Announce_StopByInfohash_result__isset;

class Announce_StopByInfohash_result {
 public:

  Announce_StopByInfohash_result() {
  }

  virtual ~Announce_StopByInfohash_result() throw() {}

   ::bbts::tracker::BaseResponse success;

  _Announce_StopByInfohash_result__isset __isset;

  void __set_success(const  ::bbts::tracker::BaseResponse& val) {
    success = val;
  }

  bool operator == (const Announce_StopByInfohash_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Announce_StopByInfohash_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Announce_StopByInfohash_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Announce_StopByInfohash_presult__isset {
  _Announce_StopByInfohash_presult__isset() : success(false) {}
  bool success;
} _Announce_StopByInfohash_presult__isset;

class Announce_StopByInfohash_presult {
 public:


  virtual ~Announce_StopByInfohash_presult() throw() {}

   ::bbts::tracker::BaseResponse* success;

  _Announce_StopByInfohash_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Announce_ResumeByInfohash_args__isset {
  _Announce_ResumeByInfohash_args__isset() : request(false) {}
  bool request;
} _Announce_ResumeByInfohash_args__isset;

class Announce_ResumeByInfohash_args {
 public:

  Announce_ResumeByInfohash_args() {
  }

  virtual ~Announce_ResumeByInfohash_args() throw() {}

   ::bbts::tracker::ControlByInfohashRequest request;

  _Announce_ResumeByInfohash_args__isset __isset;

  void __set_request(const  ::bbts::tracker::ControlByInfohashRequest& val) {
    request = val;
  }

  bool operator == (const Announce_ResumeByInfohash_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const Announce_ResumeByInfohash_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Announce_ResumeByInfohash_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Announce_ResumeByInfohash_pargs {
 public:


  virtual ~Announce_ResumeByInfohash_pargs() throw() {}

  const  ::bbts::tracker::ControlByInfohashRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Announce_ResumeByInfohash_result__isset {
  _Announce_ResumeByInfohash_result__isset() : success(false) {}
  bool success;
} _Announce_ResumeByInfohash_result__isset;

class Announce_ResumeByInfohash_result {
 public:

  Announce_ResumeByInfohash_result() {
  }

  virtual ~Announce_ResumeByInfohash_result() throw() {}

   ::bbts::tracker::BaseResponse success;

  _Announce_ResumeByInfohash_result__isset __isset;

  void __set_success(const  ::bbts::tracker::BaseResponse& val) {
    success = val;
  }

  bool operator == (const Announce_ResumeByInfohash_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Announce_ResumeByInfohash_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Announce_ResumeByInfohash_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Announce_ResumeByInfohash_presult__isset {
  _Announce_ResumeByInfohash_presult__isset() : success(false) {}
  bool success;
} _Announce_ResumeByInfohash_presult__isset;

class Announce_ResumeByInfohash_presult {
 public:


  virtual ~Announce_ResumeByInfohash_presult() throw() {}

   ::bbts::tracker::BaseResponse* success;

  _Announce_ResumeByInfohash_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class AnnounceClient : virtual public AnnounceIf {
 public:
  AnnounceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  AnnounceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void announce( ::bbts::tracker::AnnounceResponse& _return, const  ::bbts::tracker::AnnounceRequest& announce_request);
  void send_announce(const  ::bbts::tracker::AnnounceRequest& announce_request);
  void recv_announce( ::bbts::tracker::AnnounceResponse& _return);
  void StopByInfohash( ::bbts::tracker::BaseResponse& _return, const  ::bbts::tracker::ControlByInfohashRequest& request);
  void send_StopByInfohash(const  ::bbts::tracker::ControlByInfohashRequest& request);
  void recv_StopByInfohash( ::bbts::tracker::BaseResponse& _return);
  void ResumeByInfohash( ::bbts::tracker::BaseResponse& _return, const  ::bbts::tracker::ControlByInfohashRequest& request);
  void send_ResumeByInfohash(const  ::bbts::tracker::ControlByInfohashRequest& request);
  void recv_ResumeByInfohash( ::bbts::tracker::BaseResponse& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class AnnounceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<AnnounceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (AnnounceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_announce(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_StopByInfohash(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_ResumeByInfohash(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  AnnounceProcessor(boost::shared_ptr<AnnounceIf> iface) :
    iface_(iface) {
    processMap_["announce"] = &AnnounceProcessor::process_announce;
    processMap_["StopByInfohash"] = &AnnounceProcessor::process_StopByInfohash;
    processMap_["ResumeByInfohash"] = &AnnounceProcessor::process_ResumeByInfohash;
  }

  virtual ~AnnounceProcessor() {}
};

class AnnounceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  AnnounceProcessorFactory(const ::boost::shared_ptr< AnnounceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< AnnounceIfFactory > handlerFactory_;
};

class AnnounceMultiface : virtual public AnnounceIf {
 public:
  AnnounceMultiface(std::vector<boost::shared_ptr<AnnounceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~AnnounceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<AnnounceIf> > ifaces_;
  AnnounceMultiface() {}
  void add(boost::shared_ptr<AnnounceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void announce( ::bbts::tracker::AnnounceResponse& _return, const  ::bbts::tracker::AnnounceRequest& announce_request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->announce(_return, announce_request);
    }
    ifaces_[i]->announce(_return, announce_request);
    return;
  }

  void StopByInfohash( ::bbts::tracker::BaseResponse& _return, const  ::bbts::tracker::ControlByInfohashRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->StopByInfohash(_return, request);
    }
    ifaces_[i]->StopByInfohash(_return, request);
    return;
  }

  void ResumeByInfohash( ::bbts::tracker::BaseResponse& _return, const  ::bbts::tracker::ControlByInfohashRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ResumeByInfohash(_return, request);
    }
    ifaces_[i]->ResumeByInfohash(_return, request);
    return;
  }

};

}} // namespace

#endif
