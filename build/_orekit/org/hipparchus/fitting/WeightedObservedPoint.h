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
          mid_init$_bd28dc6055dc5bbd,
          mid_getWeight_9981f74b2d109da6,
          mid_getX_9981f74b2d109da6,
          mid_getY_9981f74b2d109da6,
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
