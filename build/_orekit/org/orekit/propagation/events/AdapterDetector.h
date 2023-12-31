#ifndef org_orekit_propagation_events_AdapterDetector_H
#define org_orekit_propagation_events_AdapterDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class EventHandler;
        }
        class EventDetector;
        class AdaptableInterval;
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
            mid_init$_e13564f833403504,
            mid_g_a17ea857ce74d258,
            mid_getDetector_9ada55f07f5a223c,
            mid_getHandler_0c96c441e92b6ffa,
            mid_getMaxCheckInterval_014eea600d2cdae8,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getThreshold_b74f83833fdad017,
            mid_init_2d7f9a496c7e9781,
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
