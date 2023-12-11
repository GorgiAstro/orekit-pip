#ifndef org_orekit_propagation_integration_AbstractGradientConverter_H
#define org_orekit_propagation_integration_AbstractGradientConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
    }
    namespace propagation {
      class FieldSpacecraftState;
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
      namespace integration {

        class AbstractGradientConverter : public ::java::lang::Object {
         public:
          enum {
            mid_getFreeStateParameters_412668abc8d889e9,
            mid_getParameters_6c8ef9df73e7294f,
            mid_getParametersAtStateDate_6c8ef9df73e7294f,
            mid_getState_655097255f6fdb75,
            mid_initStates_b66c84a5711243d5,
            mid_buildBasicGradientSpacecraftState_21bc575738c6fbb6,
            mid_extend_ba3b4c80c8c4abc1,
            mid_extend_a82b19a24d5b726e,
            mid_extend_beae67aa5f292d28,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractGradientConverter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractGradientConverter(const AbstractGradientConverter& obj) : ::java::lang::Object(obj) {}

          jint getFreeStateParameters() const;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > getParameters(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::utils::ParameterDriversProvider &) const;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > getParametersAtStateDate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::utils::ParameterDriversProvider &) const;
          ::org::orekit::propagation::FieldSpacecraftState getState(const ::org::orekit::utils::ParameterDriversProvider &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(AbstractGradientConverter);
        extern PyTypeObject *PY_TYPE(AbstractGradientConverter);

        class t_AbstractGradientConverter {
        public:
          PyObject_HEAD
          AbstractGradientConverter object;
          static PyObject *wrap_Object(const AbstractGradientConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
