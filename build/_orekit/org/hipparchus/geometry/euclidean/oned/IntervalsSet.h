#ifndef org_hipparchus_geometry_euclidean_oned_IntervalsSet_H
#define org_hipparchus_geometry_euclidean_oned_IntervalsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

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
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class BSPTree;
        class BoundaryProjection;
      }
      class Point;
      namespace euclidean {
        namespace oned {
          class Interval;
          class Euclidean1D;
          class IntervalsSet;
        }
      }
    }
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
              mid_init$_8ba9fe7a847cecad,
              mid_init$_936ab5386aba1bbf,
              mid_init$_16deaf08470737f9,
              mid_init$_b5167f35b2521627,
              mid_asList_e62d3bb06d56d7e3,
              mid_buildNew_3d4e98e70bfea87e,
              mid_getInf_b74f83833fdad017,
              mid_getSup_b74f83833fdad017,
              mid_iterator_fc7780bc5d5b73b0,
              mid_projectToBoundary_dcacfc1bc354b9c2,
              mid_computeGeometricalProperties_a1fa5dae97ea5ed2,
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
