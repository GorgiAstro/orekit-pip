#ifndef org_orekit_forces_maneuvers_trigger_ManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_ManeuverTriggers_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class FieldManeuverTriggersResetter;
          class ManeuverTriggersResetter;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
      namespace events {
        class EventDetectorsProvider;
      }
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
              mid_addResetter_88f6b3eca6f2ace7,
              mid_addResetter_7abb1f925b31f873,
              mid_getName_1c1fa1e935d6cdcf,
              mid_init_2d7f9a496c7e9781,
              mid_init_96d019f392abf918,
              mid_isFiring_430b36eccbd3b265,
              mid_isFiring_d98e2ca7f972ae8c,
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
