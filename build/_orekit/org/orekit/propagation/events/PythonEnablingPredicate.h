#ifndef org_orekit_propagation_events_PythonEnablingPredicate_H
#define org_orekit_propagation_events_PythonEnablingPredicate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EnablingPredicate;
        class EventDetector;
      }
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonEnablingPredicate : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_eventIsEnabled_3634c1457eedfeb6,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEnablingPredicate(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEnablingPredicate(const PythonEnablingPredicate& obj) : ::java::lang::Object(obj) {}

          PythonEnablingPredicate();

          jboolean eventIsEnabled(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jdouble) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonEnablingPredicate);
        extern PyTypeObject *PY_TYPE(PythonEnablingPredicate);

        class t_PythonEnablingPredicate {
        public:
          PyObject_HEAD
          PythonEnablingPredicate object;
          static PyObject *wrap_Object(const PythonEnablingPredicate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
