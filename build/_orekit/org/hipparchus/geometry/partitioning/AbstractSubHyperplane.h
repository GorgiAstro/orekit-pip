#ifndef org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H
#define org_hipparchus_geometry_partitioning_AbstractSubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Hyperplane;
        class AbstractSubHyperplane;
        class Transform;
        class SubHyperplane$SplitSubHyperplane;
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
            mid_applyTransform_c243fc83137496a6,
            mid_copySelf_ef6ba3b2a23af72e,
            mid_getHyperplane_e081ba7b06e71434,
            mid_getRemainingRegion_3069dff3a674defc,
            mid_getSize_9981f74b2d109da6,
            mid_isEmpty_eee3de00fe971136,
            mid_reunite_a9ff681d42e1a09d,
            mid_split_b587049e19682418,
            mid_buildNew_35b28ef87fdef21f,
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
