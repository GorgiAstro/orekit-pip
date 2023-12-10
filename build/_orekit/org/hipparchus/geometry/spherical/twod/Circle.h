#ifndef org_hipparchus_geometry_spherical_twod_Circle_H
#define org_hipparchus_geometry_spherical_twod_Circle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
        }
      }
      namespace partitioning {
        class Transform;
        class Hyperplane;
        class Embedding;
      }
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
          class SubCircle;
          class Sphere2D;
          class S2Point;
          class Circle;
        }
        namespace oned {
          class Arc;
          class S1Point;
          class Sphere1D;
        }
      }
      class Point;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
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

          class Circle : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c1cd2c1af3ffd51b,
              mid_init$_00759efea5a3aae3,
              mid_copySelf_15409f4dd57c6afd,
              mid_emptyHyperplane_00b467b86e205579,
              mid_getArc_dcf6ffb70606bae4,
              mid_getInsideArc_ff776abf59c07ea1,
              mid_getOffset_80b2470b9511edd1,
              mid_getOffset_726dc963fac3505e,
              mid_getPhase_80b2470b9511edd1,
              mid_getPointAt_5f993a721a1d8c59,
              mid_getPole_17a952530a808943,
              mid_getReverse_15409f4dd57c6afd,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_getTransform_6a5c6f9d2479f5e6,
              mid_getXAxis_17a952530a808943,
              mid_getYAxis_17a952530a808943,
              mid_project_ac445dfe898b403a,
              mid_reset_a94622407b723689,
              mid_revertSelf_7ae3461a92a43152,
              mid_sameOrientationAs_b99f508aafd89c77,
              mid_toSpace_8e0fe0b556063cbf,
              mid_toSubSpace_681cfbcac47b4c3d,
              mid_wholeHyperplane_00b467b86e205579,
              mid_wholeSpace_b554ba4417ec0cb0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Circle(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Circle(const Circle& obj) : ::java::lang::Object(obj) {}

            Circle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
            Circle(const ::org::hipparchus::geometry::spherical::twod::S2Point &, const ::org::hipparchus::geometry::spherical::twod::S2Point &, jdouble);

            Circle copySelf() const;
            ::org::hipparchus::geometry::spherical::twod::SubCircle emptyHyperplane() const;
            ::org::hipparchus::geometry::spherical::oned::Arc getArc(const ::org::hipparchus::geometry::spherical::twod::S2Point &, const ::org::hipparchus::geometry::spherical::twod::S2Point &) const;
            ::org::hipparchus::geometry::spherical::oned::Arc getInsideArc(const Circle &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
            jdouble getPhase(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getPointAt(jdouble) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getPole() const;
            Circle getReverse() const;
            jdouble getTolerance() const;
            static ::org::hipparchus::geometry::partitioning::Transform getTransform(const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getXAxis() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getYAxis() const;
            ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
            void reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void revertSelf() const;
            jboolean sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
            ::org::hipparchus::geometry::spherical::twod::S2Point toSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::spherical::oned::S1Point toSubSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::spherical::twod::SubCircle wholeHyperplane() const;
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet wholeSpace() const;
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
          extern PyType_Def PY_TYPE_DEF(Circle);
          extern PyTypeObject *PY_TYPE(Circle);

          class t_Circle {
          public:
            PyObject_HEAD
            Circle object;
            static PyObject *wrap_Object(const Circle&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
