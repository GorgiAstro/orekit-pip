#ifndef org_orekit_gnss_metric_ntrip_DataStreamRecord_H
#define org_orekit_gnss_metric_ntrip_DataStreamRecord_H

#include "org/orekit/gnss/metric/ntrip/Record.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class RecordType;
          class Authentication;
          class DataFormat;
          class StreamedMessage;
          class NavigationSystem;
          class CarrierPhase;
        }
      }
    }
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
              mid_init$_105e1eadb709d9ac,
              mid_areFeesRequired_eee3de00fe971136,
              mid_getAuthentication_6de0606d40023783,
              mid_getBitRate_d6ab429752e7c267,
              mid_getCarrierPhase_ab5497447f493378,
              mid_getCompressionEncryption_d2c8eb4129821f0e,
              mid_getCountry_d2c8eb4129821f0e,
              mid_getFormat_6b80d20facb4c62c,
              mid_getFormatDetails_d751c1a57012b438,
              mid_getGenerator_d2c8eb4129821f0e,
              mid_getLatitude_9981f74b2d109da6,
              mid_getLongitude_9981f74b2d109da6,
              mid_getMountPoint_d2c8eb4129821f0e,
              mid_getNavigationSystems_d751c1a57012b438,
              mid_getNetwork_d2c8eb4129821f0e,
              mid_getRecordType_6b1d5e4fef5a106c,
              mid_getSourceIdentifier_d2c8eb4129821f0e,
              mid_isNMEARequired_eee3de00fe971136,
              mid_isNetworked_eee3de00fe971136,
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
