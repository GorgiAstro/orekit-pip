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
          mid_density_f05cb8c6dfd5e0b9,
          mid_getDimension_f2f64475e4580546,
          mid_reseedRandomGenerator_fefb08975c10f0a1,
          mid_sample_7cdc325af0834901,
          mid_sample_01d6404243df74a0,
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
