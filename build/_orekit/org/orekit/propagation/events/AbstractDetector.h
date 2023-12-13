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
            mid_g_a17ea857ce74d258,
            mid_getHandler_0c96c441e92b6ffa,
            mid_getMaxCheckInterval_014eea600d2cdae8,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getThreshold_b74f83833fdad017,
            mid_init_2d7f9a496c7e9781,
            mid_isForward_9ab94ac1dc23b105,
            mid_withHandler_01f46477a2575207,
            mid_withMaxCheck_bcdfde6555a3d78d,
            mid_withMaxCheck_aac8c3658de25d27,
            mid_withMaxIter_2f9b7a5781ba55d5,
            mid_withThreshold_bcdfde6555a3d78d,
            mid_create_193e21d57a66206a,
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
