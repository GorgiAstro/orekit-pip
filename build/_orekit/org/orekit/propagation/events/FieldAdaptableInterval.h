#ifndef org_orekit_propagation_events_FieldAdaptableInterval_H
#define org_orekit_propagation_events_FieldAdaptableInterval_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
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

        class FieldAdaptableInterval : public ::java::lang::Object {
         public:
          enum {
            mid_currentInterval_b83144ffe3b4ef29,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAdaptableInterval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAdaptableInterval(const FieldAdaptableInterval& obj) : ::java::lang::Object(obj) {}

          jdouble currentInterval(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAdaptableInterval);
        extern PyTypeObject *PY_TYPE(FieldAdaptableInterval);

        class t_FieldAdaptableInterval {
        public:
          PyObject_HEAD
          FieldAdaptableInterval object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAdaptableInterval *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAdaptableInterval&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAdaptableInterval&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
