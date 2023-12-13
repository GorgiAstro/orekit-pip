#ifndef org_orekit_forces_maneuvers_trigger_AbstractManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_AbstractManeuverTriggers_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class FieldManeuverTriggersResetter;
          class ManeuverTriggersResetter;
          class ManeuverTriggers;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeSpanMap;
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
    class Boolean;
    class Class;
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
              mid_addResetter_88f6b3eca6f2ace7,
              mid_addResetter_7abb1f925b31f873,
              mid_getFirings_2f46b86c016957a0,
              mid_init_2d7f9a496c7e9781,
              mid_init_96d019f392abf918,
              mid_isFiring_430b36eccbd3b265,
              mid_isFiring_d98e2ca7f972ae8c,
              mid_notifyResetters_1c47c97cdbc7e206,
              mid_notifyResetters_871885b409df9d57,
              mid_isFiringOnInitialState_4ef3ef34329e6316,
              mid_initializeResetters_96d019f392abf918,
              mid_initializeResetters_2d7f9a496c7e9781,
              mid_applyResetters_c3c52b1257139045,
              mid_applyResetters_370b1acde6244b7e,
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
