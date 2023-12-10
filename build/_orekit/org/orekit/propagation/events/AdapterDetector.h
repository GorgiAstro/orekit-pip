#ifndef org_orekit_propagation_events_AdapterDetector_H
#define org_orekit_propagation_events_AdapterDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        namespace handlers {
          class EventHandler;
        }
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
            mid_init$_efb7003d866d4523,
            mid_g_432f3d328c15ec82,
            mid_getDetector_d73bb985ffde4156,
            mid_getHandler_551c102e543538fd,
            mid_getMaxCheckInterval_35e5947e4e8f061c,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getThreshold_dff5885c2c873297,
            mid_init_826b4eda94da4e78,
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
