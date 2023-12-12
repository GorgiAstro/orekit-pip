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
          mid_getKey_3cffd47377eca18a,
          mid_getValue_41762fd4377ff26e,
          mid_increment_cc18240f4a737f14,
          mid_increment_5d9c9afaca2e497c,
          mid_scaledIncrement_dbfb7d53d6018f6f,
          mid_scaledIncrement_14f13c9f5bb765bd,
          mid_size_412668abc8d889e9,
          mid_zero_0640e6acf969ed28,
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
