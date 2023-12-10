#ifndef org_hipparchus_geometry_partitioning_Hyperplane_H
#define org_hipparchus_geometry_partitioning_Hyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class Region;
        class Hyperplane;
      }
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

        class Hyperplane : public ::java::lang::Object {
         public:
          enum {
            mid_copySelf_a9ae8c67d757c80a,
            mid_emptyHyperplane_6e34449919366687,
            mid_getOffset_07bb97c2794cf6b1,
            mid_getTolerance_dff5885c2c873297,
            mid_project_c48805c2dda937c6,
            mid_sameOrientationAs_5bc340c02d9ac484,
            mid_wholeHyperplane_6e34449919366687,
            mid_wholeSpace_b72f8ac992e26582,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Hyperplane(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Hyperplane(const Hyperplane& obj) : ::java::lang::Object(obj) {}

          Hyperplane copySelf() const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane emptyHyperplane() const;
          jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
          jdouble getTolerance() const;
          ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
          jboolean sameOrientationAs(const Hyperplane &) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane wholeHyperplane() const;
          ::org::hipparchus::geometry::partitioning::Region wholeSpace() const;
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
        extern PyType_Def PY_TYPE_DEF(Hyperplane);
        extern PyTypeObject *PY_TYPE(Hyperplane);

        class t_Hyperplane {
        public:
          PyObject_HEAD
          Hyperplane object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Hyperplane *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Hyperplane&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Hyperplane&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
