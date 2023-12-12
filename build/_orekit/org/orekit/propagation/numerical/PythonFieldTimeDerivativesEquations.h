#ifndef org_orekit_propagation_numerical_PythonFieldTimeDerivativesEquations_H
#define org_orekit_propagation_numerical_PythonFieldTimeDerivativesEquations_H

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
            mid_init$_0640e6acf969ed28,
            mid_addKeplerContribution_1ee4bed350fde589,
            mid_addMassDerivative_1ee4bed350fde589,
            mid_addNonKeplerianAcceleration_282cea09b82f4134,
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
