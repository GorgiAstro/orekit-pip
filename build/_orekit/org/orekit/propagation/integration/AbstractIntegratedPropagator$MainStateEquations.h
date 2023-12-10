#ifndef org_orekit_propagation_integration_AbstractIntegratedPropagator$MainStateEquations_H
#define org_orekit_propagation_integration_AbstractIntegratedPropagator$MainStateEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
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
      namespace integration {

        class AbstractIntegratedPropagator$MainStateEquations : public ::java::lang::Object {
         public:
          enum {
            mid_computeDerivatives_cb44069ef445f941,
            mid_init_826b4eda94da4e78,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractIntegratedPropagator$MainStateEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractIntegratedPropagator$MainStateEquations(const AbstractIntegratedPropagator$MainStateEquations& obj) : ::java::lang::Object(obj) {}

          JArray< jdouble > computeDerivatives(const ::org::orekit::propagation::SpacecraftState &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations);
        extern PyTypeObject *PY_TYPE(AbstractIntegratedPropagator$MainStateEquations);

        class t_AbstractIntegratedPropagator$MainStateEquations {
        public:
          PyObject_HEAD
          AbstractIntegratedPropagator$MainStateEquations object;
          static PyObject *wrap_Object(const AbstractIntegratedPropagator$MainStateEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
