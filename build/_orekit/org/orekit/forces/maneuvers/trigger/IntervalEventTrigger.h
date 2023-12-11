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
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
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
              mid_init$_f9a3e736b2361f6c,
              mid_getEventDetectors_d7cce92225eb0db2,
              mid_getFieldEventDetectors_8130af76f6998f44,
              mid_getFiringIntervalDetector_9cafaf54f10725f9,
              mid_isFiringOnInitialState_1e4c79a00429445e,
              mid_convertIntervalDetector_590bb38060674b63,
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
