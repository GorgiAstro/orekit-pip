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
          class IntervalsSet;
          class Vector1D;
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
              mid_init$_f039d136ebc28ae8,
              mid_copySelf_7b945166bba626c5,
              mid_emptyHyperplane_34496686a79d41d6,
              mid_getLocation_466c0ad242ce3f41,
              mid_getOffset_cf1fec2b7b1c0efe,
              mid_getOffset_b540ea36818b5810,
              mid_getTolerance_557b8123390d8d0c,
              mid_isDirect_89b302893bdbe1f1,
              mid_project_328d0d966eeb9668,
              mid_revertSelf_0640e6acf969ed28,
              mid_sameOrientationAs_cb9274a363000a77,
              mid_wholeHyperplane_34496686a79d41d6,
              mid_wholeSpace_49a234ce53c00b25,
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
