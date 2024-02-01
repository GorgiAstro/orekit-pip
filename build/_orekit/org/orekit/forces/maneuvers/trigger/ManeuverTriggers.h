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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class EventDetectorsProvider;
      }
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
              mid_addResetter_5392838e44623505,
              mid_addResetter_8b21453ce137761f,
              mid_getName_d2c8eb4129821f0e,
              mid_init_14deaae988292d42,
              mid_init_357211ab77703f3f,
              mid_isFiring_8083fb6b6fb5ee99,
              mid_isFiring_10e417873abbceb0,
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
