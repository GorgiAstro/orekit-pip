#ifndef org_hipparchus_fitting_WeightedObservedPoint_H
#define org_hipparchus_fitting_WeightedObservedPoint_H

#include "java/lang/Object.h"

namespace java {
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

      class WeightedObservedPoint : public ::java::lang::Object {
       public:
        enum {
          mid_init$_d0d6094fbd7015c5,
          mid_getWeight_456d9a2f64d6b28d,
          mid_getX_456d9a2f64d6b28d,
          mid_getY_456d9a2f64d6b28d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WeightedObservedPoint(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WeightedObservedPoint(const WeightedObservedPoint& obj) : ::java::lang::Object(obj) {}

        WeightedObservedPoint(jdouble, jdouble, jdouble);

        jdouble getWeight() const;
        jdouble getX() const;
        jdouble getY() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(WeightedObservedPoint);
      extern PyTypeObject *PY_TYPE(WeightedObservedPoint);

      class t_WeightedObservedPoint {
      public:
        PyObject_HEAD
        WeightedObservedPoint object;
        static PyObject *wrap_Object(const WeightedObservedPoint&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
