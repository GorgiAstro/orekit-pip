#ifndef org_orekit_utils_DoubleArrayDictionary$Entry_H
#define org_orekit_utils_DoubleArrayDictionary$Entry_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class DoubleArrayDictionary$Entry;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class DoubleArrayDictionary$Entry : public ::java::lang::Object {
       public:
        enum {
          mid_getKey_3cffd47377eca18a,
          mid_getValue_a53a7513ecedada2,
          mid_increment_cc18240f4a737f14,
          mid_scaledIncrement_08f180e87df7be95,
          mid_size_412668abc8d889e9,
          mid_zero_0640e6acf969ed28,
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
