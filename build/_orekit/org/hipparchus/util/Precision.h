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
          mid_compareTo_fe0b1fbd10d11831,
          mid_compareTo_1357e77796432e28,
          mid_equals_a836bdf37f582c99,
          mid_equals_6895c32540f5864b,
          mid_equals_15ea3a7b52896f96,
          mid_equals_7d6ea926035b2c2b,
          mid_equals_cc8c7ed1bd223bbd,
          mid_equals_0c1ced09367e9d20,
          mid_equalsIncludingNaN_a836bdf37f582c99,
          mid_equalsIncludingNaN_6895c32540f5864b,
          mid_equalsIncludingNaN_15ea3a7b52896f96,
          mid_equalsIncludingNaN_cc8c7ed1bd223bbd,
          mid_equalsIncludingNaN_7d6ea926035b2c2b,
          mid_equalsIncludingNaN_0c1ced09367e9d20,
          mid_equalsWithRelativeTolerance_15ea3a7b52896f96,
          mid_isMathematicalInteger_e18fb1101b70dcca,
          mid_isMathematicalInteger_17deb5e1968726fd,
          mid_representableDelta_824133ce4aec3505,
          mid_round_bcad94b64f1e2dd8,
          mid_round_7206cd26f5dcc2c0,
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
