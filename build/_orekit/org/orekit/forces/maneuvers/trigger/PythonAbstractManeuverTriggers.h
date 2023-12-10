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
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
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
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_getEventDetectors_20f6d2b462aaef4b,
              mid_getFieldEventDetectors_361313cd1a9c693a,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_isFiringOnInitialState_6501154ab0a356a8,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
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
