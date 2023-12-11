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
          mid_init$_0640e6acf969ed28,
          mid_getAbscissaGrid_a53a7513ecedada2,
          mid_getOrdinateGrid_a53a7513ecedada2,
          mid_getValuesSamples_8cf5267aa13a77f3,
          mid_loadData_15770e8d8949a557,
          mid_stillAcceptsData_89b302893bdbe1f1,
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
