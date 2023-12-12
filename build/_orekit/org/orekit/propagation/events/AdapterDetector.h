#ifndef org_orekit_propagation_events_AdapterDetector_H
#define org_orekit_propagation_events_AdapterDetector_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class AdapterDetector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2e2dfaf38ed50d1d,
            mid_g_1bbf81d80c47ecdd,
            mid_getDetector_0701b00b25822fff,
            mid_getHandler_9cfb09a569a3f330,
            mid_getMaxCheckInterval_b5b0f3e235bdd705,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getThreshold_557b8123390d8d0c,
            mid_init_0472264ad6f40bc2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdapterDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdapterDetector(const AdapterDetector& obj) : ::java::lang::Object(obj) {}

          AdapterDetector(const ::org::orekit::propagation::events::EventDetector &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::events::EventDetector getDetector() const;
          ::org::orekit::propagation::events::handlers::EventHandler getHandler() const;
          ::org::orekit::propagation::events::AdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          jdouble getThreshold() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(AdapterDetector);
        extern PyTypeObject *PY_TYPE(AdapterDetector);

        class t_AdapterDetector {
        public:
          PyObject_HEAD
          AdapterDetector object;
          static PyObject *wrap_Object(const AdapterDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
