#ifndef org_hipparchus_filtering_kalman_extended_NonLinearProcess_H
#define org_hipparchus_filtering_kalman_extended_NonLinearProcess_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace filtering {
      namespace kalman {
        class Measurement;
        namespace extended {
          class NonLinearEvolution;
        }
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
        namespace extended {

          class NonLinearProcess : public ::java::lang::Object {
           public:
            enum {
              mid_getEvolution_45951e8f5aa99d9f,
              mid_getInnovation_e7c98fc90efeccad,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NonLinearProcess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NonLinearProcess(const NonLinearProcess& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution getEvolution(jdouble, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::filtering::kalman::Measurement &) const;
            ::org::hipparchus::linear::RealVector getInnovation(const ::org::hipparchus::filtering::kalman::Measurement &, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution &, const ::org::hipparchus::linear::RealMatrix &) const;
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
          extern PyType_Def PY_TYPE_DEF(NonLinearProcess);
          extern PyTypeObject *PY_TYPE(NonLinearProcess);

          class t_NonLinearProcess {
          public:
            PyObject_HEAD
            NonLinearProcess object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NonLinearProcess *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NonLinearProcess&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NonLinearProcess&, PyTypeObject *);
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
