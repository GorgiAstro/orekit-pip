#ifndef org_hipparchus_random_RandomDataGenerator_H
#define org_hipparchus_random_RandomDataGenerator_H

#include "org/hipparchus/random/ForwardingRandomGenerator.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class IntegerDistribution;
      class RealDistribution;
    }
    namespace random {
      class RandomGenerator;
      class RandomDataGenerator;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_3d7dd2314a0dd456,
          mid_nextBeta_99e3200dafc19573,
          mid_nextDeviate_5fecc2a42e661b90,
          mid_nextDeviate_a0bd8115919ecebe,
          mid_nextDeviates_c9813930cbc8e412,
          mid_nextDeviates_d2c3d2f05bc19854,
          mid_nextExponential_04fd0666b613d2ab,
          mid_nextGamma_99e3200dafc19573,
          mid_nextHexString_2a9bffd3d5397f7c,
          mid_nextInt_92ecd94558bf0c68,
          mid_nextLogNormal_99e3200dafc19573,
          mid_nextLong_8f345e4204401ff5,
          mid_nextNormal_99e3200dafc19573,
          mid_nextPermutation_56647843f75c9c90,
          mid_nextPoisson_2af4736545087009,
          mid_nextSample_fdbebc837979003b,
          mid_nextSample_fa2fc463781cf6fd,
          mid_nextSampleWithReplacement_d70eda2deeff41f6,
          mid_nextUniform_99e3200dafc19573,
          mid_nextZipf_008fbfbfedda2d57,
          mid_of_d585beb78f2e2564,
          mid_delegate_9c758ae03d1b398a,
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
