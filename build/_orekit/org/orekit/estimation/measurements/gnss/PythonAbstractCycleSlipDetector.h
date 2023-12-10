#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractCycleSlipDetector_H

#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectorResults;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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
              mid_cycleSlipDataSet_caa451652427585a,
              mid_finalize_7ae3461a92a43152,
              mid_getMaxTimeBeetween2Measurement_456d9a2f64d6b28d,
              mid_getMinMeasurementNumber_f2f64475e4580546,
              mid_getResults_a6156df500549a58,
              mid_manageData_a74883e6a7063961,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              mid_setName_7d9ccf00009ef79e,
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
