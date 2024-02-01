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
          mid_getKey_d2c8eb4129821f0e,
          mid_getValue_94ed2e0620f8833d,
          mid_increment_a71c45509eaf92d1,
          mid_increment_77e61a645c496adc,
          mid_scaledIncrement_5b1eef69d7e1f6c0,
          mid_scaledIncrement_f40f357b9f6cfe84,
          mid_size_d6ab429752e7c267,
          mid_zero_ff7cb6c242604316,
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
