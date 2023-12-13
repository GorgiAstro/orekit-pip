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
          class StreamedMessage;
          class NavigationSystem;
          class RecordType;
          class Authentication;
          class DataFormat;
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
              mid_init$_734b91ac30d5f9b4,
              mid_areFeesRequired_9ab94ac1dc23b105,
              mid_getAuthentication_94d108ef01c519e6,
              mid_getBitRate_55546ef6a647f39b,
              mid_getCarrierPhase_684b70c06f5630be,
              mid_getCompressionEncryption_1c1fa1e935d6cdcf,
              mid_getCountry_1c1fa1e935d6cdcf,
              mid_getFormat_be80987a68694316,
              mid_getFormatDetails_e62d3bb06d56d7e3,
              mid_getGenerator_1c1fa1e935d6cdcf,
              mid_getLatitude_b74f83833fdad017,
              mid_getLongitude_b74f83833fdad017,
              mid_getMountPoint_1c1fa1e935d6cdcf,
              mid_getNavigationSystems_e62d3bb06d56d7e3,
              mid_getNetwork_1c1fa1e935d6cdcf,
              mid_getRecordType_3f153b7c7459a9e2,
              mid_getSourceIdentifier_1c1fa1e935d6cdcf,
              mid_isNMEARequired_9ab94ac1dc23b105,
              mid_isNetworked_9ab94ac1dc23b105,
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
