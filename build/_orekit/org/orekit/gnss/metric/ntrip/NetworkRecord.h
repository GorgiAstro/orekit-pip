#ifndef org_orekit_gnss_metric_ntrip_NetworkRecord_H
#define org_orekit_gnss_metric_ntrip_NetworkRecord_H

#include "org/orekit/gnss/metric/ntrip/Record.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class Authentication;
          class RecordType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class NetworkRecord : public ::org::orekit::gnss::metric::ntrip::Record {
           public:
            enum {
              mid_init$_e939c6558ae8d313,
              mid_areFeesRequired_e470b6d9e0d979db,
              mid_getAuthentication_5f15d37696ebc041,
              mid_getNetworkIdentifier_0090f7797e403f43,
              mid_getNetworkInfoAddress_0090f7797e403f43,
              mid_getOperator_0090f7797e403f43,
              mid_getRecordType_9f311496246ad578,
              mid_getRegistrationAddress_0090f7797e403f43,
              mid_getStreamInfoAddress_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NetworkRecord(jobject obj) : ::org::orekit::gnss::metric::ntrip::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NetworkRecord(const NetworkRecord& obj) : ::org::orekit::gnss::metric::ntrip::Record(obj) {}

            NetworkRecord(const ::java::lang::String &);

            jboolean areFeesRequired() const;
            ::org::orekit::gnss::metric::ntrip::Authentication getAuthentication() const;
            ::java::lang::String getNetworkIdentifier() const;
            ::java::lang::String getNetworkInfoAddress() const;
            ::java::lang::String getOperator() const;
            ::org::orekit::gnss::metric::ntrip::RecordType getRecordType() const;
            ::java::lang::String getRegistrationAddress() const;
            ::java::lang::String getStreamInfoAddress() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(NetworkRecord);
          extern PyTypeObject *PY_TYPE(NetworkRecord);

          class t_NetworkRecord {
          public:
            PyObject_HEAD
            NetworkRecord object;
            static PyObject *wrap_Object(const NetworkRecord&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
