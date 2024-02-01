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
    namespace propagation {
      class FieldSpacecraftState;
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
      namespace integration {

        class AbstractGradientConverter : public ::java::lang::Object {
         public:
          enum {
            mid_getFreeStateParameters_d6ab429752e7c267,
            mid_getParameters_5f9ce9db64bfd55a,
            mid_getParametersAtStateDate_5f9ce9db64bfd55a,
            mid_getState_33597c46c7186f5d,
            mid_initStates_8062511934471166,
            mid_buildBasicGradientSpacecraftState_3c2a8a2dee577dce,
            mid_extend_ace76047bba91127,
            mid_extend_b792b7e3fa72c7c6,
            mid_extend_4e682d3d3cf0cde9,
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
