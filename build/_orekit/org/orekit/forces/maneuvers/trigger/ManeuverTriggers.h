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
    namespace propagation {
      namespace events {
        class EventDetectorsProvider;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
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
              mid_addResetter_a16797fae59e88ec,
              mid_addResetter_e53773d2404dc858,
              mid_getName_11b109bd155ca898,
              mid_init_826b4eda94da4e78,
              mid_init_8e8de2be1664674a,
              mid_isFiring_785ace4124d89120,
              mid_isFiring_89b940ef53c9a82d,
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
