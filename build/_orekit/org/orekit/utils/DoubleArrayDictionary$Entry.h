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
          mid_getKey_1c1fa1e935d6cdcf,
          mid_getValue_25e1757a36c4dde2,
          mid_increment_ab69da052b88f50c,
          mid_scaledIncrement_0ed2f42ee710b1b6,
          mid_size_55546ef6a647f39b,
          mid_zero_a1fa5dae97ea5ed2,
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
