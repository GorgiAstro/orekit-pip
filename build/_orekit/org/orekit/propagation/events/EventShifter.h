#ifndef org_orekit_propagation_events_EventShifter_H
#define org_orekit_propagation_events_EventShifter_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventShifter;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace propagation {
      namespace events {

        class EventShifter : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_22b333117b3e805e,
            mid_g_a17ea857ce74d258,
            mid_getDecreasingTimeShift_b74f83833fdad017,
            mid_getDetector_9ada55f07f5a223c,
            mid_getIncreasingTimeShift_b74f83833fdad017,
            mid_init_2d7f9a496c7e9781,
            mid_create_f480106a3072748e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventShifter(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventShifter(const EventShifter& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          EventShifter(const ::org::orekit::propagation::events::EventDetector &, jboolean, jdouble, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getDecreasingTimeShift() const;
          ::org::orekit::propagation::events::EventDetector getDetector() const;
          jdouble getIncreasingTimeShift() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(EventShifter);
        extern PyTypeObject *PY_TYPE(EventShifter);

        class t_EventShifter {
        public:
          PyObject_HEAD
          EventShifter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EventShifter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EventShifter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EventShifter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
