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
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class TimeSpanMap;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
              mid_addResetter_a16797fae59e88ec,
              mid_addResetter_e53773d2404dc858,
              mid_getFirings_62c7757711639c83,
              mid_init_8e8de2be1664674a,
              mid_init_826b4eda94da4e78,
              mid_isFiring_785ace4124d89120,
              mid_isFiring_89b940ef53c9a82d,
              mid_initializeResetters_826b4eda94da4e78,
              mid_initializeResetters_8e8de2be1664674a,
              mid_notifyResetters_33f4696e4edaa03c,
              mid_notifyResetters_33f1c56ea7775d4e,
              mid_applyResetters_f43130c50e9fafeb,
              mid_applyResetters_25e81e971666cba6,
              mid_isFiringOnInitialState_6501154ab0a356a8,
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
