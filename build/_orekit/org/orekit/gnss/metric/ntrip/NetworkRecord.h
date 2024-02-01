#ifndef org_orekit_gnss_metric_ntrip_NetworkRecord_H
#define org_orekit_gnss_metric_ntrip_NetworkRecord_H

#include "org/orekit/gnss/metric/ntrip/Record.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class RecordType;
          class Authentication;
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
              mid_init$_105e1eadb709d9ac,
              mid_areFeesRequired_eee3de00fe971136,
              mid_getAuthentication_6de0606d40023783,
              mid_getNetworkIdentifier_d2c8eb4129821f0e,
              mid_getNetworkInfoAddress_d2c8eb4129821f0e,
              mid_getOperator_d2c8eb4129821f0e,
              mid_getRecordType_6b1d5e4fef5a106c,
              mid_getRegistrationAddress_d2c8eb4129821f0e,
              mid_getStreamInfoAddress_d2c8eb4129821f0e,
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
