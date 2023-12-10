#ifndef org_orekit_bodies_Ellipse_H
#define org_orekit_bodies_Ellipse_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
        namespace twod {
          class Vector2D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class Ellipse : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ce5a6e6d64bae5a,
          mid_getA_456d9a2f64d6b28d,
          mid_getB_456d9a2f64d6b28d,
          mid_getCenter_17a952530a808943,
          mid_getCenterOfCurvature_91634fa69e69124f,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getU_17a952530a808943,
          mid_getV_17a952530a808943,
          mid_pointAt_5f993a721a1d8c59,
          mid_projectToEllipse_95abb8abb7f5aee0,
          mid_projectToEllipse_91634fa69e69124f,
          mid_toPlane_e74bef55b3143874,
          mid_toSpace_8c454111e739388f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Ellipse(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Ellipse(const Ellipse& obj) : ::java::lang::Object(obj) {}

        Ellipse(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, const ::org::orekit::frames::Frame &);

        jdouble getA() const;
        jdouble getB() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getCenter() const;
        ::org::hipparchus::geometry::euclidean::twod::Vector2D getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getU() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getV() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D pointAt(jdouble) const;
        ::org::orekit::utils::TimeStampedPVCoordinates projectToEllipse(const ::org::orekit::utils::TimeStampedPVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::twod::Vector2D projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
        ::org::hipparchus::geometry::euclidean::twod::Vector2D toPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(Ellipse);
      extern PyTypeObject *PY_TYPE(Ellipse);

      class t_Ellipse {
      public:
        PyObject_HEAD
        Ellipse object;
        static PyObject *wrap_Object(const Ellipse&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
