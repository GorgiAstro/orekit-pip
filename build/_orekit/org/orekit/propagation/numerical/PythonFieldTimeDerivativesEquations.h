#ifndef org_orekit_propagation_numerical_PythonFieldTimeDerivativesEquations_H
#define org_orekit_propagation_numerical_PythonFieldTimeDerivativesEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
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
    namespace propagation {
      namespace numerical {

        class PythonFieldTimeDerivativesEquations : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addKeplerContribution_072c8635f2164db9,
            mid_addMassDerivative_072c8635f2164db9,
            mid_addNonKeplerianAcceleration_c79ed286e3615fed,
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

          explicit PythonFieldTimeDerivativesEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldTimeDerivativesEquations(const PythonFieldTimeDerivativesEquations& obj) : ::java::lang::Object(obj) {}

          PythonFieldTimeDerivativesEquations();

          void addKeplerContribution(const ::org::hipparchus::CalculusFieldElement &) const;
          void addMassDerivative(const ::org::hipparchus::CalculusFieldElement &) const;
          void addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldTimeDerivativesEquations);
        extern PyTypeObject *PY_TYPE(PythonFieldTimeDerivativesEquations);

        class t_PythonFieldTimeDerivativesEquations {
        public:
          PyObject_HEAD
          PythonFieldTimeDerivativesEquations object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldTimeDerivativesEquations *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldTimeDerivativesEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldTimeDerivativesEquations&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
