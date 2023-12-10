#ifndef org_orekit_estimation_measurements_gnss_AmbiguitySolver_H
#define org_orekit_estimation_measurements_gnss_AmbiguitySolver_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class List;
  }
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

          class AmbiguitySolver : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a6dd32ef95df4eea,
              mid_fixIntegerAmbiguities_c271d207a951992f,
              mid_getAllAmbiguityDrivers_2afa36052df4765d,
              mid_unFixAmbiguity_01a5c4b8230d6f04,
              mid_getFreeAmbiguityDrivers_2afa36052df4765d,
              mid_getFreeAmbiguityIndirection_ec0d400b55e6e7cc,
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
