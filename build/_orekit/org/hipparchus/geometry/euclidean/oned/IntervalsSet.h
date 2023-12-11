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
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class IntervalsSet;
          class Interval;
        }
      }
      namespace partitioning {
        class SubHyperplane;
        class BoundaryProjection;
        class BSPTree;
      }
      class Point;
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
              mid_init$_10f281d777284cea,
              mid_init$_546559a08b08816f,
              mid_init$_bdacd7c5506b494c,
              mid_init$_87096e3fd8086100,
              mid_asList_0d9551367f7ecdef,
              mid_buildNew_faa8e1c775f8f198,
              mid_getInf_557b8123390d8d0c,
              mid_getSup_557b8123390d8d0c,
              mid_iterator_834a3801c426326d,
              mid_projectToBoundary_76fb0949df043b81,
              mid_computeGeometricalProperties_0640e6acf969ed28,
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
