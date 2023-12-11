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
              mid_init$_0640e6acf969ed28,
              mid_detect_77cbef3c12dc7892,
              mid_finalize_0640e6acf969ed28,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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
