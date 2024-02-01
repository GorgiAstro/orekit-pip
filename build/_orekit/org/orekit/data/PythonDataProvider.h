#ifndef org_orekit_data_PythonDataProvider_H
#define org_orekit_data_PythonDataProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataProvider;
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
    namespace data {

      class PythonDataProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonDataProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonDataProvider(const PythonDataProvider& obj) : ::java::lang::Object(obj) {}

        PythonDataProvider();

        void finalize() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonDataProvider);
      extern PyTypeObject *PY_TYPE(PythonDataProvider);

      class t_PythonDataProvider {
      public:
        PyObject_HEAD
        PythonDataProvider object;
        static PyObject *wrap_Object(const PythonDataProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
