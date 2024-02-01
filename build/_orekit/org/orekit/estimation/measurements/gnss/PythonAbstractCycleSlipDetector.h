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
    namespace time {
      class AbsoluteDate;
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
              mid_cycleSlipDataSet_417cb06bfd27f642,
              mid_finalize_ff7cb6c242604316,
              mid_getMaxTimeBeetween2Measurement_9981f74b2d109da6,
              mid_getMinMeasurementNumber_d6ab429752e7c267,
              mid_getResults_d751c1a57012b438,
              mid_manageData_d75e9b743ecf20cb,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_setName_69ce224351e794e7,
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
