#ifndef org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H
#define org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class Sphere2D;
          class S2Point;
          class Vertex;
          class SphericalPolygonsSet;
        }
        namespace oned {
          class Sphere1D;
        }
      }
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
      namespace enclosing {
        class EnclosingBall;
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
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
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_67979f0673f03afe,
              mid_init$_ce07cf20f467033d,
              mid_init$_83911a7bf86bdb7d,
              mid_init$_457d0c956b0d24c0,
              mid_init$_8b5349b7f7c4d1be,
              mid_buildNew_c88003cfffbb6512,
              mid_getBoundaryLoops_d751c1a57012b438,
              mid_getEnclosingCap_be37d2c4f98ba0b4,
              mid_computeGeometricalProperties_ff7cb6c242604316,
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
