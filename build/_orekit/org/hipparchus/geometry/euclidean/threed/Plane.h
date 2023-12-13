#ifndef org_hipparchus_geometry_euclidean_threed_Plane_H
#define org_hipparchus_geometry_euclidean_threed_Plane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Line;
          class Euclidean3D;
          class Plane;
          class SubPlane;
          class Rotation;
          class PolyhedronsSet;
        }
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Point;
      namespace partitioning {
        class Embedding;
        class Hyperplane;
      }
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
              mid_init$_4f2529905f184526,
              mid_init$_4fbea8fa1cddeb2d,
              mid_init$_0035d60a845c4ec5,
              mid_contains_82d995e738c9e027,
              mid_copySelf_b56871b2e706380d,
              mid_emptyHyperplane_25ec594b320f384f,
              mid_getNormal_8b724f8b4fdad1a2,
              mid_getOffset_194128a9734e96f1,
              mid_getOffset_f0dd8cb59ea09794,
              mid_getOffset_2f915fa9762130df,
              mid_getOrigin_8b724f8b4fdad1a2,
              mid_getPointAt_a46843b09338a6b2,
              mid_getTolerance_b74f83833fdad017,
              mid_getU_8b724f8b4fdad1a2,
              mid_getV_8b724f8b4fdad1a2,
              mid_intersection_e47e722c2bd142aa,
              mid_intersection_9a2d2d972a13926d,
              mid_intersection_c1a28ed04e77e58a,
              mid_isSimilarTo_0ce9611235040c3a,
              mid_project_2214f7ad5b6ca158,
              mid_reset_f1cc4a0d1d70e436,
              mid_reset_b651b5ef96594ce8,
              mid_revertSelf_a1fa5dae97ea5ed2,
              mid_rotate_8cce0f7fbdd637a5,
              mid_sameOrientationAs_806ecfbca1984226,
              mid_toSpace_c015d3ffc61ff7f9,
              mid_toSpace_e21381ba36e4ea13,
              mid_toSubSpace_541d7608593f5738,
              mid_toSubSpace_4f90fdb34b7d1107,
              mid_translate_80ab4636868c985a,
              mid_wholeHyperplane_25ec594b320f384f,
              mid_wholeSpace_9d13f34dd62656fc,
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
