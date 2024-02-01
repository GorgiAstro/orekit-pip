#ifndef org_orekit_estimation_measurements_modifiers_PythonParametricModelEffectGradient_H
#define org_orekit_estimation_measurements_modifiers_PythonParametricModelEffectGradient_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
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
              mid_init$_ff7cb6c242604316,
              mid_evaluate_21f97701db12cdb0,
              mid_finalize_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
