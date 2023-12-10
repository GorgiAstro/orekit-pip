#ifndef org_orekit_utils_FieldTimeSpanMap_H
#define org_orekit_utils_FieldTimeSpanMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldTimeSpanMap$Transition;
    }
  }
}
namespace java {
  namespace util {
    class SortedSet;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldTimeSpanMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_43a02e2a81afd51c,
          mid_addValidAfter_27ddae2d23e99183,
          mid_addValidBefore_27ddae2d23e99183,
          mid_get_7684025eb484b969,
          mid_getTransitions_d01a04ddab6c7194,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeSpanMap(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeSpanMap(const FieldTimeSpanMap& obj) : ::java::lang::Object(obj) {}

        FieldTimeSpanMap(const ::java::lang::Object &, const ::org::hipparchus::Field &);

        void addValidAfter(const ::java::lang::Object &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        void addValidBefore(const ::java::lang::Object &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::java::lang::Object get$(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::java::util::SortedSet getTransitions() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldTimeSpanMap);
      extern PyTypeObject *PY_TYPE(FieldTimeSpanMap);

      class t_FieldTimeSpanMap {
      public:
        PyObject_HEAD
        FieldTimeSpanMap object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_FieldTimeSpanMap *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeSpanMap&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeSpanMap&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif