#ifndef org_hipparchus_random_SobolSequenceGenerator_H
#define org_hipparchus_random_SobolSequenceGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class SobolSequenceGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_44ed599e93e8a30c,
          mid_init$_b55216ccbedaec84,
          mid_getNextIndex_55546ef6a647f39b,
          mid_nextVector_25e1757a36c4dde2,
          mid_skipTo_bb2a44a76ad252f7,
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
