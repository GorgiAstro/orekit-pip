#ifndef org_orekit_forces_maneuvers_trigger_PythonAbstractManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_PythonAbstractManeuverTriggers_H

#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"

namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
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
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getEventDetectors_d7cce92225eb0db2,
              mid_getFieldEventDetectors_8130af76f6998f44,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_isFiringOnInitialState_1e4c79a00429445e,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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
