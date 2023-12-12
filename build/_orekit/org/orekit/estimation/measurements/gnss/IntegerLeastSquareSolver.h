#ifndef org_orekit_estimation_measurements_gnss_IntegerLeastSquareSolver_H
#define org_orekit_estimation_measurements_gnss_IntegerLeastSquareSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IntegerLeastSquareSolution;
        }
      }
    }
  }
  namespace hipparchus {
    namespace linear {
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
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class IntegerLeastSquareSolver : public ::java::lang::Object {
           public:
            enum {
              mid_solveILS_1580c6ee6b7d56ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntegerLeastSquareSolver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntegerLeastSquareSolver(const IntegerLeastSquareSolver& obj) : ::java::lang::Object(obj) {}

            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > solveILS(jint, const JArray< jdouble > &, const JArray< jint > &, const ::org::hipparchus::linear::RealMatrix &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntegerLeastSquareSolver);
          extern PyTypeObject *PY_TYPE(IntegerLeastSquareSolver);

          class t_IntegerLeastSquareSolver {
          public:
            PyObject_HEAD
            IntegerLeastSquareSolver object;
            static PyObject *wrap_Object(const IntegerLeastSquareSolver&);
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
