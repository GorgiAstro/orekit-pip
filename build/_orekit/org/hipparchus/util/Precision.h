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
          mid_compareTo_18a1d9f7038621b1,
          mid_compareTo_94fc7c86fb1a5c44,
          mid_equals_cd8da52a7e84190c,
          mid_equals_8eb2261870903ac3,
          mid_equals_bf10cceb76af8f9c,
          mid_equals_5bb0bdcb37b789c1,
          mid_equals_f0bec0daed739313,
          mid_equals_f52624cee373f677,
          mid_equalsIncludingNaN_cd8da52a7e84190c,
          mid_equalsIncludingNaN_8eb2261870903ac3,
          mid_equalsIncludingNaN_bf10cceb76af8f9c,
          mid_equalsIncludingNaN_f0bec0daed739313,
          mid_equalsIncludingNaN_5bb0bdcb37b789c1,
          mid_equalsIncludingNaN_f52624cee373f677,
          mid_equalsWithRelativeTolerance_bf10cceb76af8f9c,
          mid_isMathematicalInteger_716249baa52d209e,
          mid_isMathematicalInteger_967314f8b6d71dd4,
          mid_representableDelta_99e3200dafc19573,
          mid_round_2eeda88661ae34d3,
          mid_round_7bd2126e67defb15,
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
