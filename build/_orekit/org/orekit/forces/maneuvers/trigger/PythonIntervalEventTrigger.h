#ifndef org_orekit_forces_maneuvers_trigger_PythonIntervalEventTrigger_H
#define org_orekit_forces_maneuvers_trigger_PythonIntervalEventTrigger_H

#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AbstractDetector;
        class FieldAbstractDetector;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class Field;
  }
}
namespace java {
  namespace util {
    class List;
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

          class PythonIntervalEventTrigger : public ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger {
           public:
            enum {
              mid_init$_f9a3e736b2361f6c,
              mid_convertIntervalDetector_590bb38060674b63,
              mid_finalize_0640e6acf969ed28,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonIntervalEventTrigger(jobject obj) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonIntervalEventTrigger(const PythonIntervalEventTrigger& obj) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(obj) {}

            PythonIntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector &);

            ::org::orekit::propagation::events::FieldAbstractDetector convertIntervalDetector(const ::org::hipparchus::Field &, const ::org::orekit::propagation::events::AbstractDetector &) const;
            void finalize() const;
            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonIntervalEventTrigger);
          extern PyTypeObject *PY_TYPE(PythonIntervalEventTrigger);

          class t_PythonIntervalEventTrigger {
          public:
            PyObject_HEAD
            PythonIntervalEventTrigger object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonIntervalEventTrigger *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonIntervalEventTrigger&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonIntervalEventTrigger&, PyTypeObject *);
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
