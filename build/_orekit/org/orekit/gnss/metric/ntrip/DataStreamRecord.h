#ifndef org_orekit_gnss_metric_ntrip_DataStreamRecord_H
#define org_orekit_gnss_metric_ntrip_DataStreamRecord_H

#include "org/orekit/gnss/metric/ntrip/Record.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class RecordType;
          class NavigationSystem;
          class DataFormat;
          class CarrierPhase;
          class Authentication;
          class StreamedMessage;
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
              mid_init$_e939c6558ae8d313,
              mid_areFeesRequired_e470b6d9e0d979db,
              mid_getAuthentication_5f15d37696ebc041,
              mid_getBitRate_f2f64475e4580546,
              mid_getCarrierPhase_93211f8bfa76be46,
              mid_getCompressionEncryption_0090f7797e403f43,
              mid_getCountry_0090f7797e403f43,
              mid_getFormat_2eb538e7e8cbc4c3,
              mid_getFormatDetails_a6156df500549a58,
              mid_getGenerator_0090f7797e403f43,
              mid_getLatitude_456d9a2f64d6b28d,
              mid_getLongitude_456d9a2f64d6b28d,
              mid_getMountPoint_0090f7797e403f43,
              mid_getNavigationSystems_a6156df500549a58,
              mid_getNetwork_0090f7797e403f43,
              mid_getRecordType_9f311496246ad578,
              mid_getSourceIdentifier_0090f7797e403f43,
              mid_isNMEARequired_e470b6d9e0d979db,
              mid_isNetworked_e470b6d9e0d979db,
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
