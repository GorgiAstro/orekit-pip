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
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class Ellipse : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a454bb4a34264e48,
          mid_getA_dff5885c2c873297,
          mid_getB_dff5885c2c873297,
          mid_getCenter_d52645e0d4c07563,
          mid_getCenterOfCurvature_943908560e598858,
          mid_getFrame_b86f9f61d97a7244,
          mid_getU_d52645e0d4c07563,
          mid_getV_d52645e0d4c07563,
          mid_pointAt_9137bba253a33d9c,
          mid_projectToEllipse_fe87e6eba6ef42f9,
          mid_projectToEllipse_943908560e598858,
          mid_toPlane_6888ee2da1e4e6ff,
          mid_toSpace_de1c0a3cb97333a9,
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
