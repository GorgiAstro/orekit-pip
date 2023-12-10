#ifndef org_hipparchus_filtering_kalman_extended_NonLinearEvolution_H
#define org_hipparchus_filtering_kalman_extended_NonLinearEvolution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
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
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          class NonLinearEvolution : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2232551f282ddbec,
              mid_getCurrentState_6d9adf1d5b463928,
              mid_getCurrentTime_456d9a2f64d6b28d,
              mid_getMeasurementJacobian_7116bbecdd8ceb21,
              mid_getProcessNoiseMatrix_7116bbecdd8ceb21,
              mid_getStateTransitionMatrix_7116bbecdd8ceb21,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NonLinearEvolution(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NonLinearEvolution(const NonLinearEvolution& obj) : ::java::lang::Object(obj) {}

            NonLinearEvolution(jdouble, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &);

            ::org::hipparchus::linear::RealVector getCurrentState() const;
            jdouble getCurrentTime() const;
            ::org::hipparchus::linear::RealMatrix getMeasurementJacobian() const;
            ::org::hipparchus::linear::RealMatrix getProcessNoiseMatrix() const;
            ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {
          extern PyType_Def PY_TYPE_DEF(NonLinearEvolution);
          extern PyTypeObject *PY_TYPE(NonLinearEvolution);

          class t_NonLinearEvolution {
          public:
            PyObject_HEAD
            NonLinearEvolution object;
            static PyObject *wrap_Object(const NonLinearEvolution&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
