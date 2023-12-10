#ifndef org_orekit_estimation_measurements_modifiers_PythonParametricModelEffect_H
#define org_orekit_estimation_measurements_modifiers_PythonParametricModelEffect_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
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
        namespace modifiers {

          class PythonParametricModelEffect : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_evaluate_08d2a35aee39232b,
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
