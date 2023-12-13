#ifndef org_orekit_forces_maneuvers_jacobians_TriggerDate_H
#define org_orekit_forces_maneuvers_jacobians_TriggerDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      class SpacecraftState;
    }
    namespace forces {
      namespace maneuvers {
        class Maneuver;
        namespace trigger {
          class ManeuverTriggersResetter;
        }
        namespace jacobians {
          class MassDepletionDelay;
        }
      }
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
              mid_init$_5e483594d266cbbc,
              mid_getAdditionalState_f227e5f48720b798,
              mid_getMassDepletionDelay_317d678e51746add,
              mid_getName_1c1fa1e935d6cdcf,
              mid_init_2d7f9a496c7e9781,
              mid_maneuverTriggered_1c47c97cdbc7e206,
              mid_resetState_c3c52b1257139045,
              mid_yields_97df9017614a1945,
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
