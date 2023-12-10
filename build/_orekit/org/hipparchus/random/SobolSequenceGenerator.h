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
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
          mid_init$_99803b0791f320ff,
          mid_init$_550926389ea2217c,
          mid_getNextIndex_570ce0828f81a2c1,
          mid_nextVector_60c7040667a7dc5c,
          mid_skipTo_abe82da4f5c7c981,
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
