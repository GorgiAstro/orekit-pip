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
            mid_init$_fd385d0a9ef22a8e,
            mid_init$_c48eea702e0cbbc7,
            mid_getCovariance_70a207fcbc031df2,
            mid_getInnovationCovariance_70a207fcbc031df2,
            mid_getKalmanGain_70a207fcbc031df2,
            mid_getMeasurementJacobian_70a207fcbc031df2,
            mid_getState_75d50d73180655b4,
            mid_getStateTransitionMatrix_70a207fcbc031df2,
            mid_getTime_557b8123390d8d0c,
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
