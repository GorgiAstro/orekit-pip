#ifndef org_hipparchus_geometry_euclidean_oned_SubOrientedPoint_H
#define org_hipparchus_geometry_euclidean_oned_SubOrientedPoint_H

#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
        }
      }
      namespace partitioning {
        class SubHyperplane$SplitSubHyperplane;
        class Hyperplane;
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
      namespace euclidean {
        namespace oned {

          class SubOrientedPoint : public ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane {
           public:
            enum {
              mid_init$_ece3b6638d417579,
              mid_getSize_456d9a2f64d6b28d,
              mid_isEmpty_e470b6d9e0d979db,
              mid_split_3b0163aa85fdaa47,
              mid_buildNew_3227314555d80cc9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubOrientedPoint(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubOrientedPoint(const SubOrientedPoint& obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {}

            SubOrientedPoint(const ::org::hipparchus::geometry::partitioning::Hyperplane &, const ::org::hipparchus::geometry::partitioning::Region &);

            jdouble getSize() const;
            jboolean isEmpty() const;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane split(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(SubOrientedPoint);
          extern PyTypeObject *PY_TYPE(SubOrientedPoint);

          class t_SubOrientedPoint {
          public:
            PyObject_HEAD
            SubOrientedPoint object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_SubOrientedPoint *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SubOrientedPoint&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SubOrientedPoint&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
