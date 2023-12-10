#ifndef org_hipparchus_complex_RootsOfUnity_H
#define org_hipparchus_complex_RootsOfUnity_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_init$_0fa09c18fee449d5,
          mid_computeRoots_99803b0791f320ff,
          mid_getImaginary_46f85b53d9aedd96,
          mid_getNumberOfRoots_570ce0828f81a2c1,
          mid_getReal_46f85b53d9aedd96,
          mid_isCounterClockWise_b108b35ef48e27bd,
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
