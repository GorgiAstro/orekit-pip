#ifndef org_orekit_estimation_measurements_gnss_PythonCycleSlipDetectors_H
#define org_orekit_estimation_measurements_gnss_PythonCycleSlipDetectors_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectors;
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

          class PythonCycleSlipDetectors : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_detect_d1fc3c05f458e1a3,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonCycleSlipDetectors(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonCycleSlipDetectors(const PythonCycleSlipDetectors& obj) : ::java::lang::Object(obj) {}

            PythonCycleSlipDetectors();

            ::java::util::List detect(const ::java::util::List &) const;
            void finalize() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonCycleSlipDetectors);
          extern PyTypeObject *PY_TYPE(PythonCycleSlipDetectors);

          class t_PythonCycleSlipDetectors {
          public:
            PyObject_HEAD
            PythonCycleSlipDetectors object;
            static PyObject *wrap_Object(const PythonCycleSlipDetectors&);
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
