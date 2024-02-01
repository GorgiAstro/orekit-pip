#ifndef org_hipparchus_geometry_spherical_twod_Circle_H
#define org_hipparchus_geometry_spherical_twod_Circle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class Sphere2D;
          class S2Point;
          class SubCircle;
          class Circle;
          class SphericalPolygonsSet;
        }
        namespace oned {
          class Sphere1D;
          class Arc;
          class S1Point;
        }
      }
      namespace partitioning {
        class Hyperplane;
        class Embedding;
        class Transform;
      }
      class Point;
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
        }
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
              mid_init$_ce07cf20f467033d,
              mid_init$_f1df74f83501ac06,
              mid_copySelf_ba6c8cc83fdda773,
              mid_emptyHyperplane_c9664595267ed4c7,
              mid_getArc_26a96d0e4bc10fdd,
              mid_getInsideArc_e129ff7e1bada508,
              mid_getOffset_78c2296af19efe37,
              mid_getOffset_277cb62c4ec87155,
              mid_getPhase_78c2296af19efe37,
              mid_getPointAt_98a3eeef43dce47a,
              mid_getPole_032312bdeb3f2f93,
              mid_getReverse_ba6c8cc83fdda773,
              mid_getTolerance_9981f74b2d109da6,
              mid_getTransform_fe614a04f5ee8090,
              mid_getXAxis_032312bdeb3f2f93,
              mid_getYAxis_032312bdeb3f2f93,
              mid_project_ff0c84956c63705d,
              mid_reset_30f8886dfb88a63c,
              mid_revertSelf_ff7cb6c242604316,
              mid_sameOrientationAs_51737f919fe0cf72,
              mid_toSpace_1272eb4708ac17a7,
              mid_toSubSpace_ef89f54d87eba347,
              mid_wholeHyperplane_c9664595267ed4c7,
              mid_wholeSpace_17b2f5c9c3ed683f,
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
