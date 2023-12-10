#ifndef org_orekit_estimation_measurements_gnss_PythonAmbiguityAcceptance_H
#define org_orekit_estimation_measurements_gnss_PythonAmbiguityAcceptance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class AmbiguityAcceptance;
          class IntegerLeastSquareSolution;
        }
      }
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

          class PythonAmbiguityAcceptance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_accept_20e068095c0bf963,
              mid_finalize_7ae3461a92a43152,
              mid_numberOfCandidates_f2f64475e4580546,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAmbiguityAcceptance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAmbiguityAcceptance(const PythonAmbiguityAcceptance& obj) : ::java::lang::Object(obj) {}

            PythonAmbiguityAcceptance();

            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > &) const;
            void finalize() const;
            jint numberOfCandidates() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAmbiguityAcceptance);
          extern PyTypeObject *PY_TYPE(PythonAmbiguityAcceptance);

          class t_PythonAmbiguityAcceptance {
          public:
            PyObject_HEAD
            PythonAmbiguityAcceptance object;
            static PyObject *wrap_Object(const PythonAmbiguityAcceptance&);
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
