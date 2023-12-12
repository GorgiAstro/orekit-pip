#ifndef org_hipparchus_random_RandomDataGenerator_H
#define org_hipparchus_random_RandomDataGenerator_H

#include "org/hipparchus/random/ForwardingRandomGenerator.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class RealDistribution;
      class IntegerDistribution;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_3cd6a6b354c6aa22,
          mid_nextBeta_2268d18be49a6087,
          mid_nextDeviate_769ab1e031b83fa6,
          mid_nextDeviate_e2283b5af8ea84db,
          mid_nextDeviates_3885143c3870d976,
          mid_nextDeviates_266304a22b47de3b,
          mid_nextExponential_7e960cd6eee376d8,
          mid_nextGamma_2268d18be49a6087,
          mid_nextHexString_0f10d4a5e06f61c0,
          mid_nextInt_5625cf3db98dadc1,
          mid_nextLogNormal_2268d18be49a6087,
          mid_nextLong_c18ab8eab0c49f84,
          mid_nextNormal_2268d18be49a6087,
          mid_nextPermutation_e2b10810209e9407,
          mid_nextPoisson_abbeb9db7144ca23,
          mid_nextSample_07b003307208ca7c,
          mid_nextSample_e1c657623dd8ba44,
          mid_nextSampleWithReplacement_d36a547e4410f3b1,
          mid_nextUniform_2268d18be49a6087,
          mid_nextZipf_36a7cf95cc3d8465,
          mid_of_9bdc5c0c9ae623bb,
          mid_delegate_94b7a5da78ee3cfb,
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
