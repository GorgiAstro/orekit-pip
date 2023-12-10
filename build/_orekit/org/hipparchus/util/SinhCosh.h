#ifndef org_hipparchus_util_SinhCosh_H
#define org_hipparchus_util_SinhCosh_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class SinhCosh;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class SinhCosh : public ::java::lang::Object {
       public:
        enum {
          mid_cosh_dff5885c2c873297,
          mid_difference_7c987656902090b9,
          mid_sinh_dff5885c2c873297,
          mid_sum_7c987656902090b9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SinhCosh(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SinhCosh(const SinhCosh& obj) : ::java::lang::Object(obj) {}

        jdouble cosh() const;
        static SinhCosh difference(const SinhCosh &, const SinhCosh &);
        jdouble sinh() const;
        static SinhCosh sum(const SinhCosh &, const SinhCosh &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(SinhCosh);
      extern PyTypeObject *PY_TYPE(SinhCosh);

      class t_SinhCosh {
      public:
        PyObject_HEAD
        SinhCosh object;
        static PyObject *wrap_Object(const SinhCosh&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
