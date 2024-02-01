#ifndef org_hipparchus_util_OpenIntToFieldHashMap_H
#define org_hipparchus_util_OpenIntToFieldHashMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class OpenIntToFieldHashMap$Iterator;
    }
    class Field;
    class FieldElement;
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

      class OpenIntToFieldHashMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a44abdd035f01345,
          mid_init$_399daf55ca8a95b8,
          mid_init$_caee123f69538f07,
          mid_init$_b83a083268c0872f,
          mid_containsKey_e24caac814db1df5,
          mid_get_bae57aba20797b29,
          mid_iterator_723bd8aa95f35d38,
          mid_put_fafd637e37b17b35,
          mid_remove_bae57aba20797b29,
          mid_size_d6ab429752e7c267,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenIntToFieldHashMap(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenIntToFieldHashMap(const OpenIntToFieldHashMap& obj) : ::java::lang::Object(obj) {}

        OpenIntToFieldHashMap(const ::org::hipparchus::Field &);
        OpenIntToFieldHashMap(const ::org::hipparchus::Field &, jint);
        OpenIntToFieldHashMap(const ::org::hipparchus::Field &, const ::org::hipparchus::FieldElement &);
        OpenIntToFieldHashMap(const ::org::hipparchus::Field &, jint, const ::org::hipparchus::FieldElement &);

        jboolean containsKey(jint) const;
        ::org::hipparchus::FieldElement get$(jint) const;
        ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator iterator() const;
        ::org::hipparchus::FieldElement put(jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::FieldElement remove(jint) const;
        jint size() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(OpenIntToFieldHashMap);
      extern PyTypeObject *PY_TYPE(OpenIntToFieldHashMap);

      class t_OpenIntToFieldHashMap {
      public:
        PyObject_HEAD
        OpenIntToFieldHashMap object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OpenIntToFieldHashMap *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OpenIntToFieldHashMap&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OpenIntToFieldHashMap&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
