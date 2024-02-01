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
              mid_init$_a38fc05f525605c3,
              mid_convertIntervalDetector_2778b7032ad3e419,
              mid_finalize_ff7cb6c242604316,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
