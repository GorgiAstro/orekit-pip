#ifndef org_orekit_utils_FieldArrayDictionary$Entry_H
#define org_orekit_utils_FieldArrayDictionary$Entry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldArrayDictionary$Entry;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldArrayDictionary$Entry : public ::java::lang::Object {
       public:
        enum {
          mid_getKey_11b109bd155ca898,
          mid_getValue_226a0b2040b1d2e1,
          mid_increment_fa9d415d19f69361,
          mid_increment_72479ee08453ef97,
          mid_scaledIncrement_e8aab7eadc3b7dd1,
          mid_scaledIncrement_4f7734e82d1e0818,
          mid_size_570ce0828f81a2c1,
          mid_zero_0fa09c18fee449d5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldArrayDictionary$Entry(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldArrayDictionary$Entry(const FieldArrayDictionary$Entry& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getKey() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getValue() const;
        void increment(const JArray< jdouble > &) const;
        void increment(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        void scaledIncrement(jdouble, const FieldArrayDictionary$Entry &) const;
        void scaledIncrement(const ::org::hipparchus::CalculusFieldElement &, const FieldArrayDictionary$Entry &) const;
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
      extern PyType_Def PY_TYPE_DEF(FieldArrayDictionary$Entry);
      extern PyTypeObject *PY_TYPE(FieldArrayDictionary$Entry);

      class t_FieldArrayDictionary$Entry {
      public:
        PyObject_HEAD
        FieldArrayDictionary$Entry object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldArrayDictionary$Entry *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldArrayDictionary$Entry&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldArrayDictionary$Entry&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
