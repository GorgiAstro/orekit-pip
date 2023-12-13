#ifndef org_orekit_forces_maneuvers_trigger_PythonStartStopEventsTrigger_H
#define org_orekit_forces_maneuvers_trigger_PythonStartStopEventsTrigger_H

#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"

namespace java {
  namespace util {
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class PythonStartStopEventsTrigger : public ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger {
           public:
            enum {
              mid_init$_32649cab150bd98e,
              mid_convertStartDetector_323adeb6f2939c8a,
              mid_convertStopDetector_323adeb6f2939c8a,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
