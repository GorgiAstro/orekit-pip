#ifndef org_hipparchus_filtering_kalman_extended_NonLinearEvolution_H
#define org_hipparchus_filtering_kalman_extended_NonLinearEvolution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
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
              mid_init$_9c28922119d61604,
              mid_getCurrentState_aab4fbf77867daa8,
              mid_getCurrentTime_dff5885c2c873297,
              mid_getMeasurementJacobian_688b496048ff947b,
              mid_getProcessNoiseMatrix_688b496048ff947b,
              mid_getStateTransitionMatrix_688b496048ff947b,
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
