#ifndef org_orekit_bodies_Ellipse_H
#define org_orekit_bodies_Ellipse_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
        namespace threed {
          class Vector3D;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class Ellipse : public ::java::lang::Object {
       public:
        enum {
          mid_init$_2937540ec2093e7d,
          mid_getA_9981f74b2d109da6,
          mid_getB_9981f74b2d109da6,
          mid_getCenter_032312bdeb3f2f93,
          mid_getCenterOfCurvature_041693b38ced02ad,
          mid_getFrame_cb151471db4570f0,
          mid_getU_032312bdeb3f2f93,
          mid_getV_032312bdeb3f2f93,
          mid_pointAt_98a3eeef43dce47a,
          mid_projectToEllipse_d354398d2df6ac32,
          mid_projectToEllipse_041693b38ced02ad,
          mid_toPlane_2e7d3e3e3ac549f4,
          mid_toSpace_0e24ce6d026e4bfd,
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
