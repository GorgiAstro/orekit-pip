#ifndef org_hipparchus_geometry_spherical_oned_ArcsSet_H
#define org_hipparchus_geometry_spherical_oned_ArcsSet_H

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
      namespace spherical {
        namespace oned {
          class ArcsSet$Split;
          class Sphere1D;
          class ArcsSet;
          class Arc;
          class ArcsSet$InconsistentStateAt2PiWrapping;
        }
      }
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
        class BoundaryProjection;
      }
      class Point;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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
              mid_init$_8ba9fe7a847cecad,
              mid_init$_936ab5386aba1bbf,
              mid_init$_16deaf08470737f9,
              mid_init$_b5167f35b2521627,
              mid_asList_e62d3bb06d56d7e3,
              mid_buildNew_4a0145c8cc4eaec9,
              mid_iterator_fc7780bc5d5b73b0,
              mid_projectToBoundary_dcacfc1bc354b9c2,
              mid_split_795e615ef85ba37b,
              mid_computeGeometricalProperties_a1fa5dae97ea5ed2,
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
