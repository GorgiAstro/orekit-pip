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
          mid_init$_ff7cb6c242604316,
          mid_init$_1ad26e8c8c0cd65b,
          mid_init$_8fd427ab23829bf5,
          mid_init$_4320462275d66e78,
          mid_containsKey_e24caac814db1df5,
          mid_get_ce4c02d583456bc9,
          mid_iterator_8e10fa69861a3eb8,
          mid_put_5540210c7d309f18,
          mid_remove_ce4c02d583456bc9,
          mid_size_d6ab429752e7c267,
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
