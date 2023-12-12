#ifndef org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H
#define org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class Transform;
        class Hyperplane;
        class AbstractSubHyperplane;
        class SubHyperplane$SplitSubHyperplane;
        class Region;
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
            mid_applyTransform_1c3bedd7c9795a05,
            mid_copySelf_6232b5875bc78708,
            mid_getHyperplane_db5d0f7cdc937b69,
            mid_getRemainingRegion_fd006079784937f2,
            mid_getSize_557b8123390d8d0c,
            mid_isEmpty_89b302893bdbe1f1,
            mid_reunite_7e5457b34b41ca86,
            mid_split_ae8e2bbf2389e86e,
            mid_buildNew_0ffd07a16ed53139,
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
