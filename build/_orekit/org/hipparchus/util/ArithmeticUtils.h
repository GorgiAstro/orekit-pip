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
          mid_addAndCheck_5625cf3db98dadc1,
          mid_addAndCheck_c18ab8eab0c49f84,
          mid_divideUnsigned_5625cf3db98dadc1,
          mid_divideUnsigned_c18ab8eab0c49f84,
          mid_gcd_5625cf3db98dadc1,
          mid_gcd_c18ab8eab0c49f84,
          mid_isPowerOfTwo_9848db5862ba9934,
          mid_lcm_5625cf3db98dadc1,
          mid_lcm_c18ab8eab0c49f84,
          mid_mulAndCheck_5625cf3db98dadc1,
          mid_mulAndCheck_c18ab8eab0c49f84,
          mid_pow_5625cf3db98dadc1,
          mid_pow_974ee1cf526db4b7,
          mid_remainderUnsigned_5625cf3db98dadc1,
          mid_remainderUnsigned_c18ab8eab0c49f84,
          mid_subAndCheck_5625cf3db98dadc1,
          mid_subAndCheck_c18ab8eab0c49f84,
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
