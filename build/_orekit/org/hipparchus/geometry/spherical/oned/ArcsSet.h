#ifndef org_hipparchus_geometry_spherical_oned_ArcsSet_H
#define org_hipparchus_geometry_spherical_oned_ArcsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace spherical {
        namespace oned {
          class ArcsSet;
          class ArcsSet$InconsistentStateAt2PiWrapping;
          class Arc;
          class ArcsSet$Split;
          class Sphere1D;
        }
      }
      namespace partitioning {
        class BoundaryProjection;
        class BSPTree;
        class SubHyperplane;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
  namespace util {
    class Iterator;
    class List;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          class ArcsSet : public ::org::hipparchus::geometry::partitioning::AbstractRegion {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_init$_3e72dd0bd3a69a59,
              mid_init$_b832ff2fd1b54c87,
              mid_init$_d0d6094fbd7015c5,
              mid_asList_a6156df500549a58,
              mid_buildNew_7cfd2171837d9e80,
              mid_iterator_035c6167e6569aac,
              mid_projectToBoundary_a3932f0f8ec705f8,
              mid_split_10b435f7457cfcb0,
              mid_computeGeometricalProperties_7ae3461a92a43152,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArcsSet(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArcsSet(const ArcsSet& obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {}

            ArcsSet(jdouble);
            ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree &, jdouble);
            ArcsSet(const ::java::util::Collection &, jdouble);
            ArcsSet(jdouble, jdouble, jdouble);

            ::java::util::List asList() const;
            ArcsSet buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
            ::java::util::Iterator iterator() const;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection projectToBoundary(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split split(const ::org::hipparchus::geometry::spherical::oned::Arc &) const;
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
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(ArcsSet);
          extern PyTypeObject *PY_TYPE(ArcsSet);

          class t_ArcsSet {
          public:
            PyObject_HEAD
            ArcsSet object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_ArcsSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ArcsSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ArcsSet&, PyTypeObject *, PyTypeObject *);
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
