#ifndef org_orekit_propagation_events_PythonFieldAdaptableInterval_H
#define org_orekit_propagation_events_PythonFieldAdaptableInterval_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldAdaptableInterval;
      }
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

        class PythonFieldAdaptableInterval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_currentInterval_2bf27f945aefc85c,
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
