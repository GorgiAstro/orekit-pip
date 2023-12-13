#ifndef org_orekit_data_DataSource$Opener_H
#define org_orekit_data_DataSource$Opener_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
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

      class DataSource$Opener : public ::java::lang::Object {
       public:
        enum {
          mid_openReaderOnce_b2bc6d3e210c2dd4,
          mid_openStreamOnce_6c37d64ac8173086,
          mid_rawDataIsBinary_9ab94ac1dc23b105,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataSource$Opener(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataSource$Opener(const DataSource$Opener& obj) : ::java::lang::Object(obj) {}

        ::java::io::Reader openReaderOnce() const;
        ::java::io::InputStream openStreamOnce() const;
        jboolean rawDataIsBinary() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataSource$Opener);
      extern PyTypeObject *PY_TYPE(DataSource$Opener);

      class t_DataSource$Opener {
      public:
        PyObject_HEAD
        DataSource$Opener object;
        static PyObject *wrap_Object(const DataSource$Opener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
