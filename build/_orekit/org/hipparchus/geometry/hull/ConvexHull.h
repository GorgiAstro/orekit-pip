#ifndef org_hipparchus_geometry_hull_ConvexHull_H
#define org_hipparchus_geometry_hull_ConvexHull_H

#include "java/io/Serializable.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region;
      }
      class Point;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
      namespace hull {

        class ConvexHull : public ::java::io::Serializable {
         public:
          enum {
            mid_createRegion_b72f8ac992e26582,
            mid_getVertices_55a29d8e9344cdba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConvexHull(jobject obj) : ::java::io::Serializable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConvexHull(const ConvexHull& obj) : ::java::io::Serializable(obj) {}

          ::org::hipparchus::geometry::partitioning::Region createRegion() const;
          JArray< ::org::hipparchus::geometry::Point > getVertices() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {
        extern PyType_Def PY_TYPE_DEF(ConvexHull);
        extern PyTypeObject *PY_TYPE(ConvexHull);

        class t_ConvexHull {
        public:
          PyObject_HEAD
          ConvexHull object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_ConvexHull *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ConvexHull&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ConvexHull&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
