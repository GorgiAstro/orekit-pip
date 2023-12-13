#ifndef org_orekit_propagation_conversion_FiniteDifferencePropagatorConverter_H
#define org_orekit_propagation_conversion_FiniteDifferencePropagatorConverter_H

#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
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
    namespace propagation {
      namespace conversion {

        class FiniteDifferencePropagatorConverter : public ::org::orekit::propagation::conversion::AbstractPropagatorConverter {
         public:
          enum {
            mid_init$_91f1a39ce0677121,
            mid_getModel_6a20d4ddc607b9bb,
            mid_getObjectiveFunction_72c2cddd79f92b83,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FiniteDifferencePropagatorConverter(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FiniteDifferencePropagatorConverter(const FiniteDifferencePropagatorConverter& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(obj) {}

          FiniteDifferencePropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder &, jdouble, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(FiniteDifferencePropagatorConverter);
        extern PyTypeObject *PY_TYPE(FiniteDifferencePropagatorConverter);

        class t_FiniteDifferencePropagatorConverter {
        public:
          PyObject_HEAD
          FiniteDifferencePropagatorConverter object;
          static PyObject *wrap_Object(const FiniteDifferencePropagatorConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
