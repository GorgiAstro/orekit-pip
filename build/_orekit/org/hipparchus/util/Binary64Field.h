#ifndef org_hipparchus_util_Binary64Field_H
#define org_hipparchus_util_Binary64Field_H

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
    class Field;
    namespace util {
      class Binary64;
      class Binary64Field;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Binary64Field : public ::java::lang::Object {
       public:
        enum {
          mid_equals_221e8e85cb385209,
          mid_getInstance_7ba053ac589e30fa,
          mid_getOne_2ca6539856dec86f,
          mid_getRuntimeClass_d4b191ff8147475d,
          mid_getZero_2ca6539856dec86f,
          mid_hashCode_412668abc8d889e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Binary64Field(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Binary64Field(const Binary64Field& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static Binary64Field getInstance();
        ::org::hipparchus::util::Binary64 getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::util::Binary64 getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Binary64Field);
      extern PyTypeObject *PY_TYPE(Binary64Field);

      class t_Binary64Field {
      public:
        PyObject_HEAD
        Binary64Field object;
        static PyObject *wrap_Object(const Binary64Field&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
