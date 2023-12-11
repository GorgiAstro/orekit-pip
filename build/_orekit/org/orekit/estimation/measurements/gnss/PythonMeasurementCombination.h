#ifndef org_orekit_estimation_measurements_gnss_PythonMeasurementCombination_H
#define org_orekit_estimation_measurements_gnss_PythonMeasurementCombination_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class MeasurementCombination;
          class CombinedObservationDataSet;
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
namespace java {
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

          class PythonMeasurementCombination : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_combine_82c5de1a9cc4c5da,
              mid_finalize_0640e6acf969ed28,
              mid_getName_3cffd47377eca18a,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMeasurementCombination(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMeasurementCombination(const PythonMeasurementCombination& obj) : ::java::lang::Object(obj) {}

            PythonMeasurementCombination();

            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet combine(const ::org::orekit::files::rinex::observation::ObservationDataSet &) const;
            void finalize() const;
            ::java::lang::String getName() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonMeasurementCombination);
          extern PyTypeObject *PY_TYPE(PythonMeasurementCombination);

          class t_PythonMeasurementCombination {
          public:
            PyObject_HEAD
            PythonMeasurementCombination object;
            static PyObject *wrap_Object(const PythonMeasurementCombination&);
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
