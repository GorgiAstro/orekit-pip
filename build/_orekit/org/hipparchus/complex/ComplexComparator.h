#ifndef org_hipparchus_complex_ComplexComparator_H
#define org_hipparchus_complex_ComplexComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class ComplexComparator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_compare_ce3ead336054d6ed,
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
