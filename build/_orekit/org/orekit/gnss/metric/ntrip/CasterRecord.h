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
              mid_init$_f5ffdf29129ef90a,
              mid_canReceiveNMEA_89b302893bdbe1f1,
              mid_getCountry_3cffd47377eca18a,
              mid_getFallbackHostOrIPAddress_3cffd47377eca18a,
              mid_getFallbackPort_412668abc8d889e9,
              mid_getHostOrIPAddress_3cffd47377eca18a,
              mid_getLatitude_557b8123390d8d0c,
              mid_getLongitude_557b8123390d8d0c,
              mid_getOperator_3cffd47377eca18a,
              mid_getPort_412668abc8d889e9,
              mid_getRecordType_2923d5139aa846c0,
              mid_getSourceIdentifier_3cffd47377eca18a,
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
