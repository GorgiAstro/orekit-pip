#ifndef org_hipparchus_complex_ComplexField_H
#define org_hipparchus_complex_ComplexField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class ComplexField;
      class Complex;
    }
    class Field;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class ComplexField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_72faff9b05f5ed5e,
          mid_getInstance_4c88b6ea55d5fcec,
          mid_getOne_847706ebd9444ecb,
          mid_getRuntimeClass_d5247e4b166c4ce8,
          mid_getZero_847706ebd9444ecb,
          mid_hashCode_d6ab429752e7c267,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexField(const ComplexField& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static ComplexField getInstance();
        ::org::hipparchus::complex::Complex getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::complex::Complex getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(ComplexField);
      extern PyTypeObject *PY_TYPE(ComplexField);

      class t_ComplexField {
      public:
        PyObject_HEAD
        ComplexField object;
        static PyObject *wrap_Object(const ComplexField&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
