#ifndef org_hipparchus_filtering_kalman_extended_ExtendedKalmanFilter_H
#define org_hipparchus_filtering_kalman_extended_ExtendedKalmanFilter_H

#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class Measurement;
        namespace extended {
          class NonLinearProcess;
        }
        class ProcessEstimate;
      }
    }
    namespace linear {
      class MatrixDecomposer;
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
        namespace extended {

          class ExtendedKalmanFilter : public ::org::hipparchus::filtering::kalman::AbstractKalmanFilter {
           public:
            enum {
              mid_init$_a9dff1e6aab00742,
              mid_estimationStep_8438f0b1b3460266,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExtendedKalmanFilter(jobject obj) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ExtendedKalmanFilter(const ExtendedKalmanFilter& obj) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(obj) {}

            ExtendedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer &, const ::org::hipparchus::filtering::kalman::extended::NonLinearProcess &, const ::org::hipparchus::filtering::kalman::ProcessEstimate &);

            ::org::hipparchus::filtering::kalman::ProcessEstimate estimationStep(const ::org::hipparchus::filtering::kalman::Measurement &) const;
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
          extern PyType_Def PY_TYPE_DEF(ExtendedKalmanFilter);
          extern PyTypeObject *PY_TYPE(ExtendedKalmanFilter);

          class t_ExtendedKalmanFilter {
          public:
            PyObject_HEAD
            ExtendedKalmanFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ExtendedKalmanFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ExtendedKalmanFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ExtendedKalmanFilter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
