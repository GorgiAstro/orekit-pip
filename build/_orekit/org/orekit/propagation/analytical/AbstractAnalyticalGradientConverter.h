#ifndef org_orekit_propagation_analytical_AbstractAnalyticalGradientConverter_H
#define org_orekit_propagation_analytical_AbstractAnalyticalGradientConverter_H

#include "org/orekit/propagation/integration/AbstractGradientConverter.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace analytical {
        class FieldAbstractAnalyticalPropagator;
      }
    }
    namespace utils {
      class ParameterDriversProvider;
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
      namespace analytical {

        class AbstractAnalyticalGradientConverter : public ::org::orekit::propagation::integration::AbstractGradientConverter {
         public:
          enum {
            mid_getPropagator_733af95624ce3e55,
            mid_getState_381b3e011cde018d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractAnalyticalGradientConverter(jobject obj) : ::org::orekit::propagation::integration::AbstractGradientConverter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractAnalyticalGradientConverter(const AbstractAnalyticalGradientConverter& obj) : ::org::orekit::propagation::integration::AbstractGradientConverter(obj) {}

          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator getPropagator(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > &) const;
          ::org::orekit::propagation::FieldSpacecraftState getState() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(AbstractAnalyticalGradientConverter);
        extern PyTypeObject *PY_TYPE(AbstractAnalyticalGradientConverter);

        class t_AbstractAnalyticalGradientConverter {
        public:
          PyObject_HEAD
          AbstractAnalyticalGradientConverter object;
          static PyObject *wrap_Object(const AbstractAnalyticalGradientConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
