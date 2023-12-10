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
      class FieldTimeStamped;
      class FieldAbsoluteDate;
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
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getDate_09b0a926600dfc14,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
