#ifndef org_orekit_time_PythonFieldTimeStamped_H
#define org_orekit_time_PythonFieldTimeStamped_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonFieldTimeStamped : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getDate_f1fe4daf77c66560,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldTimeStamped(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldTimeStamped(const PythonFieldTimeStamped& obj) : ::java::lang::Object(obj) {}

        PythonFieldTimeStamped();

        void finalize() const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonFieldTimeStamped);
      extern PyTypeObject *PY_TYPE(PythonFieldTimeStamped);

      class t_PythonFieldTimeStamped {
      public:
        PyObject_HEAD
        PythonFieldTimeStamped object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldTimeStamped *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldTimeStamped&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldTimeStamped&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
