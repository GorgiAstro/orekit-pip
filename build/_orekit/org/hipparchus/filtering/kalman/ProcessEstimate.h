#ifndef org_hipparchus_filtering_kalman_ProcessEstimate_H
#define org_hipparchus_filtering_kalman_ProcessEstimate_H

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

        class ProcessEstimate : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d905195db03d249f,
            mid_init$_b5a6dee5d269e523,
            mid_getCovariance_688b496048ff947b,
            mid_getInnovationCovariance_688b496048ff947b,
            mid_getKalmanGain_688b496048ff947b,
            mid_getMeasurementJacobian_688b496048ff947b,
            mid_getState_aab4fbf77867daa8,
            mid_getStateTransitionMatrix_688b496048ff947b,
            mid_getTime_dff5885c2c873297,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ProcessEstimate(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ProcessEstimate(const ProcessEstimate& obj) : ::java::lang::Object(obj) {}

          ProcessEstimate(jdouble, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &);
          ProcessEstimate(jdouble, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &);

          ::org::hipparchus::linear::RealMatrix getCovariance() const;
          ::org::hipparchus::linear::RealMatrix getInnovationCovariance() const;
          ::org::hipparchus::linear::RealMatrix getKalmanGain() const;
          ::org::hipparchus::linear::RealMatrix getMeasurementJacobian() const;
          ::org::hipparchus::linear::RealVector getState() const;
          ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix() const;
          jdouble getTime() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        extern PyType_Def PY_TYPE_DEF(ProcessEstimate);
        extern PyTypeObject *PY_TYPE(ProcessEstimate);

        class t_ProcessEstimate {
        public:
          PyObject_HEAD
          ProcessEstimate object;
          static PyObject *wrap_Object(const ProcessEstimate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
