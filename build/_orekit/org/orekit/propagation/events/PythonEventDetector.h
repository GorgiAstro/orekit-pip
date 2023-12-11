#ifndef org_orekit_propagation_events_PythonEventDetector_H
#define org_orekit_propagation_events_PythonEventDetector_H

#include "java/lang/Object.h"

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
        class EventDetector;
        class AdaptableInterval;
        namespace handlers {
          class EventHandler;
        }
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonEventDetector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_g_1bbf81d80c47ecdd,
            mid_getHandler_9cfb09a569a3f330,
            mid_getMaxCheckInterval_b5b0f3e235bdd705,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getThreshold_557b8123390d8d0c,
            mid_init_0472264ad6f40bc2,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEventDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEventDetector(const PythonEventDetector& obj) : ::java::lang::Object(obj) {}

          PythonEventDetector();

          void finalize() const;
          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::events::handlers::EventHandler getHandler() const;
          ::org::orekit::propagation::events::AdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          jdouble getThreshold() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonEventDetector);
        extern PyTypeObject *PY_TYPE(PythonEventDetector);

        class t_PythonEventDetector {
        public:
          PyObject_HEAD
          PythonEventDetector object;
          static PyObject *wrap_Object(const PythonEventDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
