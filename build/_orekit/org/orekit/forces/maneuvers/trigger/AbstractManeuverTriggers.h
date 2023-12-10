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
    namespace utils {
      class TimeSpanMap;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
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
              mid_addResetter_c5c7f3f3d4c4bba2,
              mid_addResetter_17ab38b8d22d6651,
              mid_getFirings_afbf756dd3c251fe,
              mid_init_acdd8180a5dc1a8d,
              mid_init_3d13474d79f5e7bc,
              mid_isFiring_b230552293273e68,
              mid_isFiring_80ee6edc2471fed7,
              mid_initializeResetters_3d13474d79f5e7bc,
              mid_initializeResetters_acdd8180a5dc1a8d,
              mid_notifyResetters_c76342d42407aa3d,
              mid_notifyResetters_9658cf3eaef14ef5,
              mid_applyResetters_81fc6fb6078d2aa7,
              mid_applyResetters_db7b9ef879f5b135,
              mid_isFiringOnInitialState_795d7e54d4c58d83,
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
