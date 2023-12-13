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
          mid_bellNumber_f4947a88f79e0725,
          mid_binomialCoefficient_86fb9ef85bc94662,
          mid_binomialCoefficientDouble_cad98089d00f8a5b,
          mid_binomialCoefficientLog_cad98089d00f8a5b,
          mid_checkBinomial_3313c75e3e16c428,
          mid_combinationsIterator_39d5da9b3f886b53,
          mid_factorial_f4947a88f79e0725,
          mid_factorialDouble_2afcbc21f4e57ab2,
          mid_factorialLog_2afcbc21f4e57ab2,
          mid_partitions_b6d6fcabc14abaa4,
          mid_permutations_b6d6fcabc14abaa4,
          mid_stirlingS2_86fb9ef85bc94662,
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
