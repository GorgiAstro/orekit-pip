#ifndef org_hipparchus_random_HaltonSequenceGenerator_H
#define org_hipparchus_random_HaltonSequenceGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomVectorGenerator;
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
    namespace random {

      class HaltonSequenceGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_99803b0791f320ff,
          mid_init$_fa9f4aaeaae33a98,
          mid_getNextIndex_570ce0828f81a2c1,
          mid_nextVector_60c7040667a7dc5c,
          mid_skipTo_abe82da4f5c7c981,
          mid_scramble_0e188a513e3e1b15,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HaltonSequenceGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HaltonSequenceGenerator(const HaltonSequenceGenerator& obj) : ::java::lang::Object(obj) {}

        HaltonSequenceGenerator(jint);
        HaltonSequenceGenerator(jint, const JArray< jint > &, const JArray< jint > &);

        jint getNextIndex() const;
        JArray< jdouble > nextVector() const;
        JArray< jdouble > skipTo(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(HaltonSequenceGenerator);
      extern PyTypeObject *PY_TYPE(HaltonSequenceGenerator);

      class t_HaltonSequenceGenerator {
      public:
        PyObject_HEAD
        HaltonSequenceGenerator object;
        static PyObject *wrap_Object(const HaltonSequenceGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
