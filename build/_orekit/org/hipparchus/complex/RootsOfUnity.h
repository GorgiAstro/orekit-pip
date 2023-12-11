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
          mid_init$_0640e6acf969ed28,
          mid_computeRoots_a3da1a935cb37f7b,
          mid_getImaginary_69cfb132c661aca4,
          mid_getNumberOfRoots_412668abc8d889e9,
          mid_getReal_69cfb132c661aca4,
          mid_isCounterClockWise_89b302893bdbe1f1,
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
