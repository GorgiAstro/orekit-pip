#ifndef org_hipparchus_util_Precision_H
#define org_hipparchus_util_Precision_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Precision : public ::java::lang::Object {
       public:
        enum {
          mid_compareTo_c269e3712d9a5c10,
          mid_compareTo_4665f8d5604f6baa,
          mid_equals_ff85a0d8ff097ee5,
          mid_equals_eb68599ac5568215,
          mid_equals_01c0c8b0c5f55ddf,
          mid_equals_93464f2e5006fab3,
          mid_equals_eaecaea95011b92a,
          mid_equals_1a6c810d2be465b0,
          mid_equalsIncludingNaN_ff85a0d8ff097ee5,
          mid_equalsIncludingNaN_eb68599ac5568215,
          mid_equalsIncludingNaN_01c0c8b0c5f55ddf,
          mid_equalsIncludingNaN_eaecaea95011b92a,
          mid_equalsIncludingNaN_93464f2e5006fab3,
          mid_equalsIncludingNaN_1a6c810d2be465b0,
          mid_equalsWithRelativeTolerance_01c0c8b0c5f55ddf,
          mid_isMathematicalInteger_2e401133981893e4,
          mid_isMathematicalInteger_fe32376435eb98dd,
          mid_representableDelta_86ffecc08a63eff0,
          mid_round_948617e69b66e15d,
          mid_round_8842c007fabd6574,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Precision(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Precision(const Precision& obj) : ::java::lang::Object(obj) {}

        static jdouble EPSILON;
        static jdouble SAFE_MIN;

        static jint compareTo(jdouble, jdouble, jdouble);
        static jint compareTo(jdouble, jdouble, jint);
        static jboolean equals(jdouble, jdouble);
        static jboolean equals(jfloat, jfloat);
        static jboolean equals(jdouble, jdouble, jdouble);
        static jboolean equals(jdouble, jdouble, jint);
        static jboolean equals(jfloat, jfloat, jfloat);
        static jboolean equals(jfloat, jfloat, jint);
        static jboolean equalsIncludingNaN(jdouble, jdouble);
        static jboolean equalsIncludingNaN(jfloat, jfloat);
        static jboolean equalsIncludingNaN(jdouble, jdouble, jdouble);
        static jboolean equalsIncludingNaN(jfloat, jfloat, jfloat);
        static jboolean equalsIncludingNaN(jdouble, jdouble, jint);
        static jboolean equalsIncludingNaN(jfloat, jfloat, jint);
        static jboolean equalsWithRelativeTolerance(jdouble, jdouble, jdouble);
        static jboolean isMathematicalInteger(jdouble);
        static jboolean isMathematicalInteger(jfloat);
        static jdouble representableDelta(jdouble, jdouble);
        static jdouble round(jdouble, jint);
        static jfloat round(jfloat, jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Precision);
      extern PyTypeObject *PY_TYPE(Precision);

      class t_Precision {
      public:
        PyObject_HEAD
        Precision object;
        static PyObject *wrap_Object(const Precision&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
