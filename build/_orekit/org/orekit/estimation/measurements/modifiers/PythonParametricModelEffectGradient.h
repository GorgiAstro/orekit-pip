#ifndef org_orekit_estimation_measurements_modifiers_PythonParametricModelEffectGradient_H
#define org_orekit_estimation_measurements_modifiers_PythonParametricModelEffectGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
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

          class PythonParametricModelEffectGradient : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_evaluate_faa3dab3082b6290,
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

            explicit PythonParametricModelEffectGradient(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonParametricModelEffectGradient(const PythonParametricModelEffectGradient& obj) : ::java::lang::Object(obj) {}

            PythonParametricModelEffectGradient();

            ::org::hipparchus::analysis::differentiation::Gradient evaluate(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonParametricModelEffectGradient);
          extern PyTypeObject *PY_TYPE(PythonParametricModelEffectGradient);

          class t_PythonParametricModelEffectGradient {
          public:
            PyObject_HEAD
            PythonParametricModelEffectGradient object;
            static PyObject *wrap_Object(const PythonParametricModelEffectGradient&);
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
