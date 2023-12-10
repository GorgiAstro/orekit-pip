#ifndef org_orekit_estimation_measurements_gnss_PythonCycleSlipDetectors_H
#define org_orekit_estimation_measurements_gnss_PythonCycleSlipDetectors_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectorResults;
          class CycleSlipDetectors;
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
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
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
              mid_init$_0fa09c18fee449d5,
              mid_detect_667c8a8776700e01,
              mid_finalize_0fa09c18fee449d5,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
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
