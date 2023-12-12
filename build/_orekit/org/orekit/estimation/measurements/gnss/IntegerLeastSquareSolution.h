#ifndef org_orekit_estimation_measurements_gnss_IntegerLeastSquareSolution_H
#define org_orekit_estimation_measurements_gnss_IntegerLeastSquareSolution_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class IntegerLeastSquareSolution : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c71cb41dee20c1a0,
              mid_getSolution_0a2c3435f5c6a530,
              mid_getSquaredDistance_557b8123390d8d0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntegerLeastSquareSolution(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntegerLeastSquareSolution(const IntegerLeastSquareSolution& obj) : ::java::lang::Object(obj) {}

            IntegerLeastSquareSolution(const JArray< jlong > &, jdouble);

            JArray< jlong > getSolution() const;
            jdouble getSquaredDistance() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(IntegerLeastSquareSolution);
          extern PyTypeObject *PY_TYPE(IntegerLeastSquareSolution);

          class t_IntegerLeastSquareSolution {
          public:
            PyObject_HEAD
            IntegerLeastSquareSolution object;
            static PyObject *wrap_Object(const IntegerLeastSquareSolution&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
