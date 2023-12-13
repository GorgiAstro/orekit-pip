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
              mid_init$_3356cf5f248c9aa7,
              mid_fixIntegerAmbiguities_28ffeedd0599d7ff,
              mid_getAllAmbiguityDrivers_e62d3bb06d56d7e3,
              mid_unFixAmbiguity_5791d10af4720a8e,
              mid_getFreeAmbiguityDrivers_e62d3bb06d56d7e3,
              mid_getFreeAmbiguityIndirection_e94c5cd44e918936,
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
