#ifndef org_hipparchus_geometry_euclidean_twod_Line_H
#define org_hipparchus_geometry_euclidean_twod_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
        namespace twod {
          class SubLine;
          class Vector2D;
          class PolygonsSet;
          class Line;
          class Euclidean2D;
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
              mid_init$_972c17f71377e474,
              mid_init$_519764c857b46f0a,
              mid_contains_2796df13348f6f80,
              mid_copySelf_1c3be7522a7ffc91,
              mid_distance_09691e2da2b6004b,
              mid_emptyHyperplane_937b475ef9f107f8,
              mid_getAngle_456d9a2f64d6b28d,
              mid_getOffset_efd5f05d00fd4f00,
              mid_getOffset_726dc963fac3505e,
              mid_getOffset_05fa5f52db18503d,
              mid_getOriginOffset_456d9a2f64d6b28d,
              mid_getPointAt_0f3b95dff8774a91,
              mid_getReverse_1c3be7522a7ffc91,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_getTransform_a90005a75aaa0bcf,
              mid_intersection_0e9560caa0fdd5e9,
              mid_isParallelTo_1b8ccd52fcb1cbc4,
              mid_project_ac445dfe898b403a,
              mid_reset_cd3b295331fbee3c,
              mid_reset_933dc8802e45bcb8,
              mid_revertSelf_7ae3461a92a43152,
              mid_sameOrientationAs_b99f508aafd89c77,
              mid_setAngle_77e0f9a1f260e2e5,
              mid_setOriginOffset_77e0f9a1f260e2e5,
              mid_toSpace_b3a52e5d1fbea985,
              mid_toSpace_6698e195f6e5dfff,
              mid_toSubSpace_f56ff726ce04194f,
              mid_toSubSpace_32bf1487354a978b,
              mid_translateToPoint_6b877e75654b72f2,
              mid_wholeHyperplane_937b475ef9f107f8,
              mid_wholeSpace_e03b0f65e838cccf,
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
