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
    namespace util {
      class Binary64Field;
      class Binary64;
    }
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Binary64Field : public ::java::lang::Object {
       public:
        enum {
          mid_equals_460c5e2d9d51c6cc,
          mid_getInstance_dab962c4ddcd5467,
          mid_getOne_08945ef61eb92dcf,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getZero_08945ef61eb92dcf,
          mid_hashCode_55546ef6a647f39b,
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
