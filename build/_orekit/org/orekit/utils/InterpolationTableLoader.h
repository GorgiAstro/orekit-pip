#ifndef org_orekit_utils_InterpolationTableLoader_H
#define org_orekit_utils_InterpolationTableLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParseException;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
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
    namespace utils {

      class InterpolationTableLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_getAbscissaGrid_60c7040667a7dc5c,
          mid_getOrdinateGrid_60c7040667a7dc5c,
          mid_getValuesSamples_0358d8ea02f2cdb1,
          mid_loadData_1815f85c118161ad,
          mid_stillAcceptsData_b108b35ef48e27bd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit InterpolationTableLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        InterpolationTableLoader(const InterpolationTableLoader& obj) : ::java::lang::Object(obj) {}

        InterpolationTableLoader();

        JArray< jdouble > getAbscissaGrid() const;
        JArray< jdouble > getOrdinateGrid() const;
        JArray< JArray< jdouble > > getValuesSamples() const;
        void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
        jboolean stillAcceptsData() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(InterpolationTableLoader);
      extern PyTypeObject *PY_TYPE(InterpolationTableLoader);

      class t_InterpolationTableLoader {
      public:
        PyObject_HEAD
        InterpolationTableLoader object;
        static PyObject *wrap_Object(const InterpolationTableLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
