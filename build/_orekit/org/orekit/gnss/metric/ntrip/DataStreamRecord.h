#ifndef org_orekit_gnss_metric_ntrip_DataStreamRecord_H
#define org_orekit_gnss_metric_ntrip_DataStreamRecord_H

#include "org/orekit/gnss/metric/ntrip/Record.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class StreamedMessage;
          class NavigationSystem;
          class DataFormat;
          class CarrierPhase;
          class Authentication;
          class RecordType;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class DataStreamRecord : public ::org::orekit::gnss::metric::ntrip::Record {
           public:
            enum {
              mid_init$_f5ffdf29129ef90a,
              mid_areFeesRequired_89b302893bdbe1f1,
              mid_getAuthentication_c5e2d1332c099f0d,
              mid_getBitRate_412668abc8d889e9,
              mid_getCarrierPhase_599f6ea2a23b069a,
              mid_getCompressionEncryption_3cffd47377eca18a,
              mid_getCountry_3cffd47377eca18a,
              mid_getFormat_bb02fb13bbd4a601,
              mid_getFormatDetails_0d9551367f7ecdef,
              mid_getGenerator_3cffd47377eca18a,
              mid_getLatitude_557b8123390d8d0c,
              mid_getLongitude_557b8123390d8d0c,
              mid_getMountPoint_3cffd47377eca18a,
              mid_getNavigationSystems_0d9551367f7ecdef,
              mid_getNetwork_3cffd47377eca18a,
              mid_getRecordType_2923d5139aa846c0,
              mid_getSourceIdentifier_3cffd47377eca18a,
              mid_isNMEARequired_89b302893bdbe1f1,
              mid_isNetworked_89b302893bdbe1f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DataStreamRecord(jobject obj) : ::org::orekit::gnss::metric::ntrip::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DataStreamRecord(const DataStreamRecord& obj) : ::org::orekit::gnss::metric::ntrip::Record(obj) {}

            DataStreamRecord(const ::java::lang::String &);

            jboolean areFeesRequired() const;
            ::org::orekit::gnss::metric::ntrip::Authentication getAuthentication() const;
            jint getBitRate() const;
            ::org::orekit::gnss::metric::ntrip::CarrierPhase getCarrierPhase() const;
            ::java::lang::String getCompressionEncryption() const;
            ::java::lang::String getCountry() const;
            ::org::orekit::gnss::metric::ntrip::DataFormat getFormat() const;
            ::java::util::List getFormatDetails() const;
            ::java::lang::String getGenerator() const;
            jdouble getLatitude() const;
            jdouble getLongitude() const;
            ::java::lang::String getMountPoint() const;
            ::java::util::List getNavigationSystems() const;
            ::java::lang::String getNetwork() const;
            ::org::orekit::gnss::metric::ntrip::RecordType getRecordType() const;
            ::java::lang::String getSourceIdentifier() const;
            jboolean isNMEARequired() const;
            jboolean isNetworked() const;
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
          extern PyType_Def PY_TYPE_DEF(DataStreamRecord);
          extern PyTypeObject *PY_TYPE(DataStreamRecord);

          class t_DataStreamRecord {
          public:
            PyObject_HEAD
            DataStreamRecord object;
            static PyObject *wrap_Object(const DataStreamRecord&);
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
