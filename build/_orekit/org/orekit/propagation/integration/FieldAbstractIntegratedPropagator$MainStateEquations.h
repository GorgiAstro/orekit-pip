#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator$MainStateEquations_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator$MainStateEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
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
            mid_computeDerivatives_00d4758be4cee3ce,
            mid_init_811e49dad2467b67,
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
