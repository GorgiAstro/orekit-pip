#ifndef org_hipparchus_geometry_euclidean_threed_Plane_H
#define org_hipparchus_geometry_euclidean_threed_Plane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Plane;
          class Line;
          class Rotation;
          class Euclidean3D;
          class Vector3D;
          class SubPlane;
          class PolyhedronsSet;
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
      class Vector;
      class Point;
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
              mid_init$_ce07cf20f467033d,
              mid_init$_dcbb005903c9a2a8,
              mid_init$_cf8e500bc38590d2,
              mid_contains_decdc24b3aebe77a,
              mid_copySelf_4cc621333aee53af,
              mid_emptyHyperplane_47a89fe434c9e6a8,
              mid_getNormal_032312bdeb3f2f93,
              mid_getOffset_c9d1fee7ba0bebb4,
              mid_getOffset_277cb62c4ec87155,
              mid_getOffset_54eca2a6b3ac81a2,
              mid_getOrigin_032312bdeb3f2f93,
              mid_getPointAt_702368c5a77022fb,
              mid_getTolerance_9981f74b2d109da6,
              mid_getU_032312bdeb3f2f93,
              mid_getV_032312bdeb3f2f93,
              mid_intersection_99a30a324f9c6beb,
              mid_intersection_22dacb7a9f97de0b,
              mid_intersection_82363443c52ee488,
              mid_isSimilarTo_2bcc33f53e55c9ae,
              mid_project_ff0c84956c63705d,
              mid_reset_641dc835841c48a5,
              mid_reset_c8e9682f0daaca68,
              mid_revertSelf_ff7cb6c242604316,
              mid_rotate_915dd337be1d3918,
              mid_sameOrientationAs_51737f919fe0cf72,
              mid_toSpace_7b74ee30f4dffb8d,
              mid_toSpace_8e71f2ea9c6b3602,
              mid_toSubSpace_d7932c1ec0f8a119,
              mid_toSubSpace_bf5660dd5343a17c,
              mid_translate_5aa14249a1f4c5b0,
              mid_wholeHyperplane_47a89fe434c9e6a8,
              mid_wholeSpace_5af6756fe7e06329,
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
