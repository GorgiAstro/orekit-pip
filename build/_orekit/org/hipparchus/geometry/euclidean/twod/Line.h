#ifndef org_hipparchus_geometry_euclidean_twod_Line_H
#define org_hipparchus_geometry_euclidean_twod_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class PolygonsSet;
          class Line;
          class Vector2D;
          class Euclidean2D;
          class SubLine;
        }
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
      namespace partitioning {
        class Transform;
        class Hyperplane;
        class Embedding;
      }
      class Point;
      class Vector;
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
      namespace euclidean {
        namespace twod {

          class Line : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b2fa07e96193ae69,
              mid_init$_305e00e57a81d096,
              mid_contains_3a693ebb932d4aff,
              mid_copySelf_e207c2684f5ea968,
              mid_distance_f29c6927714cda74,
              mid_emptyHyperplane_c6d04aa189a69292,
              mid_getAngle_557b8123390d8d0c,
              mid_getOffset_2ee22a1420c3a4b8,
              mid_getOffset_cf1fec2b7b1c0efe,
              mid_getOffset_b540ea36818b5810,
              mid_getOriginOffset_557b8123390d8d0c,
              mid_getPointAt_37d36001218f4374,
              mid_getReverse_e207c2684f5ea968,
              mid_getTolerance_557b8123390d8d0c,
              mid_getTransform_ed7f83d18c2135d3,
              mid_intersection_a9dc84df4c4b4411,
              mid_isParallelTo_7009eecb33826b22,
              mid_project_328d0d966eeb9668,
              mid_reset_aa286ab7725055db,
              mid_reset_c3edcc9ac6d6b0fb,
              mid_revertSelf_0640e6acf969ed28,
              mid_sameOrientationAs_cb9274a363000a77,
              mid_setAngle_10f281d777284cea,
              mid_setOriginOffset_10f281d777284cea,
              mid_toSpace_52abee4ee839df65,
              mid_toSpace_adc34d508fd7001c,
              mid_toSubSpace_42ff1f7fd4bd45c4,
              mid_toSubSpace_be3d5e0f525cd980,
              mid_translateToPoint_086d06980fa26fc1,
              mid_wholeHyperplane_c6d04aa189a69292,
              mid_wholeSpace_14eed69045150761,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Line(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Line(const Line& obj) : ::java::lang::Object(obj) {}

            Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, jdouble);
            Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, jdouble, jdouble);

            jboolean contains(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            Line copySelf() const;
            jdouble distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            ::org::hipparchus::geometry::euclidean::twod::SubLine emptyHyperplane() const;
            jdouble getAngle() const;
            jdouble getOffset(const Line &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Vector &) const;
            jdouble getOriginOffset() const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D getPointAt(const ::org::hipparchus::geometry::euclidean::oned::Vector1D &, jdouble) const;
            Line getReverse() const;
            jdouble getTolerance() const;
            static ::org::hipparchus::geometry::partitioning::Transform getTransform(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D intersection(const Line &) const;
            jboolean isParallelTo(const Line &) const;
            ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
            void reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            void reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, jdouble) const;
            void revertSelf() const;
            jboolean sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
            void setAngle(jdouble) const;
            void setOriginOffset(jdouble) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D toSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D toSpace(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D toSubSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D toSubSpace(const ::org::hipparchus::geometry::Vector &) const;
            void translateToPoint(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            ::org::hipparchus::geometry::euclidean::twod::SubLine wholeHyperplane() const;
            ::org::hipparchus::geometry::euclidean::twod::PolygonsSet wholeSpace() const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Line);
          extern PyTypeObject *PY_TYPE(Line);

          class t_Line {
          public:
            PyObject_HEAD
            Line object;
            static PyObject *wrap_Object(const Line&);
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
