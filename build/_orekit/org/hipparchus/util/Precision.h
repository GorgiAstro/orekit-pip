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
          mid_compareTo_5dea0bf915a3ae84,
          mid_compareTo_0215a2b3b6aee269,
          mid_equals_0fc66ee74538f12c,
          mid_equals_9ad490520fb0d9af,
          mid_equals_de33958d3e7816c8,
          mid_equals_39bf7eda27428270,
          mid_equals_f3017b7c37839e10,
          mid_equals_c9b26a4cbcab220f,
          mid_equalsIncludingNaN_0fc66ee74538f12c,
          mid_equalsIncludingNaN_9ad490520fb0d9af,
          mid_equalsIncludingNaN_de33958d3e7816c8,
          mid_equalsIncludingNaN_f3017b7c37839e10,
          mid_equalsIncludingNaN_39bf7eda27428270,
          mid_equalsIncludingNaN_c9b26a4cbcab220f,
          mid_equalsWithRelativeTolerance_de33958d3e7816c8,
          mid_isMathematicalInteger_7bc657d327f0f830,
          mid_isMathematicalInteger_b6aee6d092d77be8,
          mid_representableDelta_82f92590f4247da1,
          mid_round_988810e80d644418,
          mid_round_52c941e30b3f23b6,
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
