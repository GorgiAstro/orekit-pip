#ifndef org_orekit_forces_maneuvers_trigger_ManeuverTriggersResetter_H
#define org_orekit_forces_maneuvers_trigger_ManeuverTriggersResetter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class ManeuverTriggersResetter : public ::java::lang::Object {
           public:
            enum {
              mid_init_826b4eda94da4e78,
              mid_maneuverTriggered_33f4696e4edaa03c,
              mid_resetState_f43130c50e9fafeb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ManeuverTriggersResetter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ManeuverTriggersResetter(const ManeuverTriggersResetter& obj) : ::java::lang::Object(obj) {}

            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
            void maneuverTriggered(const ::org::orekit::propagation::SpacecraftState &, jboolean) const;
            ::org::orekit::propagation::SpacecraftState resetState(const ::org::orekit::propagation::SpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(ManeuverTriggersResetter);
          extern PyTypeObject *PY_TYPE(ManeuverTriggersResetter);

          class t_ManeuverTriggersResetter {
          public:
            PyObject_HEAD
            ManeuverTriggersResetter object;
            static PyObject *wrap_Object(const ManeuverTriggersResetter&);
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
