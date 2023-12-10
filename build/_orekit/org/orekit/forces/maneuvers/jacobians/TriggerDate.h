#ifndef org_orekit_forces_maneuvers_jacobians_TriggerDate_H
#define org_orekit_forces_maneuvers_jacobians_TriggerDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        class Maneuver;
        namespace jacobians {
          class MassDepletionDelay;
        }
        namespace trigger {
          class ManeuverTriggersResetter;
        }
      }
    }
    namespace propagation {
      class AdditionalStateProvider;
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

          class TriggerDate : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c409bb518fc50025,
              mid_getAdditionalState_137d7db4f3f987f7,
              mid_getMassDepletionDelay_e56d2bcda283b2a0,
              mid_getName_0090f7797e403f43,
              mid_init_3d13474d79f5e7bc,
              mid_maneuverTriggered_9658cf3eaef14ef5,
              mid_resetState_81fc6fb6078d2aa7,
              mid_yields_97634138963fb58a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TriggerDate(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TriggerDate(const TriggerDate& obj) : ::java::lang::Object(obj) {}

            TriggerDate(const ::java::lang::String &, const ::java::lang::String &, jboolean, const ::org::orekit::forces::maneuvers::Maneuver &, jdouble);

            JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay getMassDepletionDelay() const;
            ::java::lang::String getName() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
            void maneuverTriggered(const ::org::orekit::propagation::SpacecraftState &, jboolean) const;
            ::org::orekit::propagation::SpacecraftState resetState(const ::org::orekit::propagation::SpacecraftState &) const;
            jboolean yields(const ::org::orekit::propagation::SpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(TriggerDate);
          extern PyTypeObject *PY_TYPE(TriggerDate);

          class t_TriggerDate {
          public:
            PyObject_HEAD
            TriggerDate object;
            static PyObject *wrap_Object(const TriggerDate&);
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
