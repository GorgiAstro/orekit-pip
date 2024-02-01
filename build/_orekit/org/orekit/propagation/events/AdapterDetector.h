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
        class AdaptableInterval;
        class EventDetector;
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
            mid_init$_d5d8be0538a03d97,
            mid_g_b443ba1cc794b916,
            mid_getDetector_ebd847a60689999d,
            mid_getHandler_0e9e72f635f03ea9,
            mid_getMaxCheckInterval_11bc47e1cbec1a87,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getThreshold_9981f74b2d109da6,
            mid_init_14deaae988292d42,
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
