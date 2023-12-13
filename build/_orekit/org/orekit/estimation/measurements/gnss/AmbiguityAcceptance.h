#ifndef org_orekit_estimation_measurements_gnss_AmbiguityAcceptance_H
#define org_orekit_estimation_measurements_gnss_AmbiguityAcceptance_H

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

          class AmbiguityAcceptance : public ::java::lang::Object {
           public:
            enum {
              mid_accept_77098f4ed257d870,
              mid_numberOfCandidates_55546ef6a647f39b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AmbiguityAcceptance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AmbiguityAcceptance(const AmbiguityAcceptance& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(AmbiguityAcceptance);
          extern PyTypeObject *PY_TYPE(AmbiguityAcceptance);

          class t_AmbiguityAcceptance {
          public:
            PyObject_HEAD
            AmbiguityAcceptance object;
            static PyObject *wrap_Object(const AmbiguityAcceptance&);
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
