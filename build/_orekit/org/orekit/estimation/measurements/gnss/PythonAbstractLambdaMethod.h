#ifndef org_orekit_estimation_measurements_gnss_PythonAbstractLambdaMethod_H
#define org_orekit_estimation_measurements_gnss_PythonAbstractLambdaMethod_H

#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PythonAbstractLambdaMethod : public ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_discreteSearch_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_inverseDecomposition_0640e6acf969ed28,
              mid_ltdlDecomposition_0640e6acf969ed28,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_reduction_0640e6acf969ed28,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractLambdaMethod(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractLambdaMethod(const PythonAbstractLambdaMethod& obj) : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(obj) {}

            PythonAbstractLambdaMethod();

            void discreteSearch() const;
            void finalize() const;
            void inverseDecomposition() const;
            void ltdlDecomposition() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void reduction() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractLambdaMethod);
          extern PyTypeObject *PY_TYPE(PythonAbstractLambdaMethod);

          class t_PythonAbstractLambdaMethod {
          public:
            PyObject_HEAD
            PythonAbstractLambdaMethod object;
            static PyObject *wrap_Object(const PythonAbstractLambdaMethod&);
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
