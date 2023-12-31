#ifndef org_orekit_estimation_measurements_gnss_SimpleRatioAmbiguityAcceptance_H
#define org_orekit_estimation_measurements_gnss_SimpleRatioAmbiguityAcceptance_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
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

          class SimpleRatioAmbiguityAcceptance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8ba9fe7a847cecad,
              mid_accept_77098f4ed257d870,
              mid_numberOfCandidates_55546ef6a647f39b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleRatioAmbiguityAcceptance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleRatioAmbiguityAcceptance(const SimpleRatioAmbiguityAcceptance& obj) : ::java::lang::Object(obj) {}

            SimpleRatioAmbiguityAcceptance(jdouble);

            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > &) const;
            jint numberOfCandidates() const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleRatioAmbiguityAcceptance);
          extern PyTypeObject *PY_TYPE(SimpleRatioAmbiguityAcceptance);

          class t_SimpleRatioAmbiguityAcceptance {
          public:
            PyObject_HEAD
            SimpleRatioAmbiguityAcceptance object;
            static PyObject *wrap_Object(const SimpleRatioAmbiguityAcceptance&);
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
