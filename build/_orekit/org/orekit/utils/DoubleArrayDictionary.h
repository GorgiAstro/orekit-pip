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
      class DoubleArrayDictionary$Entry;
      class DoubleArrayDictionary;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_44ed599e93e8a30c,
          mid_init$_6648520b18d8ef1d,
          mid_clear_a1fa5dae97ea5ed2,
          mid_get_1d7f5d54f6c58f85,
          mid_getData_e62d3bb06d56d7e3,
          mid_getEntry_c60933ca2e34a5f9,
          mid_put_6fb36758267c5870,
          mid_putAll_70dc9a5517cb372a,
          mid_putAll_6648520b18d8ef1d,
          mid_remove_cde6b28e15c96b75,
          mid_size_55546ef6a647f39b,
          mid_toMap_810bed48fafb0b9a,
          mid_toString_1c1fa1e935d6cdcf,
          mid_unmodifiableView_7e78a9fc753e1e5a,
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
