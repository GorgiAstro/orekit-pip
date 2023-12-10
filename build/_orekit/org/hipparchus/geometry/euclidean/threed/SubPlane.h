#ifndef org_hipparchus_geometry_euclidean_threed_SubPlane_H
#define org_hipparchus_geometry_euclidean_threed_SubPlane_H

#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Euclidean3D;
        }
        namespace twod {
          class Euclidean2D;
        }
      }
      namespace partitioning {
        class SubHyperplane$SplitSubHyperplane;
        class Region;
        class Hyperplane;
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
        namespace threed {

          class SubPlane : public ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane {
           public:
            enum {
              mid_init$_ece3b6638d417579,
              mid_split_3b0163aa85fdaa47,
              mid_buildNew_3227314555d80cc9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubPlane(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubPlane(const SubPlane& obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {}

            SubPlane(const ::org::hipparchus::geometry::partitioning::Hyperplane &, const ::org::hipparchus::geometry::partitioning::Region &);

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
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(SubPlane);
          extern PyTypeObject *PY_TYPE(SubPlane);

          class t_SubPlane {
          public:
            PyObject_HEAD
            SubPlane object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_SubPlane *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SubPlane&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SubPlane&, PyTypeObject *, PyTypeObject *);
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
