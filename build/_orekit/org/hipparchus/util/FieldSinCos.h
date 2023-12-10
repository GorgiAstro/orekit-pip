#ifndef org_hipparchus_util_FieldSinCos_H
#define org_hipparchus_util_FieldSinCos_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
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

      class FieldSinCos : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ea69641e3fe74dd6,
          mid_cos_4d26fd885228c716,
          mid_difference_2e2927a46e3fad3f,
          mid_sin_4d26fd885228c716,
          mid_sum_2e2927a46e3fad3f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldSinCos(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldSinCos(const FieldSinCos& obj) : ::java::lang::Object(obj) {}

        FieldSinCos(const ::java::lang::Object &, const ::java::lang::Object &);

        ::java::lang::Object cos() const;
        static FieldSinCos difference(const FieldSinCos &, const FieldSinCos &);
        ::java::lang::Object sin() const;
        static FieldSinCos sum(const FieldSinCos &, const FieldSinCos &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(FieldSinCos);
      extern PyTypeObject *PY_TYPE(FieldSinCos);

      class t_FieldSinCos {
      public:
        PyObject_HEAD
        FieldSinCos object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldSinCos *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldSinCos&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldSinCos&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
