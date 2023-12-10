#ifndef org_hipparchus_util_OpenIntToDoubleHashMap_H
#define org_hipparchus_util_OpenIntToDoubleHashMap_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class OpenIntToDoubleHashMap$Iterator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class OpenIntToDoubleHashMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_77e0f9a1f260e2e5,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_987a5fb872043b12,
          mid_containsKey_e95e4c7cd3dd17ff,
          mid_get_b772323fc98b7293,
          mid_iterator_fa62dce97d6cc56a,
          mid_put_31332242d1624d2c,
          mid_remove_b772323fc98b7293,
          mid_size_f2f64475e4580546,
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
