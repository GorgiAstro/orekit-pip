#ifndef org_orekit_data_PythonReaderOpener_H
#define org_orekit_data_PythonReaderOpener_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class Reader;
    class IOException;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataSource$ReaderOpener;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonReaderOpener : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_openOnce_b2bc6d3e210c2dd4,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonReaderOpener(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonReaderOpener(const PythonReaderOpener& obj) : ::java::lang::Object(obj) {}

        PythonReaderOpener();

        void finalize() const;
        ::java::io::Reader openOnce() const;
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
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PythonReaderOpener);
      extern PyTypeObject *PY_TYPE(PythonReaderOpener);

      class t_PythonReaderOpener {
      public:
        PyObject_HEAD
        PythonReaderOpener object;
        static PyObject *wrap_Object(const PythonReaderOpener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
