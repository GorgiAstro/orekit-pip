#ifndef org_orekit_data_DataSource_H
#define org_orekit_data_DataSource_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource$StreamOpener;
      class DataSource$Opener;
      class DataSource$ReaderOpener;
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
          mid_init$_7e1d51614d5d6a43,
          mid_init$_734b91ac30d5f9b4,
          mid_init$_11e27b54ddfbe464,
          mid_init$_01c9671fbea49908,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getOpener_6ab2f1362b4cc067,
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
