#ifndef org_hipparchus_util_ArithmeticUtils_H
#define org_hipparchus_util_ArithmeticUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
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

      class ArithmeticUtils : public ::java::lang::Object {
       public:
        enum {
          mid_addAndCheck_92ecd94558bf0c68,
          mid_addAndCheck_8f345e4204401ff5,
          mid_divideUnsigned_92ecd94558bf0c68,
          mid_divideUnsigned_8f345e4204401ff5,
          mid_gcd_92ecd94558bf0c68,
          mid_gcd_8f345e4204401ff5,
          mid_isPowerOfTwo_ba9ecb578b8b76e7,
          mid_lcm_92ecd94558bf0c68,
          mid_lcm_8f345e4204401ff5,
          mid_mulAndCheck_92ecd94558bf0c68,
          mid_mulAndCheck_8f345e4204401ff5,
          mid_pow_92ecd94558bf0c68,
          mid_pow_a60a6e0b1c5dfa26,
          mid_remainderUnsigned_92ecd94558bf0c68,
          mid_remainderUnsigned_8f345e4204401ff5,
          mid_subAndCheck_92ecd94558bf0c68,
          mid_subAndCheck_8f345e4204401ff5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ArithmeticUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ArithmeticUtils(const ArithmeticUtils& obj) : ::java::lang::Object(obj) {}

        static jint addAndCheck(jint, jint);
        static jlong addAndCheck(jlong, jlong);
        static jint divideUnsigned(jint, jint);
        static jlong divideUnsigned(jlong, jlong);
        static jint gcd(jint, jint);
        static jlong gcd(jlong, jlong);
        static jboolean isPowerOfTwo(jlong);
        static jint lcm(jint, jint);
        static jlong lcm(jlong, jlong);
        static jint mulAndCheck(jint, jint);
        static jlong mulAndCheck(jlong, jlong);
        static jint pow(jint, jint);
        static jlong pow(jlong, jint);
        static jint remainderUnsigned(jint, jint);
        static jlong remainderUnsigned(jlong, jlong);
        static jint subAndCheck(jint, jint);
        static jlong subAndCheck(jlong, jlong);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(ArithmeticUtils);
      extern PyTypeObject *PY_TYPE(ArithmeticUtils);

      class t_ArithmeticUtils {
      public:
        PyObject_HEAD
        ArithmeticUtils object;
        static PyObject *wrap_Object(const ArithmeticUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
