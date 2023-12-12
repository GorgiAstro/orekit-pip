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
          mid_init$_e0c6b539d2838bf3,
          mid_getImaginary_21b81d54c06b64b0,
          mid_getPlus_21b81d54c06b64b0,
          mid_getReal_21b81d54c06b64b0,
          mid_getSize_412668abc8d889e9,
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
