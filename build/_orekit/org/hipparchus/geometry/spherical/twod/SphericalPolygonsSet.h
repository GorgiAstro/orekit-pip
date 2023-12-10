#ifndef org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H
#define org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class BSPTree;
      }
      namespace enclosing {
        class EnclosingBall;
      }
      namespace spherical {
        namespace twod {
          class S2Point;
          class Vertex;
          class SphericalPolygonsSet;
          class Sphere2D;
        }
        namespace oned {
          class Sphere1D;
        }
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
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
              mid_init$_17db3a65980d3441,
              mid_init$_b83ff0107ca69f11,
              mid_init$_71a7c3cfed678f9d,
              mid_init$_748cd2c51a955d77,
              mid_init$_1f4d55383238fbb5,
              mid_init$_e17147739aee0b14,
              mid_buildNew_b3112628ccbb7952,
              mid_getBoundaryLoops_2afa36052df4765d,
              mid_getEnclosingCap_a740d2831b9e3b92,
              mid_computeGeometricalProperties_0fa09c18fee449d5,
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
