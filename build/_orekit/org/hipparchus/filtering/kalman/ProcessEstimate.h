#ifndef org_hipparchus_filtering_kalman_ProcessEstimate_H
#define org_hipparchus_filtering_kalman_ProcessEstimate_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
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
            mid_init$_66ea8b17e57de689,
            mid_init$_18624603e9d5cc1c,
            mid_getCovariance_b2eebabce70526d8,
            mid_getInnovationCovariance_b2eebabce70526d8,
            mid_getKalmanGain_b2eebabce70526d8,
            mid_getMeasurementJacobian_b2eebabce70526d8,
            mid_getState_92d7e8d8d3f1dfcf,
            mid_getStateTransitionMatrix_b2eebabce70526d8,
            mid_getTime_9981f74b2d109da6,
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
