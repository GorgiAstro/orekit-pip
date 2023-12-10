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
          class StreamedMessage;
          class CarrierPhase;
          class DataFormat;
          class Authentication;
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
              mid_init$_d0bc48d5b00dc40c,
              mid_areFeesRequired_b108b35ef48e27bd,
              mid_getAuthentication_9b280d308e8278f6,
              mid_getBitRate_570ce0828f81a2c1,
              mid_getCarrierPhase_90a98dc6928530e7,
              mid_getCompressionEncryption_11b109bd155ca898,
              mid_getCountry_11b109bd155ca898,
              mid_getFormat_d3caf78f280234e4,
              mid_getFormatDetails_2afa36052df4765d,
              mid_getGenerator_11b109bd155ca898,
              mid_getLatitude_dff5885c2c873297,
              mid_getLongitude_dff5885c2c873297,
              mid_getMountPoint_11b109bd155ca898,
              mid_getNavigationSystems_2afa36052df4765d,
              mid_getNetwork_11b109bd155ca898,
              mid_getRecordType_7952bb756bff2dbf,
              mid_getSourceIdentifier_11b109bd155ca898,
              mid_isNMEARequired_b108b35ef48e27bd,
              mid_isNetworked_b108b35ef48e27bd,
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
