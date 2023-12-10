#ifndef org_orekit_utils_DoubleArrayDictionary_H
#define org_orekit_utils_DoubleArrayDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class DoubleArrayDictionary;
      class DoubleArrayDictionary$Entry;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class DoubleArrayDictionary : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_8b4e3987d7532731,
          mid_clear_7ae3461a92a43152,
          mid_get_5fc57a69c973af17,
          mid_getData_a6156df500549a58,
          mid_getEntry_1ba5861551769af8,
          mid_put_f158fe1c5def0235,
          mid_putAll_78912f25ca84a166,
          mid_putAll_8b4e3987d7532731,
          mid_remove_6b161f495ea569b8,
          mid_size_f2f64475e4580546,
          mid_toMap_d6753b7055940a54,
          mid_toString_0090f7797e403f43,
          mid_unmodifiableView_08f613b585562583,
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
