#ifndef org_hipparchus_geometry_euclidean_oned_IntervalsSet_H
#define org_hipparchus_geometry_euclidean_oned_IntervalsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Interval;
          class IntervalsSet;
        }
      }
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
        class BoundaryProjection;
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
    class List;
    class Collection;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          class IntervalsSet : public ::org::hipparchus::geometry::partitioning::AbstractRegion {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_init$_3e72dd0bd3a69a59,
              mid_init$_b832ff2fd1b54c87,
              mid_init$_d0d6094fbd7015c5,
              mid_asList_a6156df500549a58,
              mid_buildNew_1122d43a099e75c6,
              mid_getInf_456d9a2f64d6b28d,
              mid_getSup_456d9a2f64d6b28d,
              mid_iterator_035c6167e6569aac,
              mid_projectToBoundary_a3932f0f8ec705f8,
              mid_computeGeometricalProperties_7ae3461a92a43152,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalsSet(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalsSet(const IntervalsSet& obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {}

            IntervalsSet(jdouble);
            IntervalsSet(const ::org::hipparchus::geometry::partitioning::BSPTree &, jdouble);
            IntervalsSet(const ::java::util::Collection &, jdouble);
            IntervalsSet(jdouble, jdouble, jdouble);

            ::java::util::List asList() const;
            IntervalsSet buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
            jdouble getInf() const;
            jdouble getSup() const;
            ::java::util::Iterator iterator() const;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection projectToBoundary(const ::org::hipparchus::geometry::Point &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntervalsSet);
          extern PyTypeObject *PY_TYPE(IntervalsSet);

          class t_IntervalsSet {
          public:
            PyObject_HEAD
            IntervalsSet object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_IntervalsSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntervalsSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntervalsSet&, PyTypeObject *, PyTypeObject *);
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
