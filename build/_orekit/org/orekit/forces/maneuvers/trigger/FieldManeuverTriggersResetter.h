#ifndef org_orekit_forces_maneuvers_trigger_FieldManeuverTriggersResetter_H
#define org_orekit_forces_maneuvers_trigger_FieldManeuverTriggersResetter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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

          class FieldManeuverTriggersResetter : public ::java::lang::Object {
           public:
            enum {
              mid_init_96d019f392abf918,
              mid_maneuverTriggered_871885b409df9d57,
              mid_resetState_370b1acde6244b7e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldManeuverTriggersResetter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldManeuverTriggersResetter(const FieldManeuverTriggersResetter& obj) : ::java::lang::Object(obj) {}

            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            void maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState &, jboolean) const;
            ::org::orekit::propagation::FieldSpacecraftState resetState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldManeuverTriggersResetter);
          extern PyTypeObject *PY_TYPE(FieldManeuverTriggersResetter);

          class t_FieldManeuverTriggersResetter {
          public:
            PyObject_HEAD
            FieldManeuverTriggersResetter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldManeuverTriggersResetter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldManeuverTriggersResetter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldManeuverTriggersResetter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
