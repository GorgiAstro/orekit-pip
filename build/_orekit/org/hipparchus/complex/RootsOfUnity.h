#ifndef org_hipparchus_complex_RootsOfUnity_H
#define org_hipparchus_complex_RootsOfUnity_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class RootsOfUnity : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_computeRoots_44ed599e93e8a30c,
          mid_getImaginary_2afcbc21f4e57ab2,
          mid_getNumberOfRoots_55546ef6a647f39b,
          mid_getReal_2afcbc21f4e57ab2,
          mid_isCounterClockWise_9ab94ac1dc23b105,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RootsOfUnity(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RootsOfUnity(const RootsOfUnity& obj) : ::java::lang::Object(obj) {}

        RootsOfUnity();

        void computeRoots(jint) const;
        jdouble getImaginary(jint) const;
        jint getNumberOfRoots() const;
        jdouble getReal(jint) const;
        jboolean isCounterClockWise() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(RootsOfUnity);
      extern PyTypeObject *PY_TYPE(RootsOfUnity);

      class t_RootsOfUnity {
      public:
        PyObject_HEAD
        RootsOfUnity object;
        static PyObject *wrap_Object(const RootsOfUnity&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
