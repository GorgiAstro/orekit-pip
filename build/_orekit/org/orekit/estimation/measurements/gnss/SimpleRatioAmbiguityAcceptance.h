#ifndef org_orekit_estimation_measurements_gnss_SimpleRatioAmbiguityAcceptance_H
#define org_orekit_estimation_measurements_gnss_SimpleRatioAmbiguityAcceptance_H

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
              mid_init$_1ad26e8c8c0cd65b,
              mid_accept_5ee686c7fe5c8130,
              mid_numberOfCandidates_d6ab429752e7c267,
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
