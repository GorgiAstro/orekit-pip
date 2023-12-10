#ifndef org_hipparchus_geometry_euclidean_threed_Plane_H
#define org_hipparchus_geometry_euclidean_threed_Plane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Euclidean3D;
          class SubPlane;
          class Vector3D;
          class PolyhedronsSet;
          class Rotation;
          class Line;
          class Plane;
        }
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      namespace partitioning {
        class Hyperplane;
        class Embedding;
      }
      class Point;
      class Vector;
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
              mid_init$_c1cd2c1af3ffd51b,
              mid_init$_7b3ba1964c11031c,
              mid_init$_6ae122e418c08fb7,
              mid_contains_c8fb5394ceb559de,
              mid_copySelf_aff8e78f15321997,
              mid_emptyHyperplane_876cf5d918461b4c,
              mid_getNormal_17a952530a808943,
              mid_getOffset_8f8cd769e2ea7090,
              mid_getOffset_726dc963fac3505e,
              mid_getOffset_05fa5f52db18503d,
              mid_getOrigin_17a952530a808943,
              mid_getPointAt_1606225a086ef4a2,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_getU_17a952530a808943,
              mid_getV_17a952530a808943,
              mid_intersection_26c38ef25f8d6fd7,
              mid_intersection_12a6be865bfd0631,
              mid_intersection_88aec6de31ddfb9c,
              mid_isSimilarTo_bbfd2fd6c0e6d731,
              mid_project_ac445dfe898b403a,
              mid_reset_724ea66e471a6906,
              mid_reset_bedd188d9f399c34,
              mid_revertSelf_7ae3461a92a43152,
              mid_rotate_35a9ecae4a81c49a,
              mid_sameOrientationAs_b99f508aafd89c77,
              mid_toSpace_a49086d4148c0139,
              mid_toSpace_7a21411cb28c8c28,
              mid_toSubSpace_b3a52e5d1fbea985,
              mid_toSubSpace_6698e195f6e5dfff,
              mid_translate_ff434f54623559ee,
              mid_wholeHyperplane_876cf5d918461b4c,
              mid_wholeSpace_17971aa7029eaa3b,
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
