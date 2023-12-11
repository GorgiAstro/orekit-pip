#ifndef org_orekit_propagation_numerical_PythonTimeDerivativesEquations_H
#define org_orekit_propagation_numerical_PythonTimeDerivativesEquations_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class PythonTimeDerivativesEquations : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_addKeplerContribution_10f281d777284cea,
            mid_addMassDerivative_10f281d777284cea,
            mid_addNonKeplerianAcceleration_2810d2bec90e7b1c,
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
