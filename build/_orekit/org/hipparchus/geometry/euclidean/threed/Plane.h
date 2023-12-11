#ifndef org_hipparchus_geometry_euclidean_threed_Plane_H
#define org_hipparchus_geometry_euclidean_threed_Plane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class SubPlane;
          class Plane;
          class Vector3D;
          class Line;
          class Euclidean3D;
          class PolyhedronsSet;
          class Rotation;
        }
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Point;
      namespace partitioning {
        class Hyperplane;
        class Embedding;
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
              mid_init$_9eca765a47180abb,
              mid_init$_8a3775c012d81228,
              mid_init$_7b8560643974313c,
              mid_contains_7ccf3b3f40d5fcd3,
              mid_copySelf_1fd0e17d0272ad27,
              mid_emptyHyperplane_45d5677cf604b36e,
              mid_getNormal_f88961cca75a2c0a,
              mid_getOffset_6c5cc1f7d7387606,
              mid_getOffset_cf1fec2b7b1c0efe,
              mid_getOffset_b540ea36818b5810,
              mid_getOrigin_f88961cca75a2c0a,
              mid_getPointAt_a18591be60e2d678,
              mid_getTolerance_557b8123390d8d0c,
              mid_getU_f88961cca75a2c0a,
              mid_getV_f88961cca75a2c0a,
              mid_intersection_915d07ea0c621755,
              mid_intersection_1adc2918a6a6e897,
              mid_intersection_6cfbbc81cf155b3e,
              mid_isSimilarTo_ba626117b2392f64,
              mid_project_328d0d966eeb9668,
              mid_reset_c6c929e9e9af7f84,
              mid_reset_be9548a8a583a03d,
              mid_revertSelf_0640e6acf969ed28,
              mid_rotate_5aeea1a6b4a20ee8,
              mid_sameOrientationAs_cb9274a363000a77,
              mid_toSpace_78d94b5fd2b1ad0c,
              mid_toSpace_5d6b94fad5d111c4,
              mid_toSubSpace_52abee4ee839df65,
              mid_toSubSpace_adc34d508fd7001c,
              mid_translate_7bc527dfa6d63039,
              mid_wholeHyperplane_45d5677cf604b36e,
              mid_wholeSpace_fb1aab73a260a0e4,
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
