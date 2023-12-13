#ifndef org_hipparchus_geometry_euclidean_twod_Line_H
#define org_hipparchus_geometry_euclidean_twod_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Line;
          class PolygonsSet;
          class SubLine;
          class Euclidean2D;
        }
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
      namespace partitioning {
        class Embedding;
        class Hyperplane;
        class Transform;
      }
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
              mid_init$_14bec7b2bdc550d3,
              mid_init$_bd9cd5e56b659d61,
              mid_contains_7f9cee33caf2d2df,
              mid_copySelf_f76ed72539e37ce2,
              mid_distance_a7f439b8ba8ffc55,
              mid_emptyHyperplane_dbab5bf6f6485ce8,
              mid_getAngle_b74f83833fdad017,
              mid_getOffset_991880b3f2f7e107,
              mid_getOffset_f0dd8cb59ea09794,
              mid_getOffset_2f915fa9762130df,
              mid_getOriginOffset_b74f83833fdad017,
              mid_getPointAt_22a6b58b73b3753b,
              mid_getReverse_f76ed72539e37ce2,
              mid_getTolerance_b74f83833fdad017,
              mid_getTransform_677c2cd6ff5569fd,
              mid_intersection_f461b019c08ce2f9,
              mid_isParallelTo_88eea5997cf84611,
              mid_project_2214f7ad5b6ca158,
              mid_reset_19aaf4ce06642948,
              mid_reset_0458ed3c331169c7,
              mid_revertSelf_a1fa5dae97ea5ed2,
              mid_sameOrientationAs_806ecfbca1984226,
              mid_setAngle_8ba9fe7a847cecad,
              mid_setOriginOffset_8ba9fe7a847cecad,
              mid_toSpace_541d7608593f5738,
              mid_toSpace_4f90fdb34b7d1107,
              mid_toSubSpace_b2178ad896cd2546,
              mid_toSubSpace_b1d2ab531c8e2a03,
              mid_translateToPoint_e94ae32a63c9501d,
              mid_wholeHyperplane_dbab5bf6f6485ce8,
              mid_wholeSpace_f9a97598fbca1de4,
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
