#ifndef org_hipparchus_geometry_partitioning_Transform_H
#define org_hipparchus_geometry_partitioning_Transform_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace partitioning {
        class Hyperplane;
        class SubHyperplane;
      }
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

        class Transform : public ::java::lang::Object {
         public:
          enum {
            mid_apply_2214f7ad5b6ca158,
            mid_apply_8e29b62ae9b3c9fd,
            mid_apply_19817b868740d9ae,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Transform(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Transform(const Transform& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::Point apply(const ::org::hipparchus::geometry::Point &) const;
          ::org::hipparchus::geometry::partitioning::Hyperplane apply(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane apply(const ::org::hipparchus::geometry::partitioning::SubHyperplane &, const ::org::hipparchus::geometry::partitioning::Hyperplane &, const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
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
        extern PyType_Def PY_TYPE_DEF(Transform);
        extern PyTypeObject *PY_TYPE(Transform);

        class t_Transform {
        public:
          PyObject_HEAD
          Transform object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Transform *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Transform&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Transform&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
