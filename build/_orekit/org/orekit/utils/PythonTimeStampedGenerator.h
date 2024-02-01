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
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedGenerator;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_generate_0499dac7e83b853d,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
