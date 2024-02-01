#ifndef org_orekit_forces_maneuvers_trigger_PythonAbstractManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_PythonAbstractManeuverTriggers_H

#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
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

          class PythonAbstractManeuverTriggers : public ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getEventDetectors_11e4ca8182c1933d,
              mid_getFieldEventDetectors_d3db121d9deb0312,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_isFiringOnInitialState_145801f71fbbc869,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractManeuverTriggers(jobject obj) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractManeuverTriggers(const PythonAbstractManeuverTriggers& obj) : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(obj) {}

            PythonAbstractManeuverTriggers();

            void finalize() const;
            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            ::java::util::List getParametersDrivers() const;
            jboolean isFiringOnInitialState(const ::org::orekit::propagation::SpacecraftState &, jboolean) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractManeuverTriggers);
          extern PyTypeObject *PY_TYPE(PythonAbstractManeuverTriggers);

          class t_PythonAbstractManeuverTriggers {
          public:
            PyObject_HEAD
            PythonAbstractManeuverTriggers object;
            static PyObject *wrap_Object(const PythonAbstractManeuverTriggers&);
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
