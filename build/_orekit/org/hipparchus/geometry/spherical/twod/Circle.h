#ifndef org_hipparchus_geometry_spherical_twod_Circle_H
#define org_hipparchus_geometry_spherical_twod_Circle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Rotation;
        }
      }
      class Point;
      namespace spherical {
        namespace oned {
          class Sphere1D;
          class S1Point;
          class Arc;
        }
        namespace twod {
          class SubCircle;
          class Sphere2D;
          class S2Point;
          class Circle;
          class SphericalPolygonsSet;
        }
      }
      namespace partitioning {
        class Embedding;
        class Hyperplane;
        class Transform;
      }
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
              mid_init$_4f2529905f184526,
              mid_init$_9ef25d5086c2cda0,
              mid_copySelf_394360bc4f7bf853,
              mid_emptyHyperplane_3feccee894d91ef8,
              mid_getArc_5777b9aa47be61c3,
              mid_getInsideArc_adcd7363100f1777,
              mid_getOffset_f75a63670951da8a,
              mid_getOffset_f0dd8cb59ea09794,
              mid_getPhase_f75a63670951da8a,
              mid_getPointAt_498f52cd8e5a7072,
              mid_getPole_8b724f8b4fdad1a2,
              mid_getReverse_394360bc4f7bf853,
              mid_getTolerance_b74f83833fdad017,
              mid_getTransform_3f3505394ef39075,
              mid_getXAxis_8b724f8b4fdad1a2,
              mid_getYAxis_8b724f8b4fdad1a2,
              mid_project_2214f7ad5b6ca158,
              mid_reset_1844f891addbac57,
              mid_revertSelf_a1fa5dae97ea5ed2,
              mid_sameOrientationAs_806ecfbca1984226,
              mid_toSpace_06f482d8ceb074a1,
              mid_toSubSpace_0524974a268eeeee,
              mid_wholeHyperplane_3feccee894d91ef8,
              mid_wholeSpace_bf39bb9c5825f40e,
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
