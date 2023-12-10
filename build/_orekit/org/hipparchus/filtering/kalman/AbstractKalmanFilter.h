#ifndef org_hipparchus_filtering_kalman_AbstractKalmanFilter_H
#define org_hipparchus_filtering_kalman_AbstractKalmanFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class Measurement;
        class KalmanFilter;
        class ProcessEstimate;
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
            mid_getCorrected_c93ddc26f3b3eef4,
            mid_getPredicted_c93ddc26f3b3eef4,
            mid_predict_982284b8d8a1f193,
            mid_correct_45b900b87520adad,
            mid_computeInnovationCovarianceMatrix_ef6b3f5b68ab82a9,
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
