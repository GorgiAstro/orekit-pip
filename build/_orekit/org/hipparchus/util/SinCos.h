#ifndef org_hipparchus_util_SinCos_H
#define org_hipparchus_util_SinCos_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class SinCos;
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

      class SinCos : public ::java::lang::Object {
       public:
        enum {
          mid_cos_557b8123390d8d0c,
          mid_difference_35070a900a305827,
          mid_sin_557b8123390d8d0c,
          mid_sum_35070a900a305827,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SinCos(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SinCos(const SinCos& obj) : ::java::lang::Object(obj) {}

        jdouble cos() const;
        static SinCos difference(const SinCos &, const SinCos &);
        jdouble sin() const;
        static SinCos sum(const SinCos &, const SinCos &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(SinCos);
      extern PyTypeObject *PY_TYPE(SinCos);

      class t_SinCos {
      public:
        PyObject_HEAD
        SinCos object;
        static PyObject *wrap_Object(const SinCos&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
