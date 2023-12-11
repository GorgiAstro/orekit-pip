#ifndef org_orekit_data_PythonDataLoader_H
#define org_orekit_data_PythonDataLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace text {
    class ParseException;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonDataLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_loadData_15770e8d8949a557,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_stillAcceptsData_89b302893bdbe1f1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonDataLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonDataLoader(const PythonDataLoader& obj) : ::java::lang::Object(obj) {}

        PythonDataLoader();

        void finalize() const;
        void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        jboolean stillAcceptsData() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PythonDataLoader);
      extern PyTypeObject *PY_TYPE(PythonDataLoader);

      class t_PythonDataLoader {
      public:
        PyObject_HEAD
        PythonDataLoader object;
        static PyObject *wrap_Object(const PythonDataLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
