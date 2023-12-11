#ifndef org_orekit_utils_DoubleArrayDictionary_H
#define org_orekit_utils_DoubleArrayDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class DoubleArrayDictionary;
      class DoubleArrayDictionary$Entry;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class DoubleArrayDictionary : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_6ba01303bcce0307,
          mid_clear_0640e6acf969ed28,
          mid_get_008e0cff49b0ec83,
          mid_getData_0d9551367f7ecdef,
          mid_getEntry_42f94031f6bfb94c,
          mid_put_7d8c14f144e3f080,
          mid_putAll_4df10196e6ff77db,
          mid_putAll_6ba01303bcce0307,
          mid_remove_fd2162b8a05a22fe,
          mid_size_412668abc8d889e9,
          mid_toMap_1e62c2f73fbdd1c4,
          mid_toString_3cffd47377eca18a,
          mid_unmodifiableView_408230a61ade575e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DoubleArrayDictionary(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DoubleArrayDictionary(const DoubleArrayDictionary& obj) : ::java::lang::Object(obj) {}

        DoubleArrayDictionary();
        DoubleArrayDictionary(jint);
        DoubleArrayDictionary(const ::java::util::Map &);

        void clear() const;
        JArray< jdouble > get$(const ::java::lang::String &) const;
        ::java::util::List getData() const;
        ::org::orekit::utils::DoubleArrayDictionary$Entry getEntry(const ::java::lang::String &) const;
        void put(const ::java::lang::String &, const JArray< jdouble > &) const;
        void putAll(const DoubleArrayDictionary &) const;
        void putAll(const ::java::util::Map &) const;
        jboolean remove(const ::java::lang::String &) const;
        jint size() const;
        ::java::util::Map toMap() const;
        ::java::lang::String toString() const;
        DoubleArrayDictionary unmodifiableView() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(DoubleArrayDictionary);
      extern PyTypeObject *PY_TYPE(DoubleArrayDictionary);

      class t_DoubleArrayDictionary {
      public:
        PyObject_HEAD
        DoubleArrayDictionary object;
        static PyObject *wrap_Object(const DoubleArrayDictionary&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
