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
    class Field;
    namespace util {
      class OpenIntToFieldHashMap$Iterator;
    }
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
          mid_init$_205c34b8e33cf33f,
          mid_init$_a69d58691b2f6a42,
          mid_init$_517fb93f7f6e6810,
          mid_init$_033ffb0d487f5fee,
          mid_containsKey_e95e4c7cd3dd17ff,
          mid_get_5e30662bac3edb02,
          mid_iterator_5bdce533ecf08445,
          mid_put_344984fcd6be0043,
          mid_remove_5e30662bac3edb02,
          mid_size_f2f64475e4580546,
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
