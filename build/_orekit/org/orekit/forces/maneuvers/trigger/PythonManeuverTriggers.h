#ifndef org_orekit_forces_maneuvers_trigger_PythonManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_PythonManeuverTriggers_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class FieldManeuverTriggersResetter;
          class ManeuverTriggersResetter;
          class ManeuverTriggers;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
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
    class CalculusFieldElement;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class PythonManeuverTriggers : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_addResetter_6c2e9e35ba95043d,
              mid_addResetter_17259cc5ef51ebf7,
              mid_finalize_0640e6acf969ed28,
              mid_getEventDetectors_d7cce92225eb0db2,
              mid_getFieldEventDetectors_8130af76f6998f44,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_init_0472264ad6f40bc2,
              mid_isFiring_cf913265ec3c3fe7,
              mid_isFiring_7ccb736f2a8bfc30,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonManeuverTriggers(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonManeuverTriggers(const PythonManeuverTriggers& obj) : ::java::lang::Object(obj) {}

            PythonManeuverTriggers();

            void addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter &) const;
            void addResetter(const ::org::hipparchus::Field &, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter &) const;
            void finalize() const;
            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            ::java::util::List getParametersDrivers() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
            jboolean isFiring(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &) const;
            jboolean isFiring(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonManeuverTriggers);
          extern PyTypeObject *PY_TYPE(PythonManeuverTriggers);

          class t_PythonManeuverTriggers {
          public:
            PyObject_HEAD
            PythonManeuverTriggers object;
            static PyObject *wrap_Object(const PythonManeuverTriggers&);
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
