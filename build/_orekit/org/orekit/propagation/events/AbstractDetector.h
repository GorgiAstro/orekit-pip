#ifndef org_orekit_propagation_events_AbstractDetector_H
#define org_orekit_propagation_events_AbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class EventHandler;
        }
        class AbstractDetector;
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

        class AbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_66a2f071e6ed0c06,
            mid_getHandler_d450688ba8c3949b,
            mid_getMaxCheckInterval_5b5c68574977d620,
            mid_getMaxIterationCount_f2f64475e4580546,
            mid_getThreshold_456d9a2f64d6b28d,
            mid_init_3d13474d79f5e7bc,
            mid_isForward_e470b6d9e0d979db,
            mid_withHandler_427c1e606cf016a7,
            mid_withMaxCheck_28062f653333113e,
            mid_withMaxCheck_ad0d5ccc43611835,
            mid_withMaxIter_ab456b9a4e9f6c2b,
            mid_withThreshold_28062f653333113e,
            mid_create_ccd729cfbbaff306,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractDetector(const AbstractDetector& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_MAXCHECK;
          static jint DEFAULT_MAX_ITER;
          static jdouble DEFAULT_THRESHOLD;

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::events::handlers::EventHandler getHandler() const;
          ::org::orekit::propagation::events::AdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          jdouble getThreshold() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          jboolean isForward() const;
          AbstractDetector withHandler(const ::org::orekit::propagation::events::handlers::EventHandler &) const;
          AbstractDetector withMaxCheck(jdouble) const;
          AbstractDetector withMaxCheck(const ::org::orekit::propagation::events::AdaptableInterval &) const;
          AbstractDetector withMaxIter(jint) const;
          AbstractDetector withThreshold(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractDetector);
        extern PyTypeObject *PY_TYPE(AbstractDetector);

        class t_AbstractDetector {
        public:
          PyObject_HEAD
          AbstractDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
