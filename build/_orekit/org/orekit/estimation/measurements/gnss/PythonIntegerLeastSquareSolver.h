#ifndef org_orekit_estimation_measurements_gnss_PythonIntegerLeastSquareSolver_H
#define org_orekit_estimation_measurements_gnss_PythonIntegerLeastSquareSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IntegerLeastSquareSolver;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonIntegerLeastSquareSolver : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
              mid_solveILS_78e4e9f588c2bfe0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonIntegerLeastSquareSolver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonIntegerLeastSquareSolver(const PythonIntegerLeastSquareSolver& obj) : ::java::lang::Object(obj) {}

            PythonIntegerLeastSquareSolver();

            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonIntegerLeastSquareSolver);
          extern PyTypeObject *PY_TYPE(PythonIntegerLeastSquareSolver);

          class t_PythonIntegerLeastSquareSolver {
          public:
            PyObject_HEAD
            PythonIntegerLeastSquareSolver object;
            static PyObject *wrap_Object(const PythonIntegerLeastSquareSolver&);
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
