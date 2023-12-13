#ifndef org_hipparchus_geometry_euclidean_oned_OrientedPoint_H
#define org_hipparchus_geometry_euclidean_oned_OrientedPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class OrientedPoint;
          class Euclidean1D;
          class Vector1D;
          class IntervalsSet;
          class SubOrientedPoint;
        }
      }
      class Point;
      namespace partitioning {
        class Hyperplane;
      }
      class Vector;
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
        namespace oned {

          class OrientedPoint : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9cfe050a265de486,
              mid_copySelf_5f8b6db3a8315733,
              mid_emptyHyperplane_a59721c72afcee95,
              mid_getLocation_62608abb8b57a58e,
              mid_getOffset_f0dd8cb59ea09794,
              mid_getOffset_2f915fa9762130df,
              mid_getTolerance_b74f83833fdad017,
              mid_isDirect_9ab94ac1dc23b105,
              mid_project_2214f7ad5b6ca158,
              mid_revertSelf_a1fa5dae97ea5ed2,
              mid_sameOrientationAs_806ecfbca1984226,
              mid_wholeHyperplane_a59721c72afcee95,
              mid_wholeSpace_9520063cff244850,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrientedPoint(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrientedPoint(const OrientedPoint& obj) : ::java::lang::Object(obj) {}

            OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D &, jboolean, jdouble);

            OrientedPoint copySelf() const;
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint emptyHyperplane() const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D getLocation() const;
            jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Vector &) const;
            jdouble getTolerance() const;
            jboolean isDirect() const;
            ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
            void revertSelf() const;
            jboolean sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint wholeHyperplane() const;
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet wholeSpace() const;
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
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(OrientedPoint);
          extern PyTypeObject *PY_TYPE(OrientedPoint);

          class t_OrientedPoint {
          public:
            PyObject_HEAD
            OrientedPoint object;
            static PyObject *wrap_Object(const OrientedPoint&);
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
