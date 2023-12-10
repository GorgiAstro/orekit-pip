#ifndef org_hipparchus_random_RandomDataGenerator_H
#define org_hipparchus_random_RandomDataGenerator_H

#include "org/hipparchus/random/ForwardingRandomGenerator.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class IntegerDistribution;
      class RealDistribution;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomGenerator;
      class RandomDataGenerator;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class RandomDataGenerator : public ::org::hipparchus::random::ForwardingRandomGenerator {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_3a8e7649f31fdb20,
          mid_nextBeta_86ffecc08a63eff0,
          mid_nextDeviate_920595bf12cadb2a,
          mid_nextDeviate_a601ec4de303a373,
          mid_nextDeviates_0ffb852e66a0db85,
          mid_nextDeviates_14efafc24c1489a9,
          mid_nextExponential_dcbc7ce2902fa136,
          mid_nextGamma_86ffecc08a63eff0,
          mid_nextHexString_8cc8a10236476f23,
          mid_nextInt_819f91eddf220c5b,
          mid_nextLogNormal_86ffecc08a63eff0,
          mid_nextLong_fe4804b67425641b,
          mid_nextNormal_86ffecc08a63eff0,
          mid_nextPermutation_f2bc73ddcd6acde6,
          mid_nextPoisson_4508852644846c83,
          mid_nextSample_118f9c80345bfb12,
          mid_nextSample_c53357cdb1932b75,
          mid_nextSampleWithReplacement_0e70f0fa1a405a85,
          mid_nextUniform_86ffecc08a63eff0,
          mid_nextZipf_687d91bbad5d613d,
          mid_of_f9e719b4bf1a1b8c,
          mid_delegate_cf774856d74e158c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RandomDataGenerator(jobject obj) : ::org::hipparchus::random::ForwardingRandomGenerator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RandomDataGenerator(const RandomDataGenerator& obj) : ::org::hipparchus::random::ForwardingRandomGenerator(obj) {}

        RandomDataGenerator();
        RandomDataGenerator(jlong);

        jdouble nextBeta(jdouble, jdouble) const;
        jint nextDeviate(const ::org::hipparchus::distribution::IntegerDistribution &) const;
        jdouble nextDeviate(const ::org::hipparchus::distribution::RealDistribution &) const;
        JArray< jint > nextDeviates(const ::org::hipparchus::distribution::IntegerDistribution &, jint) const;
        JArray< jdouble > nextDeviates(const ::org::hipparchus::distribution::RealDistribution &, jint) const;
        jdouble nextExponential(jdouble) const;
        jdouble nextGamma(jdouble, jdouble) const;
        ::java::lang::String nextHexString(jint) const;
        jint nextInt(jint, jint) const;
        jdouble nextLogNormal(jdouble, jdouble) const;
        jlong nextLong(jlong, jlong) const;
        jdouble nextNormal(jdouble, jdouble) const;
        JArray< jint > nextPermutation(jint, jint) const;
        jint nextPoisson(jdouble) const;
        JArray< jdouble > nextSample(const JArray< jdouble > &, jint) const;
        JArray< ::java::lang::Object > nextSample(const ::java::util::Collection &, jint) const;
        JArray< jint > nextSampleWithReplacement(jint, const JArray< jdouble > &) const;
        jdouble nextUniform(jdouble, jdouble) const;
        jint nextZipf(jint, jdouble) const;
        static RandomDataGenerator of(const ::org::hipparchus::random::RandomGenerator &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(RandomDataGenerator);
      extern PyTypeObject *PY_TYPE(RandomDataGenerator);

      class t_RandomDataGenerator {
      public:
        PyObject_HEAD
        RandomDataGenerator object;
        static PyObject *wrap_Object(const RandomDataGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
