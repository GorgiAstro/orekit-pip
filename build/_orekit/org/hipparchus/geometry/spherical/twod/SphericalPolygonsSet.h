#ifndef org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H
#define org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
          class Vertex;
          class Sphere2D;
          class S2Point;
        }
        namespace oned {
          class Sphere1D;
        }
      }
      namespace partitioning {
        class SubHyperplane;
        class BSPTree;
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      namespace enclosing {
        class EnclosingBall;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          class SphericalPolygonsSet : public ::org::hipparchus::geometry::partitioning::AbstractRegion {
           public:
            enum {
              mid_init$_10f281d777284cea,
              mid_init$_7835dd17b9d5eb91,
              mid_init$_9eca765a47180abb,
              mid_init$_546559a08b08816f,
              mid_init$_bdacd7c5506b494c,
              mid_init$_e8e60e3c99d0924a,
              mid_buildNew_b311f7976ae2cd69,
              mid_getBoundaryLoops_0d9551367f7ecdef,
              mid_getEnclosingCap_21e9b023bf1fc695,
              mid_computeGeometricalProperties_0640e6acf969ed28,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SphericalPolygonsSet(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SphericalPolygonsSet(const SphericalPolygonsSet& obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {}

            SphericalPolygonsSet(jdouble);
            SphericalPolygonsSet(jdouble, const JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > &);
            SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
            SphericalPolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree &, jdouble);
            SphericalPolygonsSet(const ::java::util::Collection &, jdouble);
            SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jint, jdouble);

            SphericalPolygonsSet buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
            ::java::util::List getBoundaryLoops() const;
            ::org::hipparchus::geometry::enclosing::EnclosingBall getEnclosingCap() const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(SphericalPolygonsSet);
          extern PyTypeObject *PY_TYPE(SphericalPolygonsSet);

          class t_SphericalPolygonsSet {
          public:
            PyObject_HEAD
            SphericalPolygonsSet object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_SphericalPolygonsSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SphericalPolygonsSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SphericalPolygonsSet&, PyTypeObject *, PyTypeObject *);
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
