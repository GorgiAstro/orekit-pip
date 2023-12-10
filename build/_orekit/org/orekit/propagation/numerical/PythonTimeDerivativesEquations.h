#ifndef org_orekit_propagation_numerical_PythonTimeDerivativesEquations_H
#define org_orekit_propagation_numerical_PythonTimeDerivativesEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class TimeDerivativesEquations;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class PythonTimeDerivativesEquations : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addKeplerContribution_17db3a65980d3441,
            mid_addMassDerivative_17db3a65980d3441,
            mid_addNonKeplerianAcceleration_029ff0cbf68ea054,
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

          explicit PythonTimeDerivativesEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTimeDerivativesEquations(const PythonTimeDerivativesEquations& obj) : ::java::lang::Object(obj) {}

          PythonTimeDerivativesEquations();

          void addKeplerContribution(jdouble) const;
          void addMassDerivative(jdouble) const;
          void addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonTimeDerivativesEquations);
        extern PyTypeObject *PY_TYPE(PythonTimeDerivativesEquations);

        class t_PythonTimeDerivativesEquations {
        public:
          PyObject_HEAD
          PythonTimeDerivativesEquations object;
          static PyObject *wrap_Object(const PythonTimeDerivativesEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
