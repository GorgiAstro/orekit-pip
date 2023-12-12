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
          mid_compareTo_8c41898dd55a0b95,
          mid_compareTo_29539668bec8cd85,
          mid_equals_41fce65646328eb2,
          mid_equals_2a221b5baaa0955c,
          mid_equals_3d7c70c33c048085,
          mid_equals_23603f2315ce5fae,
          mid_equals_2c39a2d35f848747,
          mid_equals_eb0e1b6856ae2529,
          mid_equalsIncludingNaN_41fce65646328eb2,
          mid_equalsIncludingNaN_2a221b5baaa0955c,
          mid_equalsIncludingNaN_3d7c70c33c048085,
          mid_equalsIncludingNaN_2c39a2d35f848747,
          mid_equalsIncludingNaN_23603f2315ce5fae,
          mid_equalsIncludingNaN_eb0e1b6856ae2529,
          mid_equalsWithRelativeTolerance_3d7c70c33c048085,
          mid_isMathematicalInteger_dd69c3ab2404bb71,
          mid_isMathematicalInteger_2637f4d79297c2ad,
          mid_representableDelta_2268d18be49a6087,
          mid_round_156ae9d72f1c8533,
          mid_round_ef306825a01b4f72,
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
