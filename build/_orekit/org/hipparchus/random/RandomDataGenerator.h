#ifndef org_hipparchus_random_RandomDataGenerator_H
#define org_hipparchus_random_RandomDataGenerator_H

#include "org/hipparchus/random/ForwardingRandomGenerator.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class RealDistribution;
      class IntegerDistribution;
    }
    namespace random {
      class RandomDataGenerator;
      class RandomGenerator;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_fefb08975c10f0a1,
          mid_nextBeta_824133ce4aec3505,
          mid_nextDeviate_afbd426079cae25d,
          mid_nextDeviate_3487d38469c40eef,
          mid_nextDeviates_d85d974124d06712,
          mid_nextDeviates_68de39df7386884d,
          mid_nextExponential_0ba5fed9597b693e,
          mid_nextGamma_824133ce4aec3505,
          mid_nextHexString_90cbcc0b7a5ddae9,
          mid_nextInt_d9790ac9eecfe931,
          mid_nextLogNormal_824133ce4aec3505,
          mid_nextLong_8f974216cbe53aea,
          mid_nextNormal_824133ce4aec3505,
          mid_nextPermutation_686233a2ff23e62d,
          mid_nextPoisson_12ebab281ee35c98,
          mid_nextSample_fd1288d34222cfa8,
          mid_nextSample_434ba4f195d5bc3c,
          mid_nextSampleWithReplacement_d16d332e214cc670,
          mid_nextUniform_824133ce4aec3505,
          mid_nextZipf_5051ffc90ba47361,
          mid_of_ad4c3467956fdea8,
          mid_delegate_6c5b70fd21e949cf,
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
