#ifndef org_orekit_utils_FieldArrayDictionary_H
#define org_orekit_utils_FieldArrayDictionary_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace utils {
      class FieldArrayDictionary;
      class FieldArrayDictionary$Entry;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldArrayDictionary : public ::java::lang::Object {
       public:
        enum {
          mid_init$_02ab84aa7626616d,
          mid_init$_9127f23cedcce237,
          mid_init$_07915b48270dec6b,
          mid_clear_a1fa5dae97ea5ed2,
          mid_get_f25dcdbfa4b24501,
          mid_getData_e62d3bb06d56d7e3,
          mid_getEntry_bf08c4a3bb93e7cd,
          mid_getField_04d1f63e17d5c5d4,
          mid_put_6fb36758267c5870,
          mid_put_0090afa924af0a2d,
          mid_putAll_acb615aad9f2aad9,
          mid_putAll_6648520b18d8ef1d,
          mid_remove_cde6b28e15c96b75,
          mid_size_55546ef6a647f39b,
          mid_toMap_810bed48fafb0b9a,
          mid_toString_1c1fa1e935d6cdcf,
          mid_unmodifiableView_7c5d47860532e9d9,
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
