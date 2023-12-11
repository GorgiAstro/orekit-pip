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
          class ArcsSet;
          class Sphere1D;
          class ArcsSet$InconsistentStateAt2PiWrapping;
          class ArcsSet$Split;
          class Arc;
        }
      }
      namespace partitioning {
        class SubHyperplane;
        class BoundaryProjection;
        class BSPTree;
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
              mid_init$_10f281d777284cea,
              mid_init$_546559a08b08816f,
              mid_init$_bdacd7c5506b494c,
              mid_init$_87096e3fd8086100,
              mid_asList_0d9551367f7ecdef,
              mid_buildNew_834ed2332948bfe5,
              mid_iterator_834a3801c426326d,
              mid_projectToBoundary_76fb0949df043b81,
              mid_split_93b2dbc81083cb8e,
              mid_computeGeometricalProperties_0640e6acf969ed28,
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
