#ifndef org_orekit_propagation_numerical_FieldTimeDerivativesEquations_H
#define org_orekit_propagation_numerical_FieldTimeDerivativesEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
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
      namespace numerical {

        class FieldTimeDerivativesEquations : public ::java::lang::Object {
         public:
          enum {
            mid_addKeplerContribution_f63ca9e3185c722e,
            mid_addMassDerivative_f63ca9e3185c722e,
            mid_addNonKeplerianAcceleration_1344cdbf3f0498af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldTimeDerivativesEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldTimeDerivativesEquations(const FieldTimeDerivativesEquations& obj) : ::java::lang::Object(obj) {}

          void addKeplerContribution(const ::org::hipparchus::CalculusFieldElement &) const;
          void addMassDerivative(const ::org::hipparchus::CalculusFieldElement &) const;
          void addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(FieldTimeDerivativesEquations);
        extern PyTypeObject *PY_TYPE(FieldTimeDerivativesEquations);

        class t_FieldTimeDerivativesEquations {
        public:
          PyObject_HEAD
          FieldTimeDerivativesEquations object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldTimeDerivativesEquations *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldTimeDerivativesEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldTimeDerivativesEquations&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
