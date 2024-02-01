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
          mid_init$_ff7cb6c242604316,
          mid_init$_8fd427ab23829bf5,
          mid_init$_df2bb61624910c2a,
          mid_clear_ff7cb6c242604316,
          mid_get_4bbf10387b1a6128,
          mid_getData_d751c1a57012b438,
          mid_getEntry_aec9d34316f710de,
          mid_put_550be97e760e0f22,
          mid_putAll_54f7443473e3aa44,
          mid_putAll_df2bb61624910c2a,
          mid_remove_df4c65b2aede5c41,
          mid_size_d6ab429752e7c267,
          mid_toMap_dbcb8bbac6b35e0d,
          mid_toString_d2c8eb4129821f0e,
          mid_unmodifiableView_c1165b139cc27553,
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
