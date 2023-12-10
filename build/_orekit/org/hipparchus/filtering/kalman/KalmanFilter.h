#ifndef org_hipparchus_filtering_kalman_KalmanFilter_H
#define org_hipparchus_filtering_kalman_KalmanFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class Measurement;
        class ProcessEstimate;
      }
    }
    namespace exception {
      class MathRuntimeException;
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

        class KalmanFilter : public ::java::lang::Object {
         public:
          enum {
            mid_estimationStep_01cd341bc5eb698c,
            mid_getCorrected_3d891496bfc9091e,
            mid_getPredicted_3d891496bfc9091e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanFilter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanFilter(const KalmanFilter& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate estimationStep(const ::org::hipparchus::filtering::kalman::Measurement &) const;
          ::org::hipparchus::filtering::kalman::ProcessEstimate getCorrected() const;
          ::org::hipparchus::filtering::kalman::ProcessEstimate getPredicted() const;
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
        extern PyType_Def PY_TYPE_DEF(KalmanFilter);
        extern PyTypeObject *PY_TYPE(KalmanFilter);

        class t_KalmanFilter {
        public:
          PyObject_HEAD
          KalmanFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_KalmanFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const KalmanFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const KalmanFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
