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
              mid_init$_d0bc48d5b00dc40c,
              mid_canReceiveNMEA_b108b35ef48e27bd,
              mid_getCountry_11b109bd155ca898,
              mid_getFallbackHostOrIPAddress_11b109bd155ca898,
              mid_getFallbackPort_570ce0828f81a2c1,
              mid_getHostOrIPAddress_11b109bd155ca898,
              mid_getLatitude_dff5885c2c873297,
              mid_getLongitude_dff5885c2c873297,
              mid_getOperator_11b109bd155ca898,
              mid_getPort_570ce0828f81a2c1,
              mid_getRecordType_7952bb756bff2dbf,
              mid_getSourceIdentifier_11b109bd155ca898,
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
