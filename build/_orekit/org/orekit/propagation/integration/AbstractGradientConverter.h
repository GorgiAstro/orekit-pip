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
            mid_getFreeStateParameters_55546ef6a647f39b,
            mid_getParameters_e5c4a19744e8dd4a,
            mid_getParametersAtStateDate_e5c4a19744e8dd4a,
            mid_getState_93902f3744afc0c3,
            mid_extend_9b74b13fc2b0b45d,
            mid_extend_3facea1cbc778867,
            mid_extend_40f2f08546258c9b,
            mid_initStates_54d9efbf99822980,
            mid_buildBasicGradientSpacecraftState_29c62c1e3d056b0f,
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
