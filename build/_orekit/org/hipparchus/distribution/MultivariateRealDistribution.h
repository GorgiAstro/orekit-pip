#ifndef org_hipparchus_distribution_MultivariateRealDistribution_H
#define org_hipparchus_distribution_MultivariateRealDistribution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {

      class MultivariateRealDistribution : public ::java::lang::Object {
       public:
        enum {
          mid_density_9dc1ec0bcc0a9a29,
          mid_getDimension_570ce0828f81a2c1,
          mid_reseedRandomGenerator_3a8e7649f31fdb20,
          mid_sample_60c7040667a7dc5c,
          mid_sample_d3e8f395184a4338,
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
