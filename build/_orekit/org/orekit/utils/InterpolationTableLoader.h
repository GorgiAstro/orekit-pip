#ifndef org_orekit_utils_InterpolationTableLoader_H
#define org_orekit_utils_InterpolationTableLoader_H

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
          mid_init$_ff7cb6c242604316,
          mid_getAbscissaGrid_be783177b060994b,
          mid_getOrdinateGrid_be783177b060994b,
          mid_getValuesSamples_eda3f19b8225f78f,
          mid_loadData_bec0f846e5ec73da,
          mid_stillAcceptsData_eee3de00fe971136,
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
