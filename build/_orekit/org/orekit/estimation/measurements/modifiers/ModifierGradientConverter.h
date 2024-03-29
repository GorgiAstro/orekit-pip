#ifndef org_orekit_estimation_measurements_modifiers_ModifierGradientConverter_H
#define org_orekit_estimation_measurements_modifiers_ModifierGradientConverter_H

#include "org/orekit/propagation/integration/AbstractGradientConverter.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class ModifierGradientConverter : public ::org::orekit::propagation::integration::AbstractGradientConverter {
           public:
            enum {
              mid_init$_15fc1578d17e78a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ModifierGradientConverter(jobject obj) : ::org::orekit::propagation::integration::AbstractGradientConverter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ModifierGradientConverter(const ModifierGradientConverter& obj) : ::org::orekit::propagation::integration::AbstractGradientConverter(obj) {}

            ModifierGradientConverter(const ::org::orekit::propagation::SpacecraftState &, jint, const ::org::orekit::attitudes::AttitudeProvider &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(ModifierGradientConverter);
          extern PyTypeObject *PY_TYPE(ModifierGradientConverter);

          class t_ModifierGradientConverter {
          public:
            PyObject_HEAD
            ModifierGradientConverter object;
            static PyObject *wrap_Object(const ModifierGradientConverter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
