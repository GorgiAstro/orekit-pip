#ifndef org_orekit_forces_maneuvers_trigger_AbstractManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_AbstractManeuverTriggers_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class FieldManeuverTriggersResetter;
          class ManeuverTriggers;
          class ManeuverTriggersResetter;
        }
      }
    }
    namespace utils {
      class TimeSpanMap;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
              mid_addResetter_6c2e9e35ba95043d,
              mid_addResetter_17259cc5ef51ebf7,
              mid_getFirings_d26bd874ee319049,
              mid_init_811e49dad2467b67,
              mid_init_0472264ad6f40bc2,
              mid_isFiring_cf913265ec3c3fe7,
              mid_isFiring_7ccb736f2a8bfc30,
              mid_initializeResetters_0472264ad6f40bc2,
              mid_initializeResetters_811e49dad2467b67,
              mid_notifyResetters_585702d5a402c590,
              mid_notifyResetters_45bf76e836befe86,
              mid_applyResetters_2c4cc16b11f79a6c,
              mid_applyResetters_4f12774dd382c6f4,
              mid_isFiringOnInitialState_1e4c79a00429445e,
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
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
