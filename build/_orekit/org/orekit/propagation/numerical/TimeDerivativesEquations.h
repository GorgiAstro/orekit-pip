#ifndef org_orekit_propagation_numerical_TimeDerivativesEquations_H
#define org_orekit_propagation_numerical_TimeDerivativesEquations_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class TimeDerivativesEquations : public ::java::lang::Object {
         public:
          enum {
            mid_addKeplerContribution_10f281d777284cea,
            mid_addMassDerivative_10f281d777284cea,
            mid_addNonKeplerianAcceleration_2810d2bec90e7b1c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeDerivativesEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeDerivativesEquations(const TimeDerivativesEquations& obj) : ::java::lang::Object(obj) {}

          void addKeplerContribution(jdouble) const;
          void addMassDerivative(jdouble) const;
          void addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
        extern PyType_Def PY_TYPE_DEF(TimeDerivativesEquations);
        extern PyTypeObject *PY_TYPE(TimeDerivativesEquations);

        class t_TimeDerivativesEquations {
        public:
          PyObject_HEAD
          TimeDerivativesEquations object;
          static PyObject *wrap_Object(const TimeDerivativesEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
