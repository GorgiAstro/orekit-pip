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
              mid_init$_105e1eadb709d9ac,
              mid_canReceiveNMEA_eee3de00fe971136,
              mid_getCountry_d2c8eb4129821f0e,
              mid_getFallbackHostOrIPAddress_d2c8eb4129821f0e,
              mid_getFallbackPort_d6ab429752e7c267,
              mid_getHostOrIPAddress_d2c8eb4129821f0e,
              mid_getLatitude_9981f74b2d109da6,
              mid_getLongitude_9981f74b2d109da6,
              mid_getOperator_d2c8eb4129821f0e,
              mid_getPort_d6ab429752e7c267,
              mid_getRecordType_6b1d5e4fef5a106c,
              mid_getSourceIdentifier_d2c8eb4129821f0e,
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
