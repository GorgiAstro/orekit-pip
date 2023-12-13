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
              mid_init$_734b91ac30d5f9b4,
              mid_canReceiveNMEA_9ab94ac1dc23b105,
              mid_getCountry_1c1fa1e935d6cdcf,
              mid_getFallbackHostOrIPAddress_1c1fa1e935d6cdcf,
              mid_getFallbackPort_55546ef6a647f39b,
              mid_getHostOrIPAddress_1c1fa1e935d6cdcf,
              mid_getLatitude_b74f83833fdad017,
              mid_getLongitude_b74f83833fdad017,
              mid_getOperator_1c1fa1e935d6cdcf,
              mid_getPort_55546ef6a647f39b,
              mid_getRecordType_3f153b7c7459a9e2,
              mid_getSourceIdentifier_1c1fa1e935d6cdcf,
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
