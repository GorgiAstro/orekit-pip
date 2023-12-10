#ifndef org_orekit_propagation_conversion_JacobianPropagatorConverter_H
#define org_orekit_propagation_conversion_JacobianPropagatorConverter_H

#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class NumericalPropagatorBuilder;
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

        class JacobianPropagatorConverter : public ::org::orekit::propagation::conversion::AbstractPropagatorConverter {
         public:
          enum {
            mid_init$_66745156d771e238,
            mid_getObjectiveFunction_aaef55ff59f9c00e,
            mid_getModel_b196da25fd980476,
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
