#ifndef org_hipparchus_complex_ComplexComparator_H
#define org_hipparchus_complex_ComplexComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class ComplexComparator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_compare_cc2703681edf5a92,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexComparator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexComparator(const ComplexComparator& obj) : ::java::lang::Object(obj) {}

        ComplexComparator();

        jint compare(const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(ComplexComparator);
      extern PyTypeObject *PY_TYPE(ComplexComparator);

      class t_ComplexComparator {
      public:
        PyObject_HEAD
        ComplexComparator object;
        static PyObject *wrap_Object(const ComplexComparator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
