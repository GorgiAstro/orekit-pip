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
          mid_init$_7ae3461a92a43152,
          mid_computeRoots_0a2a1ac2721c0336,
          mid_getImaginary_b772323fc98b7293,
          mid_getNumberOfRoots_f2f64475e4580546,
          mid_getReal_b772323fc98b7293,
          mid_isCounterClockWise_e470b6d9e0d979db,
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
