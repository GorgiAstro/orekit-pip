#ifndef org_hipparchus_geometry_euclidean_threed_Plane_H
#define org_hipparchus_geometry_euclidean_threed_Plane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace partitioning {
        class Embedding;
        class Hyperplane;
      }
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
        namespace threed {
          class SubPlane;
          class Rotation;
          class Line;
          class PolyhedronsSet;
          class Plane;
          class Vector3D;
          class Euclidean3D;
        }
      }
      class Point;
    }
    namespace exception {
      class MathRuntimeException;
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
      namespace euclidean {
        namespace threed {

          class Plane : public ::java::lang::Object {
           public:
            enum {
              mid_init$_71a7c3cfed678f9d,
              mid_init$_5da06482a46416aa,
              mid_init$_ec3112f4a5b73c95,
              mid_contains_ab4ed00ccf0defd6,
              mid_copySelf_1e83f05440df3f7f,
              mid_emptyHyperplane_0e32c3e36042d486,
              mid_getNormal_d52645e0d4c07563,
              mid_getOffset_194a2acf6985d1d7,
              mid_getOffset_07bb97c2794cf6b1,
              mid_getOffset_b4822d5266bca26e,
              mid_getOrigin_d52645e0d4c07563,
              mid_getPointAt_5f7e52137dc6173e,
              mid_getTolerance_dff5885c2c873297,
              mid_getU_d52645e0d4c07563,
              mid_getV_d52645e0d4c07563,
              mid_intersection_cdaae38017a00464,
              mid_intersection_daef14cbfc833ae9,
              mid_intersection_98cbff8e29bca0b1,
              mid_isSimilarTo_9b207ef3ceb142b8,
              mid_project_c48805c2dda937c6,
              mid_reset_4c8b15479bee9030,
              mid_reset_8f7d2a24ef2ff591,
              mid_revertSelf_0fa09c18fee449d5,
              mid_rotate_1bf297956c6bafd3,
              mid_sameOrientationAs_5bc340c02d9ac484,
              mid_toSpace_25054c2060d7aee4,
              mid_toSpace_84b1343e67eeaa7b,
              mid_toSubSpace_02aa1f4808a162d3,
              mid_toSubSpace_8144ab28b67d94ff,
              mid_translate_c6a5f2e7e6d58765,
              mid_wholeHyperplane_0e32c3e36042d486,
              mid_wholeSpace_344a613a0061fc1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Plane(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Plane(const Plane& obj) : ::java::lang::Object(obj) {}

            Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
            Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
            Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

            jboolean contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            Plane copySelf() const;
            ::org::hipparchus::geometry::euclidean::threed::SubPlane emptyHyperplane() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getNormal() const;
            jdouble getOffset(const Plane &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getOrigin() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getPointAt(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, jdouble) const;
            jdouble getTolerance() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getU() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getV() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D intersection(const ::org::hipparchus::geometry::euclidean::threed::Line &) const;
            ::org::hipparchus::geometry::euclidean::threed::Line intersection(const Plane &) const;
            static ::org::hipparchus::geometry::euclidean::threed::Vector3D intersection(const Plane &, const Plane &, const Plane &);
            jboolean isSimilarTo(const Plane &) const;
            ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
            void reset(const Plane &) const;
            void reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void revertSelf() const;
            Plane rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &) const;
            jboolean sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D toSubSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D toSubSpace(const ::org::hipparchus::geometry::Vector &) const;
            Plane translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::geometry::euclidean::threed::SubPlane wholeHyperplane() const;
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet wholeSpace() const;
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
      namespace euclidean {
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(Plane);
          extern PyTypeObject *PY_TYPE(Plane);

          class t_Plane {
          public:
            PyObject_HEAD
            Plane object;
            static PyObject *wrap_Object(const Plane&);
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
