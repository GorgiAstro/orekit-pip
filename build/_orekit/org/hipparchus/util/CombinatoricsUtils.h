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
          mid_bellNumber_4f6383d3e31ab417,
          mid_binomialCoefficient_1fba9172e7658368,
          mid_binomialCoefficientDouble_21b81d54c06b64b0,
          mid_binomialCoefficientLog_21b81d54c06b64b0,
          mid_checkBinomial_a84c9a223722150c,
          mid_combinationsIterator_cbfaf52b19a80000,
          mid_factorial_4f6383d3e31ab417,
          mid_factorialDouble_69cfb132c661aca4,
          mid_factorialLog_69cfb132c661aca4,
          mid_partitions_525f259082364af5,
          mid_permutations_525f259082364af5,
          mid_stirlingS2_1fba9172e7658368,
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
