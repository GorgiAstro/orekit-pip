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
      class FieldArrayDictionary$Entry;
      class FieldArrayDictionary;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldArrayDictionary : public ::java::lang::Object {
       public:
        enum {
          mid_init$_979ae7f57a96b096,
          mid_init$_f89bf3117923cd08,
          mid_init$_694b97800b8b07ac,
          mid_clear_0640e6acf969ed28,
          mid_get_4acd5b0987a64fc1,
          mid_getData_0d9551367f7ecdef,
          mid_getEntry_7750c55ea2bf389f,
          mid_getField_20f98801541dcec1,
          mid_put_7d8c14f144e3f080,
          mid_put_83a3b21e73294ddc,
          mid_putAll_e30d6d9efab7b075,
          mid_putAll_6ba01303bcce0307,
          mid_remove_fd2162b8a05a22fe,
          mid_size_412668abc8d889e9,
          mid_toMap_1e62c2f73fbdd1c4,
          mid_toString_3cffd47377eca18a,
          mid_unmodifiableView_e712b7d773a9bf41,
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
