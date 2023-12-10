#ifndef org_hipparchus_util_ArithmeticUtils_H
#define org_hipparchus_util_ArithmeticUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
          mid_addAndCheck_819f91eddf220c5b,
          mid_addAndCheck_fe4804b67425641b,
          mid_divideUnsigned_819f91eddf220c5b,
          mid_divideUnsigned_fe4804b67425641b,
          mid_gcd_819f91eddf220c5b,
          mid_gcd_fe4804b67425641b,
          mid_isPowerOfTwo_31b8f662f1e63743,
          mid_lcm_819f91eddf220c5b,
          mid_lcm_fe4804b67425641b,
          mid_mulAndCheck_819f91eddf220c5b,
          mid_mulAndCheck_fe4804b67425641b,
          mid_pow_819f91eddf220c5b,
          mid_pow_559895cd752223b6,
          mid_remainderUnsigned_819f91eddf220c5b,
          mid_remainderUnsigned_fe4804b67425641b,
          mid_subAndCheck_819f91eddf220c5b,
          mid_subAndCheck_fe4804b67425641b,
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
