#ifndef org_orekit_utils_LoveNumbers_H
#define org_orekit_utils_LoveNumbers_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class LoveNumbers : public ::java::lang::Object {
       public:
        enum {
          mid_init$_19b9908f77e1bb8a,
          mid_getImaginary_cad98089d00f8a5b,
          mid_getPlus_cad98089d00f8a5b,
          mid_getReal_cad98089d00f8a5b,
          mid_getSize_55546ef6a647f39b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LoveNumbers(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LoveNumbers(const LoveNumbers& obj) : ::java::lang::Object(obj) {}

        LoveNumbers(const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &);

        jdouble getImaginary(jint, jint) const;
        jdouble getPlus(jint, jint) const;
        jdouble getReal(jint, jint) const;
        jint getSize() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(LoveNumbers);
      extern PyTypeObject *PY_TYPE(LoveNumbers);

      class t_LoveNumbers {
      public:
        PyObject_HEAD
        LoveNumbers object;
        static PyObject *wrap_Object(const LoveNumbers&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
