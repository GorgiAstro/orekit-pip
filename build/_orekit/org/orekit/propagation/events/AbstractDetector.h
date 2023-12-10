#ifndef org_orekit_propagation_events_AbstractDetector_H
#define org_orekit_propagation_events_AbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AbstractDetector;
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

        class AbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_432f3d328c15ec82,
            mid_getHandler_551c102e543538fd,
            mid_getMaxCheckInterval_35e5947e4e8f061c,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getThreshold_dff5885c2c873297,
            mid_init_826b4eda94da4e78,
            mid_isForward_b108b35ef48e27bd,
            mid_withHandler_60bfd53e9474bbd1,
            mid_withMaxCheck_7597e629f58eff02,
            mid_withMaxCheck_694003c4eb6fbaa9,
            mid_withMaxIter_54534a9090a8f086,
            mid_withThreshold_7597e629f58eff02,
            mid_create_913a6d04c3b6bf64,
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
