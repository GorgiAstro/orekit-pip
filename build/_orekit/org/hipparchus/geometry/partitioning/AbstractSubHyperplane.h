#ifndef org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H
#define org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Transform;
        class SubHyperplane$SplitSubHyperplane;
        class AbstractSubHyperplane;
        class Hyperplane;
        class Region;
        class SubHyperplane;
      }
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
      namespace partitioning {

        class AbstractSubHyperplane : public ::java::lang::Object {
         public:
          enum {
            mid_applyTransform_d2eaffdc1cfb6e14,
            mid_copySelf_3351e843c28e5f5f,
            mid_getHyperplane_e829aeefe0096202,
            mid_getRemainingRegion_9552c312bc09a7e5,
            mid_getSize_456d9a2f64d6b28d,
            mid_isEmpty_e470b6d9e0d979db,
            mid_reunite_58a0854ec6d46960,
            mid_split_3b0163aa85fdaa47,
            mid_buildNew_3227314555d80cc9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractSubHyperplane(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractSubHyperplane(const AbstractSubHyperplane& obj) : ::java::lang::Object(obj) {}

          AbstractSubHyperplane applyTransform(const ::org::hipparchus::geometry::partitioning::Transform &) const;
          AbstractSubHyperplane copySelf() const;
          ::org::hipparchus::geometry::partitioning::Hyperplane getHyperplane() const;
          ::org::hipparchus::geometry::partitioning::Region getRemainingRegion() const;
          jdouble getSize() const;
          jboolean isEmpty() const;
          AbstractSubHyperplane reunite(const ::org::hipparchus::geometry::partitioning::SubHyperplane &) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane split(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractSubHyperplane);
        extern PyTypeObject *PY_TYPE(AbstractSubHyperplane);

        class t_AbstractSubHyperplane {
        public:
          PyObject_HEAD
          AbstractSubHyperplane object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_AbstractSubHyperplane *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractSubHyperplane&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractSubHyperplane&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
