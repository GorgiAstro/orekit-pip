#ifndef org_hipparchus_geometry_spherical_twod_Circle_H
#define org_hipparchus_geometry_spherical_twod_Circle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class Circle;
          class SphericalPolygonsSet;
          class Sphere2D;
          class S2Point;
          class SubCircle;
        }
        namespace oned {
          class Sphere1D;
          class S1Point;
          class Arc;
        }
      }
      namespace partitioning {
        class Transform;
        class Hyperplane;
        class Embedding;
      }
      class Point;
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Rotation;
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
              mid_init$_9eca765a47180abb,
              mid_init$_5165c9de32b0b6c3,
              mid_copySelf_7e98cfa0ffbe686f,
              mid_emptyHyperplane_4fb9d52e7fabd495,
              mid_getArc_d13d3178730452a4,
              mid_getInsideArc_4f98746edcafa482,
              mid_getOffset_8ddca7bd73e586da,
              mid_getOffset_cf1fec2b7b1c0efe,
              mid_getPhase_8ddca7bd73e586da,
              mid_getPointAt_20de5f9d51c6611f,
              mid_getPole_f88961cca75a2c0a,
              mid_getReverse_7e98cfa0ffbe686f,
              mid_getTolerance_557b8123390d8d0c,
              mid_getTransform_305a4b8e889a5931,
              mid_getXAxis_f88961cca75a2c0a,
              mid_getYAxis_f88961cca75a2c0a,
              mid_project_328d0d966eeb9668,
              mid_reset_2810d2bec90e7b1c,
              mid_revertSelf_0640e6acf969ed28,
              mid_sameOrientationAs_cb9274a363000a77,
              mid_toSpace_0b4724b8dcaf44dc,
              mid_toSubSpace_f56955fdd71721f4,
              mid_wholeHyperplane_4fb9d52e7fabd495,
              mid_wholeSpace_1223d06efa3ccad7,
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
