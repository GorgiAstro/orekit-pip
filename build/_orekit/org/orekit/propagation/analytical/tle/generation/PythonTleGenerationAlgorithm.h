#ifndef org_orekit_propagation_analytical_tle_generation_PythonTleGenerationAlgorithm_H
#define org_orekit_propagation_analytical_tle_generation_PythonTleGenerationAlgorithm_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class FieldTLE;
          class TLE;
        }
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            class PythonTleGenerationAlgorithm : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_finalize_ff7cb6c242604316,
                mid_generate_166cccd89c387fd5,
                mid_generate_f8078c645a12d356,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonTleGenerationAlgorithm(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonTleGenerationAlgorithm(const PythonTleGenerationAlgorithm& obj) : ::java::lang::Object(obj) {}

              PythonTleGenerationAlgorithm();

              void finalize() const;
              ::org::orekit::propagation::analytical::tle::FieldTLE generate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::analytical::tle::FieldTLE &) const;
              ::org::orekit::propagation::analytical::tle::TLE generate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::analytical::tle::TLE &) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(PythonTleGenerationAlgorithm);
            extern PyTypeObject *PY_TYPE(PythonTleGenerationAlgorithm);

            class t_PythonTleGenerationAlgorithm {
            public:
              PyObject_HEAD
              PythonTleGenerationAlgorithm object;
              static PyObject *wrap_Object(const PythonTleGenerationAlgorithm&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
