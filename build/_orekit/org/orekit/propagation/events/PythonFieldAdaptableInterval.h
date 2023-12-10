#ifndef org_orekit_propagation_events_PythonFieldAdaptableInterval_H
#define org_orekit_propagation_events_PythonFieldAdaptableInterval_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldAdaptableInterval;
      }
      class FieldSpacecraftState;
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

        class PythonFieldAdaptableInterval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_currentInterval_b83144ffe3b4ef29,
            mid_finalize_0fa09c18fee449d5,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldAdaptableInterval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldAdaptableInterval(const PythonFieldAdaptableInterval& obj) : ::java::lang::Object(obj) {}

          PythonFieldAdaptableInterval();

          jdouble currentInterval(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldAdaptableInterval);
        extern PyTypeObject *PY_TYPE(PythonFieldAdaptableInterval);

        class t_PythonFieldAdaptableInterval {
        public:
          PyObject_HEAD
          PythonFieldAdaptableInterval object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldAdaptableInterval *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldAdaptableInterval&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldAdaptableInterval&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
