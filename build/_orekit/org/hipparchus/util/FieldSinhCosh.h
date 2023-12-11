#ifndef org_hipparchus_util_FieldSinhCosh_H
#define org_hipparchus_util_FieldSinhCosh_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
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

      class FieldSinhCosh : public ::java::lang::Object {
       public:
        enum {
          mid_init$_cdf90f5ab4b39eca,
          mid_cosh_e661fe3ba2fafb22,
          mid_difference_5460d248f7509324,
          mid_sinh_e661fe3ba2fafb22,
          mid_sum_5460d248f7509324,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldSinhCosh(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldSinhCosh(const FieldSinhCosh& obj) : ::java::lang::Object(obj) {}

        FieldSinhCosh(const ::java::lang::Object &, const ::java::lang::Object &);

        ::java::lang::Object cosh() const;
        static FieldSinhCosh difference(const FieldSinhCosh &, const FieldSinhCosh &);
        ::java::lang::Object sinh() const;
        static FieldSinhCosh sum(const FieldSinhCosh &, const FieldSinhCosh &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(FieldSinhCosh);
      extern PyTypeObject *PY_TYPE(FieldSinhCosh);

      class t_FieldSinhCosh {
      public:
        PyObject_HEAD
        FieldSinhCosh object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldSinhCosh *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldSinhCosh&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldSinhCosh&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
