#ifndef org_orekit_utils_DoubleArrayDictionary$Entry_H
#define org_orekit_utils_DoubleArrayDictionary$Entry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class DoubleArrayDictionary$Entry;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class DoubleArrayDictionary$Entry : public ::java::lang::Object {
       public:
        enum {
          mid_getKey_11b109bd155ca898,
          mid_getValue_60c7040667a7dc5c,
          mid_increment_fa9d415d19f69361,
          mid_scaledIncrement_af50fa6eed2131d6,
          mid_size_570ce0828f81a2c1,
          mid_zero_0fa09c18fee449d5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DoubleArrayDictionary$Entry(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DoubleArrayDictionary$Entry(const DoubleArrayDictionary$Entry& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getKey() const;
        JArray< jdouble > getValue() const;
        void increment(const JArray< jdouble > &) const;
        void scaledIncrement(jdouble, const DoubleArrayDictionary$Entry &) const;
        jint size() const;
        void zero() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(DoubleArrayDictionary$Entry);
      extern PyTypeObject *PY_TYPE(DoubleArrayDictionary$Entry);

      class t_DoubleArrayDictionary$Entry {
      public:
        PyObject_HEAD
        DoubleArrayDictionary$Entry object;
        static PyObject *wrap_Object(const DoubleArrayDictionary$Entry&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
