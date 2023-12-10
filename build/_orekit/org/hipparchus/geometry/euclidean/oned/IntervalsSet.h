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
          class Interval;
          class IntervalsSet;
          class Euclidean1D;
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
              mid_init$_17db3a65980d3441,
              mid_init$_748cd2c51a955d77,
              mid_init$_1f4d55383238fbb5,
              mid_init$_2c56b6dd4d4b1dec,
              mid_asList_2afa36052df4765d,
              mid_buildNew_478602e2978d50f1,
              mid_getInf_dff5885c2c873297,
              mid_getSup_dff5885c2c873297,
              mid_iterator_4d23511a9f0db098,
              mid_projectToBoundary_e9baadaaf6c2e7eb,
              mid_computeGeometricalProperties_0fa09c18fee449d5,
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
