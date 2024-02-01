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
      class RandomDataGenerator;
      class RandomGenerator;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_f5bbab7e97879358,
          mid_nextBeta_82f92590f4247da1,
          mid_nextDeviate_12d498467a629ebf,
          mid_nextDeviate_6bcd8bfbc38d21be,
          mid_nextDeviates_48e2afafdb86e68d,
          mid_nextDeviates_0feaac7130812e78,
          mid_nextExponential_bf28ed64d6e8576b,
          mid_nextGamma_82f92590f4247da1,
          mid_nextHexString_c81987d6b0e2977a,
          mid_nextInt_91b9e1e34b2235d5,
          mid_nextLogNormal_82f92590f4247da1,
          mid_nextLong_7912418dc9bc44e3,
          mid_nextNormal_82f92590f4247da1,
          mid_nextPermutation_df09de71284be27f,
          mid_nextPoisson_9e72cb20adb363fb,
          mid_nextSample_25f286641019e8d7,
          mid_nextSample_cd578c55e476bd8d,
          mid_nextSampleWithReplacement_bc8c4784b9d33efa,
          mid_nextUniform_82f92590f4247da1,
          mid_nextZipf_505fa41799a2fe2e,
          mid_of_3e68dc7c0bd5b8b8,
          mid_delegate_8e5137c62f6fabd8,
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
