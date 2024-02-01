#ifndef org_orekit_propagation_events_PythonFieldEnablingPredicate_H
#define org_orekit_propagation_events_PythonFieldEnablingPredicate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class FieldEnablingPredicate;
      }
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class PythonFieldEnablingPredicate : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_eventIsEnabled_f8fad546fff5b1a3,
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

          explicit PythonFieldEnablingPredicate(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldEnablingPredicate(const PythonFieldEnablingPredicate& obj) : ::java::lang::Object(obj) {}

          PythonFieldEnablingPredicate();

          jboolean eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldEnablingPredicate);
        extern PyTypeObject *PY_TYPE(PythonFieldEnablingPredicate);

        class t_PythonFieldEnablingPredicate {
        public:
          PyObject_HEAD
          PythonFieldEnablingPredicate object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldEnablingPredicate *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldEnablingPredicate&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldEnablingPredicate&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
