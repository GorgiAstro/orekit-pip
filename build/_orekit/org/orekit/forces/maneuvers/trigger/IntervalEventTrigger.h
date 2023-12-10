#ifndef org_orekit_forces_maneuvers_trigger_IntervalEventTrigger_H
#define org_orekit_forces_maneuvers_trigger_IntervalEventTrigger_H

#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AbstractDetector;
        class EventDetector;
        class FieldEventDetector;
      }
    }
  }
  namespace hipparchus {
    class Field;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class IntervalEventTrigger : public ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers {
           public:
            enum {
              mid_init$_958f8a74aa6ccd6d,
              mid_getEventDetectors_20f6d2b462aaef4b,
              mid_getFieldEventDetectors_361313cd1a9c693a,
              mid_getFiringIntervalDetector_900a1fd995808d92,
              mid_convertIntervalDetector_904dccaacafa0db1,
              mid_isFiringOnInitialState_6501154ab0a356a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalEventTrigger(jobject obj) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalEventTrigger(const IntervalEventTrigger& obj) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(obj) {}

            IntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector &);

            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            ::org::orekit::propagation::events::AbstractDetector getFiringIntervalDetector() const;
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
          extern PyType_Def PY_TYPE_DEF(IntervalEventTrigger);
          extern PyTypeObject *PY_TYPE(IntervalEventTrigger);

          class t_IntervalEventTrigger {
          public:
            PyObject_HEAD
            IntervalEventTrigger object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntervalEventTrigger *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntervalEventTrigger&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntervalEventTrigger&, PyTypeObject *);
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
