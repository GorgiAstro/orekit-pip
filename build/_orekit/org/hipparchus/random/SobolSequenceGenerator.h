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
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace random {
      class RandomVectorGenerator;
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
          mid_init$_8fd427ab23829bf5,
          mid_init$_422fe248e9e08df0,
          mid_getNextIndex_d6ab429752e7c267,
          mid_nextVector_be783177b060994b,
          mid_skipTo_81add9fc9d78d5b9,
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
