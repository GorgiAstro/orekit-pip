#ifndef org_orekit_data_DataSource_H
#define org_orekit_data_DataSource_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource$StreamOpener;
      class DataSource$ReaderOpener;
      class DataSource$Opener;
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
          mid_init$_5d6bcca91ae998ee,
          mid_init$_f5ffdf29129ef90a,
          mid_init$_d78fe12c98ba1e42,
          mid_init$_e3be660e5a2ef485,
          mid_getName_3cffd47377eca18a,
          mid_getOpener_4793c6fb0a9a9512,
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
