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
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
          mid_init$_ce1f0f7b19db1321,
          mid_getA_557b8123390d8d0c,
          mid_getB_557b8123390d8d0c,
          mid_getCenter_f88961cca75a2c0a,
          mid_getCenterOfCurvature_990490e7ef486e74,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getU_f88961cca75a2c0a,
          mid_getV_f88961cca75a2c0a,
          mid_pointAt_20de5f9d51c6611f,
          mid_projectToEllipse_fc4b100c90055253,
          mid_projectToEllipse_990490e7ef486e74,
          mid_toPlane_3b3b6a3c97d1f7fa,
          mid_toSpace_ac3ac1fb666bf55b,
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
