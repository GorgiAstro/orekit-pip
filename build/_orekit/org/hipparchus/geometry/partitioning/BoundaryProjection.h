#ifndef org_hipparchus_geometry_partitioning_BoundaryProjection_H
#define org_hipparchus_geometry_partitioning_BoundaryProjection_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
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
      namespace partitioning {

        class BoundaryProjection : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e309095d0009b9ae,
            mid_getOffset_557b8123390d8d0c,
            mid_getOriginal_abb5df84e8ab06b8,
            mid_getProjected_abb5df84e8ab06b8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoundaryProjection(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BoundaryProjection(const BoundaryProjection& obj) : ::java::lang::Object(obj) {}

          BoundaryProjection(const ::org::hipparchus::geometry::Point &, const ::org::hipparchus::geometry::Point &, jdouble);

          jdouble getOffset() const;
          ::org::hipparchus::geometry::Point getOriginal() const;
          ::org::hipparchus::geometry::Point getProjected() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        extern PyType_Def PY_TYPE_DEF(BoundaryProjection);
        extern PyTypeObject *PY_TYPE(BoundaryProjection);

        class t_BoundaryProjection {
        public:
          PyObject_HEAD
          BoundaryProjection object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BoundaryProjection *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BoundaryProjection&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BoundaryProjection&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
