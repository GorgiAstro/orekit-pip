#ifndef org_hipparchus_util_CombinatoricsUtils_H
#define org_hipparchus_util_CombinatoricsUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    namespace stream {
      class Stream;
    }
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
          mid_bellNumber_3453f750066710ab,
          mid_binomialCoefficient_038d815c660e2779,
          mid_binomialCoefficientDouble_6d920aab27f0a3d2,
          mid_binomialCoefficientLog_6d920aab27f0a3d2,
          mid_checkBinomial_b5d23e6c0858e8ed,
          mid_combinationsIterator_952e72b43add17d6,
          mid_factorial_3453f750066710ab,
          mid_factorialDouble_ce4c02d583456bc9,
          mid_factorialLog_ce4c02d583456bc9,
          mid_partitions_951f9571abe096f0,
          mid_permutations_951f9571abe096f0,
          mid_stirlingS2_038d815c660e2779,
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
