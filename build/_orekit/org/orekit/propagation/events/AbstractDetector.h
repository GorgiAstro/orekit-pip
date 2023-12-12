#ifndef org_orekit_propagation_events_AbstractDetector_H
#define org_orekit_propagation_events_AbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AbstractDetector;
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

        class AbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_1bbf81d80c47ecdd,
            mid_getHandler_9cfb09a569a3f330,
            mid_getMaxCheckInterval_b5b0f3e235bdd705,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getThreshold_557b8123390d8d0c,
            mid_init_0472264ad6f40bc2,
            mid_isForward_89b302893bdbe1f1,
            mid_withHandler_db2a1d87b40e705a,
            mid_withMaxCheck_44a297e452870461,
            mid_withMaxCheck_22019eb01388dd65,
            mid_withMaxIter_43c280fe2a3b89a2,
            mid_withThreshold_44a297e452870461,
            mid_create_dfefb60c85fe348c,
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
