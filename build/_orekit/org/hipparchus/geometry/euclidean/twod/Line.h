#ifndef org_hipparchus_geometry_euclidean_twod_Line_H
#define org_hipparchus_geometry_euclidean_twod_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace partitioning {
        class Embedding;
        class Transform;
        class Hyperplane;
      }
      class Point;
      namespace euclidean {
        namespace twod {
          class SubLine;
          class Euclidean2D;
          class PolygonsSet;
          class Line;
          class Vector2D;
        }
        namespace oned {
          class Euclidean1D;
          class Vector1D;
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
      namespace euclidean {
        namespace twod {

          class Line : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9e348818a9543cf1,
              mid_init$_05f32db2daa9c7a1,
              mid_contains_7af1c8b167be0423,
              mid_copySelf_4dee9d21a28a0b70,
              mid_distance_1b5717d3483243c3,
              mid_emptyHyperplane_1f609e73389d4cda,
              mid_getAngle_dff5885c2c873297,
              mid_getOffset_f5f1256fc86329c5,
              mid_getOffset_07bb97c2794cf6b1,
              mid_getOffset_b4822d5266bca26e,
              mid_getOriginOffset_dff5885c2c873297,
              mid_getPointAt_3e5a9728959ace85,
              mid_getReverse_4dee9d21a28a0b70,
              mid_getTolerance_dff5885c2c873297,
              mid_getTransform_d2ac69175fff569b,
              mid_intersection_4a2ad0902b8bc9e4,
              mid_isParallelTo_3e38059ed4e79195,
              mid_project_c48805c2dda937c6,
              mid_reset_e3d5559701692566,
              mid_reset_268b82d2b2be6bb4,
              mid_revertSelf_0fa09c18fee449d5,
              mid_sameOrientationAs_5bc340c02d9ac484,
              mid_setAngle_17db3a65980d3441,
              mid_setOriginOffset_17db3a65980d3441,
              mid_toSpace_02aa1f4808a162d3,
              mid_toSpace_8144ab28b67d94ff,
              mid_toSubSpace_d43a3b6426dc1754,
              mid_toSubSpace_b46f57fa6217d00f,
              mid_translateToPoint_6008d3447ce702ca,
              mid_wholeHyperplane_1f609e73389d4cda,
              mid_wholeSpace_cd159e87cc5dab72,
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
