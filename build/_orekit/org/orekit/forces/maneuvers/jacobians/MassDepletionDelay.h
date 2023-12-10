#ifndef org_orekit_forces_maneuvers_jacobians_MassDepletionDelay_H
#define org_orekit_forces_maneuvers_jacobians_MassDepletionDelay_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        class Maneuver;
      }
    }
    namespace propagation {
      namespace integration {
        class CombinedDerivatives;
        class AdditionalDerivativesProvider;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          class MassDepletionDelay : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6a73343958e74b70,
              mid_combinedDerivatives_32bde69742c0babb,
              mid_getDimension_f2f64475e4580546,
              mid_getName_0090f7797e403f43,
              mid_init_3d13474d79f5e7bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MassDepletionDelay(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MassDepletionDelay(const MassDepletionDelay& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *PREFIX$;

            MassDepletionDelay(const ::java::lang::String &, jboolean, const ::org::orekit::forces::maneuvers::Maneuver &);

            ::org::orekit::propagation::integration::CombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::SpacecraftState &) const;
            jint getDimension() const;
            ::java::lang::String getName() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {
          extern PyType_Def PY_TYPE_DEF(MassDepletionDelay);
          extern PyTypeObject *PY_TYPE(MassDepletionDelay);

          class t_MassDepletionDelay {
          public:
            PyObject_HEAD
            MassDepletionDelay object;
            static PyObject *wrap_Object(const MassDepletionDelay&);
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
