#ifndef org_hipparchus_util_Binary64Field_H
#define org_hipparchus_util_Binary64Field_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Binary64;
      class Binary64Field;
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
    namespace util {

      class Binary64Field : public ::java::lang::Object {
       public:
        enum {
          mid_equals_72faff9b05f5ed5e,
          mid_getInstance_c02fa34c78bdb138,
          mid_getOne_8fcc6c2abdbc3ba7,
          mid_getRuntimeClass_d5247e4b166c4ce8,
          mid_getZero_8fcc6c2abdbc3ba7,
          mid_hashCode_d6ab429752e7c267,
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
