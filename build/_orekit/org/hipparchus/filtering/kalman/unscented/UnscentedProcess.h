#ifndef org_hipparchus_filtering_kalman_unscented_UnscentedProcess_H
#define org_hipparchus_filtering_kalman_unscented_UnscentedProcess_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class Measurement;
        namespace unscented {
          class UnscentedEvolution;
        }
      }
    }
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
        namespace unscented {

          class UnscentedProcess : public ::java::lang::Object {
           public:
            enum {
              mid_getEvolution_c252237192c59b9a,
              mid_getInnovation_fcdbd6e45b6bfb9e,
              mid_getPredictedMeasurements_36c4488e207c1499,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnscentedProcess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnscentedProcess(const UnscentedProcess& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution getEvolution(jdouble, const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::hipparchus::filtering::kalman::Measurement &) const;
            ::org::hipparchus::linear::RealVector getInnovation(const ::org::hipparchus::filtering::kalman::Measurement &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &) const;
            JArray< ::org::hipparchus::linear::RealVector > getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::hipparchus::filtering::kalman::Measurement &) const;
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
        namespace unscented {
          extern PyType_Def PY_TYPE_DEF(UnscentedProcess);
          extern PyTypeObject *PY_TYPE(UnscentedProcess);

          class t_UnscentedProcess {
          public:
            PyObject_HEAD
            UnscentedProcess object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_UnscentedProcess *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const UnscentedProcess&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const UnscentedProcess&, PyTypeObject *);
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
