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
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
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
          mid_init$_62b9ceaa2d203299,
          mid_getA_b74f83833fdad017,
          mid_getB_b74f83833fdad017,
          mid_getCenter_8b724f8b4fdad1a2,
          mid_getCenterOfCurvature_3e1d04f71eb7f673,
          mid_getFrame_2c51111cc6894ba1,
          mid_getU_8b724f8b4fdad1a2,
          mid_getV_8b724f8b4fdad1a2,
          mid_pointAt_498f52cd8e5a7072,
          mid_projectToEllipse_b59fe39c52b8d345,
          mid_projectToEllipse_3e1d04f71eb7f673,
          mid_toPlane_9d707d8812de06bd,
          mid_toSpace_66b5e411a7caffe0,
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
