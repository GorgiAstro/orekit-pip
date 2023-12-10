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
          mid_init$_0fa09c18fee449d5,
          mid_add_00b9567804672335,
          mid_add_8f2e782d5278b131,
          mid_add_2c56b6dd4d4b1dec,
          mid_clear_0fa09c18fee449d5,
          mid_toList_2afa36052df4765d,
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
