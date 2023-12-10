#ifndef org_orekit_forces_maneuvers_trigger_DateBasedManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_DateBasedManeuverTriggers_H

#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      namespace events {
        class ParameterDrivenDateIntervalDetector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class DateBasedManeuverTriggers : public ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger {
           public:
            enum {
              mid_init$_fdc72bfdba154d74,
              mid_init$_7d29df8e1e987e68,
              mid_getDuration_dff5885c2c873297,
              mid_getEndDate_85703d13e302437e,
              mid_getName_11b109bd155ca898,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getStartDate_85703d13e302437e,
              mid_convertIntervalDetector_6d5643096d51e9e8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DateBasedManeuverTriggers(jobject obj) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DateBasedManeuverTriggers(const DateBasedManeuverTriggers& obj) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(obj) {}

            static ::java::lang::String *DEFAULT_NAME;

            DateBasedManeuverTriggers(const ::org::orekit::time::AbsoluteDate &, jdouble);
            DateBasedManeuverTriggers(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble);

            jdouble getDuration() const;
            ::org::orekit::time::AbsoluteDate getEndDate() const;
            ::java::lang::String getName() const;
            ::java::util::List getParametersDrivers() const;
            ::org::orekit::time::AbsoluteDate getStartDate() const;
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
          extern PyType_Def PY_TYPE_DEF(DateBasedManeuverTriggers);
          extern PyTypeObject *PY_TYPE(DateBasedManeuverTriggers);

          class t_DateBasedManeuverTriggers {
          public:
            PyObject_HEAD
            DateBasedManeuverTriggers object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DateBasedManeuverTriggers *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DateBasedManeuverTriggers&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DateBasedManeuverTriggers&, PyTypeObject *);
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
