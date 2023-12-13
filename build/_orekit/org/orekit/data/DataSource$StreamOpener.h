#ifndef org_orekit_data_DataSource$StreamOpener_H
#define org_orekit_data_DataSource$StreamOpener_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DataSource$StreamOpener : public ::java::lang::Object {
       public:
        enum {
          mid_openOnce_6c37d64ac8173086,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataSource$StreamOpener(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataSource$StreamOpener(const DataSource$StreamOpener& obj) : ::java::lang::Object(obj) {}

        ::java::io::InputStream openOnce() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataSource$StreamOpener);
      extern PyTypeObject *PY_TYPE(DataSource$StreamOpener);

      class t_DataSource$StreamOpener {
      public:
        PyObject_HEAD
        DataSource$StreamOpener object;
        static PyObject *wrap_Object(const DataSource$StreamOpener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
