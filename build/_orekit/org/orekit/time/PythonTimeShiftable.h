#ifndef org_orekit_time_PythonTimeShiftable_H
#define org_orekit_time_PythonTimeShiftable_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeShiftable;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonTimeShiftable : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_shiftedBy_f3fc7729d023c410,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonTimeShiftable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeShiftable(const PythonTimeShiftable& obj) : ::java::lang::Object(obj) {}

        PythonTimeShiftable();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::orekit::time::TimeShiftable shiftedBy(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonTimeShiftable);
      extern PyTypeObject *PY_TYPE(PythonTimeShiftable);

      class t_PythonTimeShiftable {
      public:
        PyObject_HEAD
        PythonTimeShiftable object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonTimeShiftable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonTimeShiftable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonTimeShiftable&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
