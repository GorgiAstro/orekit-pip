#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractCycleSlipDetector_H

#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectorResults;
        }
      }
    }
    namespace gnss {
      class SatelliteSystem;
      class Frequency;
    }
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationDataSet;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonAbstractCycleSlipDetector : public ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector {
           public:
            enum {
              mid_cycleSlipDataSet_37ef30963779752d,
              mid_finalize_0fa09c18fee449d5,
              mid_getMaxTimeBeetween2Measurement_dff5885c2c873297,
              mid_getMinMeasurementNumber_570ce0828f81a2c1,
              mid_getResults_2afa36052df4765d,
              mid_manageData_5e249044f63168db,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              mid_setName_571eb7cd9a331044,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractCycleSlipDetector(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractCycleSlipDetector(const PythonAbstractCycleSlipDetector& obj) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(obj) {}

            void cycleSlipDataSet(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::gnss::Frequency &) const;
            void finalize() const;
            jdouble getMaxTimeBeetween2Measurement() const;
            jint getMinMeasurementNumber() const;
            ::java::util::List getResults() const;
            void manageData(const ::org::orekit::files::rinex::observation::ObservationDataSet &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            ::java::lang::String setName(jint, const ::org::orekit::gnss::SatelliteSystem &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(PythonAbstractCycleSlipDetector);
          extern PyTypeObject *PY_TYPE(PythonAbstractCycleSlipDetector);

          class t_PythonAbstractCycleSlipDetector {
          public:
            PyObject_HEAD
            PythonAbstractCycleSlipDetector object;
            static PyObject *wrap_Object(const PythonAbstractCycleSlipDetector&);
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
