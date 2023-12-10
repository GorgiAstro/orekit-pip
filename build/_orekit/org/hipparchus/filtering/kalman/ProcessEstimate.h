#ifndef org_hipparchus_filtering_kalman_ProcessEstimate_H
#define org_hipparchus_filtering_kalman_ProcessEstimate_H

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

        class ProcessEstimate : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6fdc3f317620caee,
            mid_init$_3ae1aa6ea43ccad8,
            mid_getCovariance_7116bbecdd8ceb21,
            mid_getInnovationCovariance_7116bbecdd8ceb21,
            mid_getKalmanGain_7116bbecdd8ceb21,
            mid_getMeasurementJacobian_7116bbecdd8ceb21,
            mid_getState_6d9adf1d5b463928,
            mid_getStateTransitionMatrix_7116bbecdd8ceb21,
            mid_getTime_456d9a2f64d6b28d,
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
