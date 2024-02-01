#ifndef org_orekit_forces_maneuvers_trigger_StartStopEventsTrigger_H
#define org_orekit_forces_maneuvers_trigger_StartStopEventsTrigger_H

#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class AbstractDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class StartStopEventsTrigger : public ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers {
           public:
            enum {
              mid_getEventDetectors_11e4ca8182c1933d,
              mid_getFieldEventDetectors_d3db121d9deb0312,
              mid_getStartDetector_adbfb38205dfa1c9,
              mid_getStopDetector_adbfb38205dfa1c9,
              mid_init_14deaae988292d42,
              mid_convertStartDetector_2778b7032ad3e419,
              mid_convertStopDetector_2778b7032ad3e419,
              mid_isFiringOnInitialState_145801f71fbbc869,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StartStopEventsTrigger(jobject obj) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StartStopEventsTrigger(const StartStopEventsTrigger& obj) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(obj) {}

            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            ::org::orekit::propagation::events::AbstractDetector getStartDetector() const;
            ::org::orekit::propagation::events::AbstractDetector getStopDetector() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(StartStopEventsTrigger);
          extern PyTypeObject *PY_TYPE(StartStopEventsTrigger);

          class t_StartStopEventsTrigger {
          public:
            PyObject_HEAD
            StartStopEventsTrigger object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_StartStopEventsTrigger *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const StartStopEventsTrigger&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const StartStopEventsTrigger&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
