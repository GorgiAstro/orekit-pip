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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectorResults;
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
              mid_cycleSlipDataSet_6ac7265223ac326f,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getMaxTimeBeetween2Measurement_b74f83833fdad017,
              mid_getMinMeasurementNumber_55546ef6a647f39b,
              mid_getResults_e62d3bb06d56d7e3,
              mid_manageData_e95b94a72b1c921a,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
              mid_setName_c8f78fa2214ae788,
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
