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
              mid_init$_f5ffdf29129ef90a,
              mid_areFeesRequired_89b302893bdbe1f1,
              mid_getAuthentication_c5e2d1332c099f0d,
              mid_getNetworkIdentifier_3cffd47377eca18a,
              mid_getNetworkInfoAddress_3cffd47377eca18a,
              mid_getOperator_3cffd47377eca18a,
              mid_getRecordType_2923d5139aa846c0,
              mid_getRegistrationAddress_3cffd47377eca18a,
              mid_getStreamInfoAddress_3cffd47377eca18a,
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
