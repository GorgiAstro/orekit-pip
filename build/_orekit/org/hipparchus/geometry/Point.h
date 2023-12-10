#ifndef org_hipparchus_geometry_Point_H
#define org_hipparchus_geometry_Point_H

#include "java/io/Serializable.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      class Point;
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
          mid_distance_07bb97c2794cf6b1,
          mid_getSpace_ebbd6b2d39ab0e4f,
          mid_isNaN_b108b35ef48e27bd,
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
