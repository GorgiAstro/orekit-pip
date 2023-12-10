#ifndef org_orekit_data_PythonStreamOpener_H
#define org_orekit_data_PythonStreamOpener_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataSource$StreamOpener;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonStreamOpener : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_openOnce_eafcb03912e8859c,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonStreamOpener(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonStreamOpener(const PythonStreamOpener& obj) : ::java::lang::Object(obj) {}

        PythonStreamOpener();

        void finalize() const;
        ::java::io::InputStream openOnce() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonStreamOpener);
      extern PyTypeObject *PY_TYPE(PythonStreamOpener);

      class t_PythonStreamOpener {
      public:
        PyObject_HEAD
        PythonStreamOpener object;
        static PyObject *wrap_Object(const PythonStreamOpener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
