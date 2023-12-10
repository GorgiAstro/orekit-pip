#ifndef org_hipparchus_fitting_WeightedObservedPoints_H
#define org_hipparchus_fitting_WeightedObservedPoints_H

#include "java/lang/Object.h"

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
namespace org {
  namespace hipparchus {
    namespace fitting {
      class WeightedObservedPoint;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fitting {

      class WeightedObservedPoints : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_add_63ac42c3bd1a5151,
          mid_add_1d715fa3b7b756e1,
          mid_add_d0d6094fbd7015c5,
          mid_clear_7ae3461a92a43152,
          mid_toList_a6156df500549a58,
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
