#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractCycleSlipDetector_H

#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class Frequency;
      class SatelliteSystem;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectorResults;
        }
      }
    }
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationDataSet;
        }
      }
    }
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
              mid_cycleSlipDataSet_7660552c05323b39,
              mid_finalize_0640e6acf969ed28,
              mid_getMaxTimeBeetween2Measurement_557b8123390d8d0c,
              mid_getMinMeasurementNumber_412668abc8d889e9,
              mid_getResults_0d9551367f7ecdef,
              mid_manageData_7cae3eafa8e6978c,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_setName_3232b7e9138747dc,
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
