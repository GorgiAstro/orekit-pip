#ifndef org_hipparchus_geometry_Point_H
#define org_hipparchus_geometry_Point_H

#include "java/io/Serializable.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      class Space;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {

      class Point : public ::java::io::Serializable {
       public:
        enum {
          mid_distance_277cb62c4ec87155,
          mid_getSpace_a30bf0b437744017,
          mid_isNaN_eee3de00fe971136,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Point(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Point(const Point& obj) : ::java::io::Serializable(obj) {}

        jdouble distance(const Point &) const;
        ::org::hipparchus::geometry::Space getSpace() const;
        jboolean isNaN() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(Point);
      extern PyTypeObject *PY_TYPE(Point);

      class t_Point {
      public:
        PyObject_HEAD
        Point object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Point *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Point&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Point&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
