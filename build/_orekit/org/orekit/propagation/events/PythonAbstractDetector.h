#ifndef org_orekit_propagation_events_PythonAbstractDetector_H
#define org_orekit_propagation_events_PythonAbstractDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class EventHandler;
        }
        class AdaptableInterval;
      }
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
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
            mid_init$_56035b1a4cf16621,
            mid_create_23ac4e704dde127b,
            mid_finalize_ff7cb6c242604316,
            mid_g_b443ba1cc794b916,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
