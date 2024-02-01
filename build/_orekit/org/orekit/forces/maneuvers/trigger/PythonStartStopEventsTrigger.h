#ifndef org_orekit_forces_maneuvers_trigger_PythonStartStopEventsTrigger_H
#define org_orekit_forces_maneuvers_trigger_PythonStartStopEventsTrigger_H

#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"

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

          class PythonStartStopEventsTrigger : public ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger {
           public:
            enum {
              mid_init$_fd4c1c355b42090d,
              mid_convertStartDetector_2778b7032ad3e419,
              mid_convertStopDetector_2778b7032ad3e419,
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

            explicit PythonStartStopEventsTrigger(jobject obj) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonStartStopEventsTrigger(const PythonStartStopEventsTrigger& obj) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(obj) {}

            PythonStartStopEventsTrigger(const ::org::orekit::propagation::events::AbstractDetector &, const ::org::orekit::propagation::events::AbstractDetector &);

            ::org::orekit::propagation::events::FieldAbstractDetector convertStartDetector(const ::org::hipparchus::Field &, const ::org::orekit::propagation::events::AbstractDetector &) const;
            ::org::orekit::propagation::events::FieldAbstractDetector convertStopDetector(const ::org::hipparchus::Field &, const ::org::orekit::propagation::events::AbstractDetector &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonStartStopEventsTrigger);
          extern PyTypeObject *PY_TYPE(PythonStartStopEventsTrigger);

          class t_PythonStartStopEventsTrigger {
          public:
            PyObject_HEAD
            PythonStartStopEventsTrigger object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PythonStartStopEventsTrigger *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonStartStopEventsTrigger&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonStartStopEventsTrigger&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
