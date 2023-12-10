#ifndef org_hipparchus_util_OpenIntToDoubleHashMap_H
#define org_hipparchus_util_OpenIntToDoubleHashMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class OpenIntToDoubleHashMap$Iterator;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class OpenIntToDoubleHashMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_17db3a65980d3441,
          mid_init$_99803b0791f320ff,
          mid_init$_bb79ca80d85d0a66,
          mid_containsKey_b6e9be1df30aebaf,
          mid_get_46f85b53d9aedd96,
          mid_iterator_e07c986a341a62c1,
          mid_put_60d7624725a52590,
          mid_remove_46f85b53d9aedd96,
          mid_size_570ce0828f81a2c1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenIntToDoubleHashMap(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenIntToDoubleHashMap(const OpenIntToDoubleHashMap& obj) : ::java::lang::Object(obj) {}

        OpenIntToDoubleHashMap();
        OpenIntToDoubleHashMap(jdouble);
        OpenIntToDoubleHashMap(jint);
        OpenIntToDoubleHashMap(jint, jdouble);

        jboolean containsKey(jint) const;
        jdouble get$(jint) const;
        ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator iterator() const;
        jdouble put(jint, jdouble) const;
        jdouble remove(jint) const;
        jint size() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(OpenIntToDoubleHashMap);
      extern PyTypeObject *PY_TYPE(OpenIntToDoubleHashMap);

      class t_OpenIntToDoubleHashMap {
      public:
        PyObject_HEAD
        OpenIntToDoubleHashMap object;
        static PyObject *wrap_Object(const OpenIntToDoubleHashMap&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
