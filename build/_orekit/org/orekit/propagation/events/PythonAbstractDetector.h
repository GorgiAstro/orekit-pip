#ifndef org_orekit_propagation_events_PythonAbstractDetector_H
#define org_orekit_propagation_events_PythonAbstractDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AdaptableInterval;
        namespace handlers {
          class EventHandler;
        }
      }
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonAbstractDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_cdcad1dd6e5e97de,
            mid_create_dfefb60c85fe348c,
            mid_finalize_0640e6acf969ed28,
            mid_g_1bbf81d80c47ecdd,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractDetector(const PythonAbstractDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          PythonAbstractDetector(jdouble, jdouble, jint, const ::org::orekit::propagation::events::handlers::EventHandler &);

          ::org::orekit::propagation::events::AbstractDetector create(const ::org::orekit::propagation::events::AdaptableInterval &, jdouble, jint, const ::org::orekit::propagation::events::handlers::EventHandler &) const;
          void finalize() const;
          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractDetector);
        extern PyTypeObject *PY_TYPE(PythonAbstractDetector);

        class t_PythonAbstractDetector {
        public:
          PyObject_HEAD
          PythonAbstractDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonAbstractDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonAbstractDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonAbstractDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
