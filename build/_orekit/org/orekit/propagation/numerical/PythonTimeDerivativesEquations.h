#ifndef org_orekit_propagation_numerical_PythonTimeDerivativesEquations_H
#define org_orekit_propagation_numerical_PythonTimeDerivativesEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class TimeDerivativesEquations;
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
            mid_init$_ff7cb6c242604316,
            mid_addKeplerContribution_1ad26e8c8c0cd65b,
            mid_addMassDerivative_1ad26e8c8c0cd65b,
            mid_addNonKeplerianAcceleration_30f8886dfb88a63c,
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
