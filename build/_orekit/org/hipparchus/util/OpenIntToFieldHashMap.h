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
          mid_init$_02ab84aa7626616d,
          mid_init$_9127f23cedcce237,
          mid_init$_937cc4000c29b170,
          mid_init$_d0202e5a9d07b52f,
          mid_containsKey_96f51a3f36d3a2a7,
          mid_get_6c5caf579ccf9ce5,
          mid_iterator_aa811963c8992453,
          mid_put_475a3dc033b0d5a5,
          mid_remove_6c5caf579ccf9ce5,
          mid_size_55546ef6a647f39b,
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
