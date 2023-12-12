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
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
      class AdditionalStateProvider;
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
              mid_init$_e40cbcd903d0f619,
              mid_getAdditionalState_2a145999b8c9a41d,
              mid_getMassDepletionDelay_6370f272e5bf9b88,
              mid_getName_3cffd47377eca18a,
              mid_init_0472264ad6f40bc2,
              mid_maneuverTriggered_45bf76e836befe86,
              mid_resetState_2c4cc16b11f79a6c,
              mid_yields_abdf3beb789bbd4e,
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
