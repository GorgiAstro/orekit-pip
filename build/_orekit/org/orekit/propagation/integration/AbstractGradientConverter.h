#ifndef org_orekit_propagation_integration_AbstractGradientConverter_H
#define org_orekit_propagation_integration_AbstractGradientConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriversProvider;
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
      namespace integration {

        class AbstractGradientConverter : public ::java::lang::Object {
         public:
          enum {
            mid_getFreeStateParameters_570ce0828f81a2c1,
            mid_getParameters_ae4ed06808ba0600,
            mid_getParametersAtStateDate_ae4ed06808ba0600,
            mid_getState_61ad2f60830fa51e,
            mid_extend_7b4bd5ccbcf5cc53,
            mid_extend_a54ef65bb7e1aa32,
            mid_extend_b582dc064d70ed6d,
            mid_initStates_1463d3d0d52f94dd,
            mid_buildBasicGradientSpacecraftState_18ad1df060901e68,
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
