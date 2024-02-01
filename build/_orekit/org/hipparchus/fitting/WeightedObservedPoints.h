#ifndef org_hipparchus_fitting_WeightedObservedPoints_H
#define org_hipparchus_fitting_WeightedObservedPoints_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      class WeightedObservedPoint;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fitting {

      class WeightedObservedPoints : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_add_477ad39959f93dab,
          mid_add_13edac039e8cc967,
          mid_add_bd28dc6055dc5bbd,
          mid_clear_ff7cb6c242604316,
          mid_toList_d751c1a57012b438,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WeightedObservedPoints(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WeightedObservedPoints(const WeightedObservedPoints& obj) : ::java::lang::Object(obj) {}

        WeightedObservedPoints();

        void add(const ::org::hipparchus::fitting::WeightedObservedPoint &) const;
        void add(jdouble, jdouble) const;
        void add(jdouble, jdouble, jdouble) const;
        void clear() const;
        ::java::util::List toList() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(WeightedObservedPoints);
      extern PyTypeObject *PY_TYPE(WeightedObservedPoints);

      class t_WeightedObservedPoints {
      public:
        PyObject_HEAD
        WeightedObservedPoints object;
        static PyObject *wrap_Object(const WeightedObservedPoints&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
