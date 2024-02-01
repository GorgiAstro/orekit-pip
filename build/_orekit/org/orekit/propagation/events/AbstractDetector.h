#ifndef org_orekit_propagation_events_AbstractDetector_H
#define org_orekit_propagation_events_AbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AbstractDetector;
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

        class AbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_b443ba1cc794b916,
            mid_getHandler_0e9e72f635f03ea9,
            mid_getMaxCheckInterval_11bc47e1cbec1a87,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getThreshold_9981f74b2d109da6,
            mid_init_14deaae988292d42,
            mid_isForward_eee3de00fe971136,
            mid_withHandler_30a1635272b3efbb,
            mid_withMaxCheck_f6dac0e72bf77fee,
            mid_withMaxCheck_beb3e829b22ea7a4,
            mid_withMaxIter_6bba1a5a8d5f4501,
            mid_withThreshold_f6dac0e72bf77fee,
            mid_create_23ac4e704dde127b,
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
