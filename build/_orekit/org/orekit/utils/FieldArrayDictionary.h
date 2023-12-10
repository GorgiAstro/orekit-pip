#ifndef org_orekit_utils_FieldArrayDictionary_H
#define org_orekit_utils_FieldArrayDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class FieldArrayDictionary;
      class FieldArrayDictionary$Entry;
    }
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
          mid_init$_484998d88974267b,
          mid_init$_c5199de6167cff95,
          mid_init$_b89190f186aaf539,
          mid_clear_0fa09c18fee449d5,
          mid_get_f1183f1b2d548100,
          mid_getData_2afa36052df4765d,
          mid_getEntry_e9b4158c37f4fb83,
          mid_getField_5b28be2d3632a5dc,
          mid_put_3468fcb7793f51a9,
          mid_put_ed186b368c4c454c,
          mid_putAll_9f0edbbc591be0df,
          mid_putAll_db8de8bc54857165,
          mid_remove_7edad2c2f64f4d68,
          mid_size_570ce0828f81a2c1,
          mid_toMap_6f5a75ccd8c04465,
          mid_toString_11b109bd155ca898,
          mid_unmodifiableView_a7763b9cf85435a1,
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
