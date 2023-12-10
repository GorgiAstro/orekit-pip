#ifndef org_orekit_propagation_events_FieldEnablingPredicate_H
#define org_orekit_propagation_events_FieldEnablingPredicate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class FieldEnablingPredicate : public ::java::lang::Object {
         public:
          enum {
            mid_eventIsEnabled_59813d9212bb9b66,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEnablingPredicate(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEnablingPredicate(const FieldEnablingPredicate& obj) : ::java::lang::Object(obj) {}

          jboolean eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEnablingPredicate);
        extern PyTypeObject *PY_TYPE(FieldEnablingPredicate);

        class t_FieldEnablingPredicate {
        public:
          PyObject_HEAD
          FieldEnablingPredicate object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEnablingPredicate *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEnablingPredicate&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEnablingPredicate&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
