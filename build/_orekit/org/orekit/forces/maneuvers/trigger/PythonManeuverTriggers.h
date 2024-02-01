#ifndef org_orekit_forces_maneuvers_trigger_PythonManeuverTriggers_H
#define org_orekit_forces_maneuvers_trigger_PythonManeuverTriggers_H

#include "java/lang/Object.h"

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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class ManeuverTriggersResetter;
          class FieldManeuverTriggersResetter;
          class ManeuverTriggers;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
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
              mid_init$_ff7cb6c242604316,
              mid_addResetter_5392838e44623505,
              mid_addResetter_8b21453ce137761f,
              mid_finalize_ff7cb6c242604316,
              mid_getEventDetectors_11e4ca8182c1933d,
              mid_getFieldEventDetectors_d3db121d9deb0312,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_init_14deaae988292d42,
              mid_isFiring_8083fb6b6fb5ee99,
              mid_isFiring_10e417873abbceb0,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
