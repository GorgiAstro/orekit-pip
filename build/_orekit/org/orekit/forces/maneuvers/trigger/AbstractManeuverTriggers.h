#ifndef org_orekit_forces_maneuvers_trigger_AbstractManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_AbstractManeuverTriggers_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
    }
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class ManeuverTriggersResetter;
          class FieldManeuverTriggersResetter;
          class ManeuverTriggers;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class Boolean;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class AbstractManeuverTriggers : public ::java::lang::Object {
           public:
            enum {
              mid_addResetter_5392838e44623505,
              mid_addResetter_8b21453ce137761f,
              mid_getFirings_d11c7ec0e313e33d,
              mid_init_14deaae988292d42,
              mid_init_357211ab77703f3f,
              mid_isFiring_8083fb6b6fb5ee99,
              mid_isFiring_10e417873abbceb0,
              mid_applyResetters_ed3fe207e6fde26f,
              mid_applyResetters_59bc90ab93a43079,
              mid_notifyResetters_b69b5541e48d21c0,
              mid_notifyResetters_e90aea08a7a0ab5e,
              mid_initializeResetters_357211ab77703f3f,
              mid_initializeResetters_14deaae988292d42,
              mid_isFiringOnInitialState_145801f71fbbc869,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractManeuverTriggers(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractManeuverTriggers(const AbstractManeuverTriggers& obj) : ::java::lang::Object(obj) {}

            void addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter &) const;
            void addResetter(const ::org::hipparchus::Field &, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter &) const;
            ::org::orekit::utils::TimeSpanMap getFirings() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            jboolean isFiring(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &) const;
            jboolean isFiring(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        namespace trigger {
          extern PyType_Def PY_TYPE_DEF(AbstractManeuverTriggers);
          extern PyTypeObject *PY_TYPE(AbstractManeuverTriggers);

          class t_AbstractManeuverTriggers {
          public:
            PyObject_HEAD
            AbstractManeuverTriggers object;
            static PyObject *wrap_Object(const AbstractManeuverTriggers&);
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
