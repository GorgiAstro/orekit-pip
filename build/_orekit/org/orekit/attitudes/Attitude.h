#ifndef org_orekit_attitudes_Attitude_H
#define org_orekit_attitudes_Attitude_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeShiftable;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace utils {
      class AngularCoordinates;
      class TimeStampedAngularCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
        }
      }
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
    namespace attitudes {

      class Attitude : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a7cd0652731bfe10,
          mid_init$_5f47ea0b011c6224,
          mid_init$_45d9735c7810f3c9,
          mid_getDate_aaa854c403487cf3,
          mid_getOrientation_8b3d104eb3a71bfc,
          mid_getReferenceFrame_c8fe21bcdac65bf6,
          mid_getRotation_24d2e432e376f9a0,
          mid_getRotationAcceleration_17a952530a808943,
          mid_getSpin_17a952530a808943,
          mid_shiftedBy_a136a2ef3bf9ed86,
          mid_withReferenceFrame_a8de43036058d924,
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
