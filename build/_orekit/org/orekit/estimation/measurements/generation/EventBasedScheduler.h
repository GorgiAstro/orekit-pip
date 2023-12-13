#ifndef org_orekit_estimation_measurements_generation_EventBasedScheduler_H
#define org_orekit_estimation_measurements_generation_EventBasedScheduler_H

#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"

namespace org {
  namespace orekit {
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
    }
    namespace propagation {
      class Propagator;
      namespace events {
        class EventDetector;
      }
    }
    namespace estimation {
      namespace measurements {
        namespace generation {
          class MeasurementBuilder;
          class SignSemantic;
        }
      }
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
    namespace estimation {
      namespace measurements {
        namespace generation {

          class EventBasedScheduler : public ::org::orekit::estimation::measurements::generation::AbstractScheduler {
           public:
            enum {
              mid_init$_96463f83d671d5ac,
              mid_measurementIsFeasible_a35647bda2901f54,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EventBasedScheduler(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EventBasedScheduler(const EventBasedScheduler& obj) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(obj) {}

            EventBasedScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder &, const ::org::orekit::time::DatesSelector &, const ::org::orekit::propagation::Propagator &, const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::estimation::measurements::generation::SignSemantic &);

            jboolean measurementIsFeasible(const ::org::orekit::time::AbsoluteDate &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          extern PyType_Def PY_TYPE_DEF(EventBasedScheduler);
          extern PyTypeObject *PY_TYPE(EventBasedScheduler);

          class t_EventBasedScheduler {
          public:
            PyObject_HEAD
            EventBasedScheduler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_EventBasedScheduler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const EventBasedScheduler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const EventBasedScheduler&, PyTypeObject *);
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
