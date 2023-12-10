#ifndef org_hipparchus_util_CombinatoricsUtils_H
#define org_hipparchus_util_CombinatoricsUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class CombinatoricsUtils : public ::java::lang::Object {
       public:
        enum {
          mid_bellNumber_3f523e51b2989e1f,
          mid_binomialCoefficient_c8198fb6cafc4f66,
          mid_binomialCoefficientDouble_a84e4ee1da3f1ab8,
          mid_binomialCoefficientLog_a84e4ee1da3f1ab8,
          mid_checkBinomial_8dbc1129a3c2557a,
          mid_combinationsIterator_3ea7f5e4233fdf2d,
          mid_factorial_3f523e51b2989e1f,
          mid_factorialDouble_b772323fc98b7293,
          mid_factorialLog_b772323fc98b7293,
          mid_partitions_3399c247d1137cbd,
          mid_permutations_3399c247d1137cbd,
          mid_stirlingS2_c8198fb6cafc4f66,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CombinatoricsUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CombinatoricsUtils(const CombinatoricsUtils& obj) : ::java::lang::Object(obj) {}

        static jint MAX_BELL;

        static jlong bellNumber(jint);
        static jlong binomialCoefficient(jint, jint);
        static jdouble binomialCoefficientDouble(jint, jint);
        static jdouble binomialCoefficientLog(jint, jint);
        static void checkBinomial(jint, jint);
        static ::java::util::Iterator combinationsIterator(jint, jint);
        static jlong factorial(jint);
        static jdouble factorialDouble(jint);
        static jdouble factorialLog(jint);
        static ::java::util::stream::Stream partitions(const ::java::util::List &);
        static ::java::util::stream::Stream permutations(const ::java::util::List &);
        static jlong stirlingS2(jint, jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(CombinatoricsUtils);
      extern PyTypeObject *PY_TYPE(CombinatoricsUtils);

      class t_CombinatoricsUtils {
      public:
        PyObject_HEAD
        CombinatoricsUtils object;
        static PyObject *wrap_Object(const CombinatoricsUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
