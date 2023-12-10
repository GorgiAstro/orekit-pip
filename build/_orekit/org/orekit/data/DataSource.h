#ifndef org_orekit_data_DataSource_H
#define org_orekit_data_DataSource_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class File;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataSource$Opener;
      class DataSource$StreamOpener;
      class DataSource$ReaderOpener;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DataSource : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0613af62f2ba5dba,
          mid_init$_d0bc48d5b00dc40c,
          mid_init$_cb4fb21723b801f8,
          mid_init$_b8b39c0870e0929a,
          mid_getName_11b109bd155ca898,
          mid_getOpener_0bfb0ac7f0358ce6,
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
