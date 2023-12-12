#ifndef org_orekit_estimation_measurements_gnss_AmbiguitySolver_H
#define org_orekit_estimation_measurements_gnss_AmbiguitySolver_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IntegerLeastSquareSolver;
          class AmbiguityAcceptance;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class AmbiguitySolver : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8662fd7590d13547,
              mid_fixIntegerAmbiguities_c7eebcd223da271c,
              mid_getAllAmbiguityDrivers_0d9551367f7ecdef,
              mid_unFixAmbiguity_558cfe74a49f563f,
              mid_getFreeAmbiguityDrivers_0d9551367f7ecdef,
              mid_getFreeAmbiguityIndirection_9965dae7fb08a013,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AmbiguitySolver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AmbiguitySolver(const AmbiguitySolver& obj) : ::java::lang::Object(obj) {}

            AmbiguitySolver(const ::java::util::List &, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver &, const ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance &);

            ::java::util::List fixIntegerAmbiguities(jint, const ::java::util::List &, const ::org::hipparchus::linear::RealMatrix &) const;
            ::java::util::List getAllAmbiguityDrivers() const;
            void unFixAmbiguity(const ::org::orekit::utils::ParameterDriver &) const;
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
          extern PyType_Def PY_TYPE_DEF(AmbiguitySolver);
          extern PyTypeObject *PY_TYPE(AmbiguitySolver);

          class t_AmbiguitySolver {
          public:
            PyObject_HEAD
            AmbiguitySolver object;
            static PyObject *wrap_Object(const AmbiguitySolver&);
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
