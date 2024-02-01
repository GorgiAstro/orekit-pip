#ifndef org_hipparchus_geometry_euclidean_oned_OrientedPoint_H
#define org_hipparchus_geometry_euclidean_oned_OrientedPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Hyperplane;
      }
      class Vector;
      class Point;
      namespace euclidean {
        namespace oned {
          class OrientedPoint;
          class IntervalsSet;
          class Vector1D;
          class Euclidean1D;
          class SubOrientedPoint;
        }
      }
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
              mid_init$_626e303a54ef8cd1,
              mid_copySelf_94525402f1c54c7a,
              mid_emptyHyperplane_14c0810a4442ccfe,
              mid_getLocation_dfd07178ba1b5f7f,
              mid_getOffset_277cb62c4ec87155,
              mid_getOffset_54eca2a6b3ac81a2,
              mid_getTolerance_9981f74b2d109da6,
              mid_isDirect_eee3de00fe971136,
              mid_project_ff0c84956c63705d,
              mid_revertSelf_ff7cb6c242604316,
              mid_sameOrientationAs_51737f919fe0cf72,
              mid_wholeHyperplane_14c0810a4442ccfe,
              mid_wholeSpace_12c95b7fca28f858,
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
