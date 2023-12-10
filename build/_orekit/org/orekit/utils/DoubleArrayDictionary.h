#ifndef org_orekit_utils_DoubleArrayDictionary_H
#define org_orekit_utils_DoubleArrayDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_99803b0791f320ff,
          mid_init$_db8de8bc54857165,
          mid_clear_0fa09c18fee449d5,
          mid_get_f87e5f45128c2827,
          mid_getData_2afa36052df4765d,
          mid_getEntry_d37496364a361361,
          mid_put_3468fcb7793f51a9,
          mid_putAll_ad36dd55657c3ef8,
          mid_putAll_db8de8bc54857165,
          mid_remove_7edad2c2f64f4d68,
          mid_size_570ce0828f81a2c1,
          mid_toMap_6f5a75ccd8c04465,
          mid_toString_11b109bd155ca898,
          mid_unmodifiableView_17e5408138fe3169,
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
