#ifndef org_orekit_propagation_analytical_AdapterPropagator$DifferentialEffect_H
#define org_orekit_propagation_analytical_AdapterPropagator$DifferentialEffect_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class AdapterPropagator$DifferentialEffect : public ::java::lang::Object {
         public:
          enum {
            mid_apply_ed3fe207e6fde26f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdapterPropagator$DifferentialEffect(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdapterPropagator$DifferentialEffect(const AdapterPropagator$DifferentialEffect& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::propagation::SpacecraftState apply(const ::org::orekit::propagation::SpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(AdapterPropagator$DifferentialEffect);
        extern PyTypeObject *PY_TYPE(AdapterPropagator$DifferentialEffect);

        class t_AdapterPropagator$DifferentialEffect {
        public:
          PyObject_HEAD
          AdapterPropagator$DifferentialEffect object;
          static PyObject *wrap_Object(const AdapterPropagator$DifferentialEffect&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
