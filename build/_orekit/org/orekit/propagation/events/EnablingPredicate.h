#ifndef org_orekit_propagation_events_EnablingPredicate_H
#define org_orekit_propagation_events_EnablingPredicate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
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

        class EnablingPredicate : public ::java::lang::Object {
         public:
          enum {
            mid_eventIsEnabled_3634c1457eedfeb6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EnablingPredicate(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EnablingPredicate(const EnablingPredicate& obj) : ::java::lang::Object(obj) {}

          jboolean eventIsEnabled(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(EnablingPredicate);
        extern PyTypeObject *PY_TYPE(EnablingPredicate);

        class t_EnablingPredicate {
        public:
          PyObject_HEAD
          EnablingPredicate object;
          static PyObject *wrap_Object(const EnablingPredicate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
