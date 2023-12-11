#ifndef org_orekit_attitudes_Attitude_H
#define org_orekit_attitudes_Attitude_H

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
        namespace threed {
          class Vector3D;
          class Rotation;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeShiftable;
      class TimeStamped;
    }
    namespace attitudes {
      class Attitude;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class Attitude : public ::java::lang::Object {
       public:
        enum {
          mid_init$_fd44fd61f38f328a,
          mid_init$_8d6d2d78e8e97666,
          mid_init$_f61e782a3e250190,
          mid_getDate_7a97f7e149e79afb,
          mid_getOrientation_99d3c751073fda6d,
          mid_getReferenceFrame_6c9bc0a928c56d4e,
          mid_getRotation_1e0dc1a6788897b9,
          mid_getRotationAcceleration_f88961cca75a2c0a,
          mid_getSpin_f88961cca75a2c0a,
          mid_shiftedBy_e946dd34d7cdbe89,
          mid_withReferenceFrame_32f130533643b5b7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Attitude(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Attitude(const Attitude& obj) : ::java::lang::Object(obj) {}

        Attitude(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::TimeStampedAngularCoordinates &);
        Attitude(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::AngularCoordinates &);
        Attitude(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::utils::TimeStampedAngularCoordinates getOrientation() const;
        ::org::orekit::frames::Frame getReferenceFrame() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getRotationAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getSpin() const;
        Attitude shiftedBy(jdouble) const;
        Attitude withReferenceFrame(const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(Attitude);
      extern PyTypeObject *PY_TYPE(Attitude);

      class t_Attitude {
      public:
        PyObject_HEAD
        Attitude object;
        static PyObject *wrap_Object(const Attitude&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
