#ifndef org_orekit_data_DataLoader_H
#define org_orekit_data_DataLoader_H

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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DataLoader : public ::java::lang::Object {
       public:
        enum {
          mid_loadData_15770e8d8949a557,
          mid_stillAcceptsData_89b302893bdbe1f1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataLoader(const DataLoader& obj) : ::java::lang::Object(obj) {}

        void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
        jboolean stillAcceptsData() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataLoader);
      extern PyTypeObject *PY_TYPE(DataLoader);

      class t_DataLoader {
      public:
        PyObject_HEAD
        DataLoader object;
        static PyObject *wrap_Object(const DataLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
