#ifndef org_hipparchus_geometry_euclidean_oned_OrientedPoint_H
#define org_hipparchus_geometry_euclidean_oned_OrientedPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class OrientedPoint;
          class SubOrientedPoint;
          class IntervalsSet;
          class Vector1D;
        }
      }
      namespace partitioning {
        class Hyperplane;
      }
      class Point;
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
              mid_init$_720dce0683153e53,
              mid_copySelf_9eae96258c20e3c4,
              mid_emptyHyperplane_faea651993278be1,
              mid_getLocation_382bf37547292fb5,
              mid_getOffset_726dc963fac3505e,
              mid_getOffset_05fa5f52db18503d,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_isDirect_e470b6d9e0d979db,
              mid_project_ac445dfe898b403a,
              mid_revertSelf_7ae3461a92a43152,
              mid_sameOrientationAs_b99f508aafd89c77,
              mid_wholeHyperplane_faea651993278be1,
              mid_wholeSpace_9f4769cdc5713998,
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
