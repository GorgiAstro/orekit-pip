#ifndef org_orekit_utils_FieldArrayDictionary_H
#define org_orekit_utils_FieldArrayDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldArrayDictionary$Entry;
      class FieldArrayDictionary;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
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

      class FieldArrayDictionary : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a44abdd035f01345,
          mid_init$_399daf55ca8a95b8,
          mid_init$_789e28cd06c0e3e5,
          mid_clear_ff7cb6c242604316,
          mid_get_9b6ce7af1b312c95,
          mid_getData_d751c1a57012b438,
          mid_getEntry_204a53300bf7e86c,
          mid_getField_577649682b9910c1,
          mid_put_550be97e760e0f22,
          mid_put_2085d8b9a703b33f,
          mid_putAll_fa6f40880035e99f,
          mid_putAll_df2bb61624910c2a,
          mid_remove_df4c65b2aede5c41,
          mid_size_d6ab429752e7c267,
          mid_toMap_dbcb8bbac6b35e0d,
          mid_toString_d2c8eb4129821f0e,
          mid_unmodifiableView_110e6e63d71fe768,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldArrayDictionary(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldArrayDictionary(const FieldArrayDictionary& obj) : ::java::lang::Object(obj) {}

        FieldArrayDictionary(const ::org::hipparchus::Field &);
        FieldArrayDictionary(const ::org::hipparchus::Field &, jint);
        FieldArrayDictionary(const ::org::hipparchus::Field &, const ::java::util::Map &);

        void clear() const;
        JArray< ::org::hipparchus::CalculusFieldElement > get$(const ::java::lang::String &) const;
        ::java::util::List getData() const;
        ::org::orekit::utils::FieldArrayDictionary$Entry getEntry(const ::java::lang::String &) const;
        ::org::hipparchus::Field getField() const;
        void put(const ::java::lang::String &, const JArray< jdouble > &) const;
        void put(const ::java::lang::String &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        void putAll(const FieldArrayDictionary &) const;
        void putAll(const ::java::util::Map &) const;
        jboolean remove(const ::java::lang::String &) const;
        jint size() const;
        ::java::util::Map toMap() const;
        ::java::lang::String toString() const;
        FieldArrayDictionary unmodifiableView() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldArrayDictionary);
      extern PyTypeObject *PY_TYPE(FieldArrayDictionary);

      class t_FieldArrayDictionary {
      public:
        PyObject_HEAD
        FieldArrayDictionary object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldArrayDictionary *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldArrayDictionary&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldArrayDictionary&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
