#ifndef org_hipparchus_random_SobolSequenceGenerator_H
#define org_hipparchus_random_SobolSequenceGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class SobolSequenceGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_init$_f9ea0f24af142461,
          mid_getNextIndex_412668abc8d889e9,
          mid_nextVector_a53a7513ecedada2,
          mid_skipTo_1da5c9e77f24f269,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SobolSequenceGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SobolSequenceGenerator(const SobolSequenceGenerator& obj) : ::java::lang::Object(obj) {}

        SobolSequenceGenerator(jint);
        SobolSequenceGenerator(jint, const ::java::io::InputStream &);

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
      extern PyType_Def PY_TYPE_DEF(SobolSequenceGenerator);
      extern PyTypeObject *PY_TYPE(SobolSequenceGenerator);

      class t_SobolSequenceGenerator {
      public:
        PyObject_HEAD
        SobolSequenceGenerator object;
        static PyObject *wrap_Object(const SobolSequenceGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
