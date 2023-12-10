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
            mid_getFreeStateParameters_f2f64475e4580546,
            mid_getParameters_830639c0a621d218,
            mid_getParametersAtStateDate_830639c0a621d218,
            mid_getState_a422d975eec2f4fb,
            mid_initStates_52154b94d63e10ed,
            mid_extend_209b6960e4c6fdfa,
            mid_extend_a1fdce8979c90dfc,
            mid_extend_dfa45db96c83f3d1,
            mid_buildBasicGradientSpacecraftState_ae21fccff31b795f,
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
