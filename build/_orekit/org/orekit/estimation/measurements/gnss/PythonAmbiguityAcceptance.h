#ifndef org_orekit_estimation_measurements_gnss_PythonAmbiguityAcceptance_H
#define org_orekit_estimation_measurements_gnss_PythonAmbiguityAcceptance_H

#include "java/lang/Object.h"

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

          class PythonAmbiguityAcceptance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_accept_9b257df6a366a6ba,
              mid_finalize_0fa09c18fee449d5,
              mid_numberOfCandidates_570ce0828f81a2c1,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
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
