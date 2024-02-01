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
        class BoundaryProjection;
        class BSPTree;
        class SubHyperplane;
      }
      class Point;
      namespace euclidean {
        namespace oned {
          class Interval;
          class IntervalsSet;
          class Euclidean1D;
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
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_83911a7bf86bdb7d,
              mid_init$_457d0c956b0d24c0,
              mid_init$_bd28dc6055dc5bbd,
              mid_asList_d751c1a57012b438,
              mid_buildNew_6028f700f3713da6,
              mid_getInf_9981f74b2d109da6,
              mid_getSup_9981f74b2d109da6,
              mid_iterator_4f613ccd2f803b4b,
              mid_projectToBoundary_5e847af8c64bed2a,
              mid_computeGeometricalProperties_ff7cb6c242604316,
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
