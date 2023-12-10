#ifndef org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H
#define org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane$SplitSubHyperplane;
        class SubHyperplane;
        class Transform;
        class Region;
        class Hyperplane;
        class AbstractSubHyperplane;
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
            mid_applyTransform_057557b1095c40fc,
            mid_copySelf_4adeb675d32d6838,
            mid_getHyperplane_a9ae8c67d757c80a,
            mid_getRemainingRegion_b72f8ac992e26582,
            mid_getSize_dff5885c2c873297,
            mid_isEmpty_b108b35ef48e27bd,
            mid_reunite_3632c8d043b291e1,
            mid_split_905725a56f20360c,
            mid_buildNew_802b885e8f150523,
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
