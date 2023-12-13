#ifndef org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H
#define org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      namespace partitioning {
        class SubHyperplane$SplitSubHyperplane;
        class SubHyperplane;
        class Hyperplane;
        class AbstractSubHyperplane;
        class Transform;
        class Region;
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

        class AbstractSubHyperplane : public ::java::lang::Object {
         public:
          enum {
            mid_applyTransform_e43d4173d01d86e9,
            mid_copySelf_3cd648bf55550e6e,
            mid_getHyperplane_40a20a6ecfa9e745,
            mid_getRemainingRegion_3698fd1911856e70,
            mid_getSize_b74f83833fdad017,
            mid_isEmpty_9ab94ac1dc23b105,
            mid_reunite_8fc75099ef206f26,
            mid_split_30674c36ae2fcf9f,
            mid_buildNew_3d919cfe5b11c3d0,
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
