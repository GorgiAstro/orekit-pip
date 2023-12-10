#ifndef org_orekit_propagation_analytical_AbstractAnalyticalGradientConverter_H
#define org_orekit_propagation_analytical_AbstractAnalyticalGradientConverter_H

#include "org/orekit/propagation/integration/AbstractGradientConverter.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
    }
    namespace propagation {
      namespace analytical {
        class FieldAbstractAnalyticalPropagator;
      }
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
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
      namespace analytical {

        class AbstractAnalyticalGradientConverter : public ::org::orekit::propagation::integration::AbstractGradientConverter {
         public:
          enum {
            mid_getPropagator_bfdeffa87b393212,
            mid_getState_02cea343d9f71933,
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
