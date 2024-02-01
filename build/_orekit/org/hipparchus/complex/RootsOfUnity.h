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
          mid_init$_ff7cb6c242604316,
          mid_computeRoots_8fd427ab23829bf5,
          mid_getImaginary_ce4c02d583456bc9,
          mid_getNumberOfRoots_d6ab429752e7c267,
          mid_getReal_ce4c02d583456bc9,
          mid_isCounterClockWise_eee3de00fe971136,
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
