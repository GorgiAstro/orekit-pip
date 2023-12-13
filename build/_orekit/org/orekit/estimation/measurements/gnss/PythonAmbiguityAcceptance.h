#ifndef org_orekit_estimation_measurements_gnss_PythonAmbiguityAcceptance_H
#define org_orekit_estimation_measurements_gnss_PythonAmbiguityAcceptance_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IntegerLeastSquareSolution;
          class AmbiguityAcceptance;
        }
      }
    }
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_accept_77098f4ed257d870,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_numberOfCandidates_55546ef6a647f39b,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
