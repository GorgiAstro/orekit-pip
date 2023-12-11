#ifndef org_orekit_estimation_measurements_modifiers_PythonParametricModelEffect_H
#define org_orekit_estimation_measurements_modifiers_PythonParametricModelEffect_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace estimation {
      namespace measurements {
        class GroundStation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class PythonParametricModelEffect : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_evaluate_17bae2e3aa9bc870,
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

            explicit PythonParametricModelEffect(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonParametricModelEffect(const PythonParametricModelEffect& obj) : ::java::lang::Object(obj) {}

            PythonParametricModelEffect();

            jdouble evaluate(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::SpacecraftState &) const;
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
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(PythonParametricModelEffect);
          extern PyTypeObject *PY_TYPE(PythonParametricModelEffect);

          class t_PythonParametricModelEffect {
          public:
            PyObject_HEAD
            PythonParametricModelEffect object;
            static PyObject *wrap_Object(const PythonParametricModelEffect&);
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
