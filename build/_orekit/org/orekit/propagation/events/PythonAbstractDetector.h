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
            mid_init$_d11bc165798938dc,
            mid_create_ccd729cfbbaff306,
            mid_finalize_7ae3461a92a43152,
            mid_g_66a2f071e6ed0c06,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
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
