#ifndef org_hipparchus_complex_ComplexField_H
#define org_hipparchus_complex_ComplexField_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
      class ComplexField;
    }
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class ComplexField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_65c7d273e80d497a,
          mid_getInstance_f304aeb797b96d24,
          mid_getOne_a6784e0b89dedf02,
          mid_getRuntimeClass_7c16c5008b34b3db,
          mid_getZero_a6784e0b89dedf02,
          mid_hashCode_570ce0828f81a2c1,
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
