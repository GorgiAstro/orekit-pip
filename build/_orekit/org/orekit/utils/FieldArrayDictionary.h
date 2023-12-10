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
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class FieldArrayDictionary;
      class FieldArrayDictionary$Entry;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldArrayDictionary : public ::java::lang::Object {
       public:
        enum {
          mid_init$_205c34b8e33cf33f,
          mid_init$_a69d58691b2f6a42,
          mid_init$_6967bdadd6bbd212,
          mid_clear_7ae3461a92a43152,
          mid_get_7ff62b68d24a340b,
          mid_getData_a6156df500549a58,
          mid_getEntry_9a6d30d927000ad0,
          mid_getField_70b4bbd3fa378d6b,
          mid_put_f158fe1c5def0235,
          mid_put_3bfcb5213d619b28,
          mid_putAll_bf3d4719370f451d,
          mid_putAll_8b4e3987d7532731,
          mid_remove_6b161f495ea569b8,
          mid_size_f2f64475e4580546,
          mid_toMap_d6753b7055940a54,
          mid_toString_0090f7797e403f43,
          mid_unmodifiableView_a517063e6ce1cd85,
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
