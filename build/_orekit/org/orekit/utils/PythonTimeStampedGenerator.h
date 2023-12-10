#ifndef org_orekit_utils_PythonTimeStampedGenerator_H
#define org_orekit_utils_PythonTimeStampedGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedGenerator;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonTimeStampedGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_generate_8060cef9318d72e3,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonTimeStampedGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeStampedGenerator(const PythonTimeStampedGenerator& obj) : ::java::lang::Object(obj) {}

        PythonTimeStampedGenerator();

        void finalize() const;
        ::java::util::List generate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
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
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonTimeStampedGenerator);
      extern PyTypeObject *PY_TYPE(PythonTimeStampedGenerator);

      class t_PythonTimeStampedGenerator {
      public:
        PyObject_HEAD
        PythonTimeStampedGenerator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonTimeStampedGenerator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonTimeStampedGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonTimeStampedGenerator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
