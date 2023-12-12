#ifndef org_hipparchus_filtering_kalman_AbstractKalmanFilter_H
#define org_hipparchus_filtering_kalman_AbstractKalmanFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class ProcessEstimate;
        class Measurement;
        class KalmanFilter;
      }
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

        class AbstractKalmanFilter : public ::java::lang::Object {
         public:
          enum {
            mid_getCorrected_55b445719d7de2a7,
            mid_getPredicted_55b445719d7de2a7,
            mid_predict_570ed598f04500be,
            mid_correct_f5fbdb2f00887037,
            mid_computeInnovationCovarianceMatrix_13c4114cb11d13ae,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractKalmanFilter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractKalmanFilter(const AbstractKalmanFilter& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(AbstractKalmanFilter);
        extern PyTypeObject *PY_TYPE(AbstractKalmanFilter);

        class t_AbstractKalmanFilter {
        public:
          PyObject_HEAD
          AbstractKalmanFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractKalmanFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractKalmanFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractKalmanFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
