#ifndef org_orekit_propagation_events_PythonEnablingPredicate_H
#define org_orekit_propagation_events_PythonEnablingPredicate_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonEnablingPredicate : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_eventIsEnabled_edfe3d9894da78a1,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
