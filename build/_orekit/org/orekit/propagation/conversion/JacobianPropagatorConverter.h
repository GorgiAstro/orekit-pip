#ifndef org_orekit_propagation_conversion_JacobianPropagatorConverter_H
#define org_orekit_propagation_conversion_JacobianPropagatorConverter_H

#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class NumericalPropagatorBuilder;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class JacobianPropagatorConverter : public ::org::orekit::propagation::conversion::AbstractPropagatorConverter {
         public:
          enum {
            mid_init$_b3456292d77c8d6c,
            mid_getModel_e31bcbfb9203b3a6,
            mid_getObjectiveFunction_88ca328d89915cf7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit JacobianPropagatorConverter(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          JacobianPropagatorConverter(const JacobianPropagatorConverter& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(obj) {}

          JacobianPropagatorConverter(const ::org::orekit::propagation::conversion::NumericalPropagatorBuilder &, jdouble, jint);
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
        extern PyType_Def PY_TYPE_DEF(JacobianPropagatorConverter);
        extern PyTypeObject *PY_TYPE(JacobianPropagatorConverter);

        class t_JacobianPropagatorConverter {
        public:
          PyObject_HEAD
          JacobianPropagatorConverter object;
          static PyObject *wrap_Object(const JacobianPropagatorConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
