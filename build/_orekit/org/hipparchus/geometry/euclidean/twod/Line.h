#ifndef org_hipparchus_geometry_euclidean_twod_Line_H
#define org_hipparchus_geometry_euclidean_twod_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Hyperplane;
        class Embedding;
        class Transform;
      }
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
          class Line;
          class SubLine;
          class PolygonsSet;
        }
        namespace oned {
          class Vector1D;
          class Euclidean1D;
        }
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
              mid_init$_7f7842afd4d898dc,
              mid_init$_9216d012af6189c5,
              mid_contains_a523d32086548a9e,
              mid_copySelf_72d7a4f683ad4a34,
              mid_distance_fa70b1ee85089725,
              mid_emptyHyperplane_deb002e8218af0bd,
              mid_getAngle_9981f74b2d109da6,
              mid_getOffset_d4ab1cb22c6eb7d2,
              mid_getOffset_277cb62c4ec87155,
              mid_getOffset_54eca2a6b3ac81a2,
              mid_getOriginOffset_9981f74b2d109da6,
              mid_getPointAt_e08904c816852751,
              mid_getReverse_72d7a4f683ad4a34,
              mid_getTolerance_9981f74b2d109da6,
              mid_getTransform_6439a2a54f3f7c30,
              mid_intersection_27be2ef9b395a633,
              mid_isParallelTo_d13b3da93e072da2,
              mid_project_ff0c84956c63705d,
              mid_reset_45eff2f325e3cefd,
              mid_reset_aac284ff8cc11de8,
              mid_revertSelf_ff7cb6c242604316,
              mid_sameOrientationAs_51737f919fe0cf72,
              mid_setAngle_1ad26e8c8c0cd65b,
              mid_setOriginOffset_1ad26e8c8c0cd65b,
              mid_toSpace_d7932c1ec0f8a119,
              mid_toSpace_bf5660dd5343a17c,
              mid_toSubSpace_8868fe0c3fe0aa37,
              mid_toSubSpace_0184a754d67728b4,
              mid_translateToPoint_bcb0f1d2f82539d7,
              mid_wholeHyperplane_deb002e8218af0bd,
              mid_wholeSpace_72311010d4d45ad4,
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
