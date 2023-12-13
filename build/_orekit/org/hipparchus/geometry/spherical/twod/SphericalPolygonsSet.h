#ifndef org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H
#define org_hipparchus_geometry_spherical_twod_SphericalPolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      namespace spherical {
        namespace oned {
          class Sphere1D;
        }
        namespace twod {
          class Vertex;
          class Sphere2D;
          class SphericalPolygonsSet;
          class S2Point;
        }
      }
      namespace enclosing {
        class EnclosingBall;
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
              mid_init$_8ba9fe7a847cecad,
              mid_init$_548bdcb959b5c3f1,
              mid_init$_4f2529905f184526,
              mid_init$_936ab5386aba1bbf,
              mid_init$_16deaf08470737f9,
              mid_init$_57efc05c72ff0405,
              mid_buildNew_9e4f0b6dbfea3f48,
              mid_getBoundaryLoops_e62d3bb06d56d7e3,
              mid_getEnclosingCap_df3b6a7b2f01d1f4,
              mid_computeGeometricalProperties_a1fa5dae97ea5ed2,
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
