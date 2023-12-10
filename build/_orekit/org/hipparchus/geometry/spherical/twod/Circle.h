#ifndef org_hipparchus_geometry_spherical_twod_Circle_H
#define org_hipparchus_geometry_spherical_twod_Circle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Embedding;
        class Transform;
        class Hyperplane;
      }
      namespace spherical {
        namespace oned {
          class S1Point;
          class Arc;
          class Sphere1D;
        }
        namespace twod {
          class Circle;
          class S2Point;
          class SubCircle;
          class SphericalPolygonsSet;
          class Sphere2D;
        }
      }
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
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
              mid_init$_71a7c3cfed678f9d,
              mid_init$_875d266deedb47de,
              mid_copySelf_32f0886c61f7154f,
              mid_emptyHyperplane_4f34c6c1db57a3eb,
              mid_getArc_d617d5c3c078b007,
              mid_getInsideArc_99bf345db36fbfd3,
              mid_getOffset_bf473e7c74e5ce2b,
              mid_getOffset_07bb97c2794cf6b1,
              mid_getPhase_bf473e7c74e5ce2b,
              mid_getPointAt_9137bba253a33d9c,
              mid_getPole_d52645e0d4c07563,
              mid_getReverse_32f0886c61f7154f,
              mid_getTolerance_dff5885c2c873297,
              mid_getTransform_d50fe3393e82058b,
              mid_getXAxis_d52645e0d4c07563,
              mid_getYAxis_d52645e0d4c07563,
              mid_project_c48805c2dda937c6,
              mid_reset_029ff0cbf68ea054,
              mid_revertSelf_0fa09c18fee449d5,
              mid_sameOrientationAs_5bc340c02d9ac484,
              mid_toSpace_77cb6153d008c1ec,
              mid_toSubSpace_ffd4c8161efaa32f,
              mid_wholeHyperplane_4f34c6c1db57a3eb,
              mid_wholeSpace_5a6ba0b36fb0268c,
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
