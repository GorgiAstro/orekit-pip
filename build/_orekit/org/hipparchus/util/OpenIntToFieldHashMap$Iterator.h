#ifndef org_hipparchus_util_OpenIntToFieldHashMap$Iterator_H
#define org_hipparchus_util_OpenIntToFieldHashMap$Iterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class NoSuchElementException;
    class ConcurrentModificationException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class OpenIntToFieldHashMap$Iterator : public ::java::lang::Object {
       public:
        enum {
          mid_advance_a1fa5dae97ea5ed2,
          mid_hasNext_9ab94ac1dc23b105,
          mid_key_55546ef6a647f39b,
          mid_value_2ff8de927fda4153,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenIntToFieldHashMap$Iterator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenIntToFieldHashMap$Iterator(const OpenIntToFieldHashMap$Iterator& obj) : ::java::lang::Object(obj) {}

        void advance() const;
        jboolean hasNext() const;
        jint key() const;
        ::org::hipparchus::FieldElement value() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(OpenIntToFieldHashMap$Iterator);
      extern PyTypeObject *PY_TYPE(OpenIntToFieldHashMap$Iterator);

      class t_OpenIntToFieldHashMap$Iterator {
      public:
        PyObject_HEAD
        OpenIntToFieldHashMap$Iterator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OpenIntToFieldHashMap$Iterator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OpenIntToFieldHashMap$Iterator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OpenIntToFieldHashMap$Iterator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
