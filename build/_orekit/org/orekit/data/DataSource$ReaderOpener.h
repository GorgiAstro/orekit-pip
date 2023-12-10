#ifndef org_orekit_data_DataSource$ReaderOpener_H
#define org_orekit_data_DataSource$ReaderOpener_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DataSource$ReaderOpener : public ::java::lang::Object {
       public:
        enum {
          mid_openOnce_26c6a3f16521a493,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataSource$ReaderOpener(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataSource$ReaderOpener(const DataSource$ReaderOpener& obj) : ::java::lang::Object(obj) {}

        ::java::io::Reader openOnce() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataSource$ReaderOpener);
      extern PyTypeObject *PY_TYPE(DataSource$ReaderOpener);

      class t_DataSource$ReaderOpener {
      public:
        PyObject_HEAD
        DataSource$ReaderOpener object;
        static PyObject *wrap_Object(const DataSource$ReaderOpener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
