#ifndef org_hipparchus_geometry_euclidean_threed_Line_H
#define org_hipparchus_geometry_euclidean_threed_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Embedding;
      }
      class Vector;
      namespace euclidean {
        namespace threed {
          class Line;
          class Euclidean3D;
          class Vector3D;
          class SubLine;
        }
        namespace oned {
          class Vector1D;
          class Euclidean1D;
        }
      }
      class Point;
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
        namespace threed {

          class Line : public ::java::lang::Object {
           public:
            enum {
              mid_init$_dcbb005903c9a2a8,
              mid_closestPoint_99a30a324f9c6beb,
              mid_contains_decdc24b3aebe77a,
              mid_distance_3897d5a2b6732a0d,
              mid_distance_78c2296af19efe37,
              mid_fromDirection_e3d528c31be14ab0,
              mid_getAbscissa_78c2296af19efe37,
              mid_getDirection_032312bdeb3f2f93,
              mid_getOrigin_032312bdeb3f2f93,
              mid_getTolerance_9981f74b2d109da6,
              mid_intersection_99a30a324f9c6beb,
              mid_isSimilarTo_750b97eefc752f09,
              mid_pointAt_98a3eeef43dce47a,
              mid_reset_c8e9682f0daaca68,
              mid_revert_9d5e1fb92f24d9b0,
              mid_toSpace_7b74ee30f4dffb8d,
              mid_toSpace_8e71f2ea9c6b3602,
              mid_toSubSpace_8868fe0c3fe0aa37,
              mid_toSubSpace_0184a754d67728b4,
              mid_wholeLine_e40b4add07b3fcc3,
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

            Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D closestPoint(const Line &) const;
            jboolean contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            jdouble distance(const Line &) const;
            jdouble distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static Line fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
            jdouble getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getOrigin() const;
            jdouble getTolerance() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D intersection(const Line &) const;
            jboolean isSimilarTo(const Line &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D pointAt(jdouble) const;
            void reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            Line revert() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D toSubSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D toSubSpace(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::threed::SubLine wholeLine() const;
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
