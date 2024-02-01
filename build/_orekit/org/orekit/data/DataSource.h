#ifndef org_orekit_data_DataSource_H
#define org_orekit_data_DataSource_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource$Opener;
      class DataSource$ReaderOpener;
      class DataSource$StreamOpener;
    }
  }
}
namespace java {
  namespace io {
    class File;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DataSource : public ::java::lang::Object {
       public:
        enum {
          mid_init$_44d81342f3d8a712,
          mid_init$_105e1eadb709d9ac,
          mid_init$_4b615a7a39d2b02a,
          mid_init$_58e6f3d903187c31,
          mid_getName_d2c8eb4129821f0e,
          mid_getOpener_de9fac3997e0c67b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataSource(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataSource(const DataSource& obj) : ::java::lang::Object(obj) {}

        DataSource(const ::java::io::File &);
        DataSource(const ::java::lang::String &);
        DataSource(const ::java::lang::String &, const ::org::orekit::data::DataSource$ReaderOpener &);
        DataSource(const ::java::lang::String &, const ::org::orekit::data::DataSource$StreamOpener &);

        ::java::lang::String getName() const;
        ::org::orekit::data::DataSource$Opener getOpener() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataSource);
      extern PyTypeObject *PY_TYPE(DataSource);

      class t_DataSource {
      public:
        PyObject_HEAD
        DataSource object;
        static PyObject *wrap_Object(const DataSource&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
