#ifndef org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H
#define org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {
        class EnclosingBall;
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
          class Sphere2D;
          class S2Point;
          class Vertex;
        }
        namespace oned {
          class Sphere1D;
        }
      }
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
              mid_init$_77e0f9a1f260e2e5,
              mid_init$_c8661dab4977d04c,
              mid_init$_c1cd2c1af3ffd51b,
              mid_init$_3e72dd0bd3a69a59,
              mid_init$_b832ff2fd1b54c87,
              mid_init$_f8298e0c9cdbb72c,
              mid_buildNew_e9fb7b0dabb95171,
              mid_getBoundaryLoops_a6156df500549a58,
              mid_getEnclosingCap_75182acb0b7e2475,
              mid_computeGeometricalProperties_7ae3461a92a43152,
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
