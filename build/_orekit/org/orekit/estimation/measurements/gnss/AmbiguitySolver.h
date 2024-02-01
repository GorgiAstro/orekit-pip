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
          class AmbiguityAcceptance;
          class IntegerLeastSquareSolver;
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
              mid_init$_194abbe377979f00,
              mid_fixIntegerAmbiguities_d67dabb42f6c4160,
              mid_getAllAmbiguityDrivers_d751c1a57012b438,
              mid_unFixAmbiguity_680e005705d5f0aa,
              mid_getFreeAmbiguityDrivers_d751c1a57012b438,
              mid_getFreeAmbiguityIndirection_614db482d0c8bf3b,
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
