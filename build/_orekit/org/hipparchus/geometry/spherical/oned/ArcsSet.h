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
      namespace partitioning {
        class SubHyperplane;
        class BoundaryProjection;
        class BSPTree;
      }
      class Point;
      namespace spherical {
        namespace oned {
          class ArcsSet;
          class ArcsSet$InconsistentStateAt2PiWrapping;
          class ArcsSet$Split;
          class Arc;
          class Sphere1D;
        }
      }
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
              mid_init$_17db3a65980d3441,
              mid_init$_748cd2c51a955d77,
              mid_init$_1f4d55383238fbb5,
              mid_init$_2c56b6dd4d4b1dec,
              mid_asList_2afa36052df4765d,
              mid_buildNew_857f0d64f3326df3,
              mid_iterator_4d23511a9f0db098,
              mid_projectToBoundary_e9baadaaf6c2e7eb,
              mid_split_04f55787d5300b9c,
              mid_computeGeometricalProperties_0fa09c18fee449d5,
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
