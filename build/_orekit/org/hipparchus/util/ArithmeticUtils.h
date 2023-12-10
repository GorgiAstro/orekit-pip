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
          mid_addAndCheck_d9790ac9eecfe931,
          mid_addAndCheck_8f974216cbe53aea,
          mid_divideUnsigned_d9790ac9eecfe931,
          mid_divideUnsigned_8f974216cbe53aea,
          mid_gcd_d9790ac9eecfe931,
          mid_gcd_8f974216cbe53aea,
          mid_isPowerOfTwo_9560f1672fe5dd29,
          mid_lcm_d9790ac9eecfe931,
          mid_lcm_8f974216cbe53aea,
          mid_mulAndCheck_d9790ac9eecfe931,
          mid_mulAndCheck_8f974216cbe53aea,
          mid_pow_d9790ac9eecfe931,
          mid_pow_1672c32325bd5d4a,
          mid_remainderUnsigned_d9790ac9eecfe931,
          mid_remainderUnsigned_8f974216cbe53aea,
          mid_subAndCheck_d9790ac9eecfe931,
          mid_subAndCheck_8f974216cbe53aea,
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
