#ifndef org_hipparchus_util_OpenIntToFieldHashMap_H
#define org_hipparchus_util_OpenIntToFieldHashMap_H

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
      class OpenIntToFieldHashMap$Iterator;
    }
    class Field;
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class OpenIntToFieldHashMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_484998d88974267b,
          mid_init$_c5199de6167cff95,
          mid_init$_e25fb577c07a9ba7,
          mid_init$_cd3ef8f900d4dc86,
          mid_containsKey_b6e9be1df30aebaf,
          mid_get_ffcdb6600dc6671a,
          mid_iterator_8894aa9b322ecaa1,
          mid_put_00153cfbaed9aaab,
          mid_remove_ffcdb6600dc6671a,
          mid_size_570ce0828f81a2c1,
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
