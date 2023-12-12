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
          mid_init$_0640e6acf969ed28,
          mid_init$_10f281d777284cea,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_89aad365fb0ed8da,
          mid_containsKey_e034cac2b514bb09,
          mid_get_69cfb132c661aca4,
          mid_iterator_3909216f0040655d,
          mid_put_77f9e227e4cf04b4,
          mid_remove_69cfb132c661aca4,
          mid_size_412668abc8d889e9,
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
