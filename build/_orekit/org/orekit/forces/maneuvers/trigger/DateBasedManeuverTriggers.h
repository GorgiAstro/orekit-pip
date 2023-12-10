#ifndef org_orekit_forces_maneuvers_trigger_DateBasedManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_DateBasedManeuverTriggers_H

#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class ParameterDrivenDateIntervalDetector;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

          class DateBasedManeuverTriggers : public ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger {
           public:
            enum {
              mid_init$_076f09dda44638d8,
              mid_init$_44d04d6a1ac9a60f,
              mid_getDuration_456d9a2f64d6b28d,
              mid_getEndDate_aaa854c403487cf3,
              mid_getName_0090f7797e403f43,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getStartDate_aaa854c403487cf3,
              mid_convertIntervalDetector_cd5483ed245bd65f,
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
