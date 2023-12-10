#ifndef org_orekit_forces_maneuvers_trigger_ManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_ManeuverTriggers_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class ManeuverTriggersResetter;
          class FieldManeuverTriggersResetter;
        }
      }
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class EventDetectorsProvider;
      }
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class ManeuverTriggers : public ::org::orekit::utils::ParameterDriversProvider {
           public:
            enum {
              mid_addResetter_c5c7f3f3d4c4bba2,
              mid_addResetter_17ab38b8d22d6651,
              mid_getName_0090f7797e403f43,
              mid_init_3d13474d79f5e7bc,
              mid_init_acdd8180a5dc1a8d,
              mid_isFiring_b230552293273e68,
              mid_isFiring_80ee6edc2471fed7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ManeuverTriggers(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ManeuverTriggers(const ManeuverTriggers& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

            void addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter &) const;
            void addResetter(const ::org::hipparchus::Field &, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter &) const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(ManeuverTriggers);
          extern PyTypeObject *PY_TYPE(ManeuverTriggers);

          class t_ManeuverTriggers {
          public:
            PyObject_HEAD
            ManeuverTriggers object;
            static PyObject *wrap_Object(const ManeuverTriggers&);
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
