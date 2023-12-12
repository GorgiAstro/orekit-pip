#ifndef org_hipparchus_distribution_MultivariateRealDistribution_H
#define org_hipparchus_distribution_MultivariateRealDistribution_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {

      class MultivariateRealDistribution : public ::java::lang::Object {
       public:
        enum {
          mid_density_86c4a0582e0747ce,
          mid_getDimension_412668abc8d889e9,
          mid_reseedRandomGenerator_3cd6a6b354c6aa22,
          mid_sample_a53a7513ecedada2,
          mid_sample_ace8110626df0bb8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultivariateRealDistribution(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultivariateRealDistribution(const MultivariateRealDistribution& obj) : ::java::lang::Object(obj) {}

        jdouble density(const JArray< jdouble > &) const;
        jint getDimension() const;
        void reseedRandomGenerator(jlong) const;
        JArray< jdouble > sample() const;
        JArray< JArray< jdouble > > sample(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      extern PyType_Def PY_TYPE_DEF(MultivariateRealDistribution);
      extern PyTypeObject *PY_TYPE(MultivariateRealDistribution);

      class t_MultivariateRealDistribution {
      public:
        PyObject_HEAD
        MultivariateRealDistribution object;
        static PyObject *wrap_Object(const MultivariateRealDistribution&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
