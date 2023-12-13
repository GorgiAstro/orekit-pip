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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_8ba9fe7a847cecad,
          mid_init$_44ed599e93e8a30c,
          mid_init$_d5322b8b512aeb26,
          mid_containsKey_96f51a3f36d3a2a7,
          mid_get_2afcbc21f4e57ab2,
          mid_iterator_814de4da7c72b3ee,
          mid_put_98e10c261c066ee7,
          mid_remove_2afcbc21f4e57ab2,
          mid_size_55546ef6a647f39b,
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
