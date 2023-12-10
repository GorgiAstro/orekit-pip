#ifndef org_orekit_gnss_metric_ntrip_CasterRecord_H
#define org_orekit_gnss_metric_ntrip_CasterRecord_H

#include "org/orekit/gnss/metric/ntrip/Record.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
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

          class CasterRecord : public ::org::orekit::gnss::metric::ntrip::Record {
           public:
            enum {
              mid_init$_e939c6558ae8d313,
              mid_canReceiveNMEA_e470b6d9e0d979db,
              mid_getCountry_0090f7797e403f43,
              mid_getFallbackHostOrIPAddress_0090f7797e403f43,
              mid_getFallbackPort_f2f64475e4580546,
              mid_getHostOrIPAddress_0090f7797e403f43,
              mid_getLatitude_456d9a2f64d6b28d,
              mid_getLongitude_456d9a2f64d6b28d,
              mid_getOperator_0090f7797e403f43,
              mid_getPort_f2f64475e4580546,
              mid_getRecordType_9f311496246ad578,
              mid_getSourceIdentifier_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CasterRecord(jobject obj) : ::org::orekit::gnss::metric::ntrip::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CasterRecord(const CasterRecord& obj) : ::org::orekit::gnss::metric::ntrip::Record(obj) {}

            CasterRecord(const ::java::lang::String &);

            jboolean canReceiveNMEA() const;
            ::java::lang::String getCountry() const;
            ::java::lang::String getFallbackHostOrIPAddress() const;
            jint getFallbackPort() const;
            ::java::lang::String getHostOrIPAddress() const;
            jdouble getLatitude() const;
            jdouble getLongitude() const;
            ::java::lang::String getOperator() const;
            jint getPort() const;
            ::org::orekit::gnss::metric::ntrip::RecordType getRecordType() const;
            ::java::lang::String getSourceIdentifier() const;
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
          extern PyType_Def PY_TYPE_DEF(CasterRecord);
          extern PyTypeObject *PY_TYPE(CasterRecord);

          class t_CasterRecord {
          public:
            PyObject_HEAD
            CasterRecord object;
            static PyObject *wrap_Object(const CasterRecord&);
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
