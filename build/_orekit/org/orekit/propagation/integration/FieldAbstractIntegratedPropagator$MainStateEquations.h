#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator$MainStateEquations_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator$MainStateEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class FieldAbstractIntegratedPropagator$MainStateEquations : public ::java::lang::Object {
         public:
          enum {
            mid_computeDerivatives_d4f2e3295d4ac943,
            mid_init_357211ab77703f3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAbstractIntegratedPropagator$MainStateEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAbstractIntegratedPropagator$MainStateEquations(const FieldAbstractIntegratedPropagator$MainStateEquations& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::hipparchus::CalculusFieldElement > computeDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations);
        extern PyTypeObject *PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations);

        class t_FieldAbstractIntegratedPropagator$MainStateEquations {
        public:
          PyObject_HEAD
          FieldAbstractIntegratedPropagator$MainStateEquations object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
