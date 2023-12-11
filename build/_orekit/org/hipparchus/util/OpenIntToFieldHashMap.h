#ifndef org_hipparchus_util_OpenIntToFieldHashMap_H
#define org_hipparchus_util_OpenIntToFieldHashMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace util {
      class OpenIntToFieldHashMap$Iterator;
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

      class OpenIntToFieldHashMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_979ae7f57a96b096,
          mid_init$_f89bf3117923cd08,
          mid_init$_6f1578ee31ccd8c3,
          mid_init$_8b7c131480992c2c,
          mid_containsKey_e034cac2b514bb09,
          mid_get_d40ba91356b6a058,
          mid_iterator_e76c4abc68603aad,
          mid_put_06c2173622ecd7b1,
          mid_remove_d40ba91356b6a058,
          mid_size_412668abc8d889e9,
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
