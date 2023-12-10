#ifndef org_orekit_utils_LegendrePolynomials_H
#define org_orekit_utils_LegendrePolynomials_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class LegendrePolynomials : public ::java::lang::Object {
       public:
        enum {
          mid_init$_78e41e7b5124a628,
          mid_getPnm_a84e4ee1da3f1ab8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LegendrePolynomials(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LegendrePolynomials(const LegendrePolynomials& obj) : ::java::lang::Object(obj) {}

        LegendrePolynomials(jint, jint, jdouble);

        jdouble getPnm(jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(LegendrePolynomials);
      extern PyTypeObject *PY_TYPE(LegendrePolynomials);

      class t_LegendrePolynomials {
      public:
        PyObject_HEAD
        LegendrePolynomials object;
        static PyObject *wrap_Object(const LegendrePolynomials&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
