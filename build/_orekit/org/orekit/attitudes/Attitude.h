#ifndef org_orekit_attitudes_Attitude_H
#define org_orekit_attitudes_Attitude_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class TimeStampedAngularCoordinates;
    }
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
          mid_init$_3afccda4601b8f6c,
          mid_init$_015c89765fe30b90,
          mid_init$_aa1099d6021eb7ff,
          mid_getDate_80e11148db499dda,
          mid_getOrientation_f61c26acc5bceebd,
          mid_getReferenceFrame_cb151471db4570f0,
          mid_getRotation_4d68cff5f6e4403a,
          mid_getRotationAcceleration_032312bdeb3f2f93,
          mid_getSpin_032312bdeb3f2f93,
          mid_shiftedBy_c569d6a6dc30b75c,
          mid_withReferenceFrame_bfb6cce037814112,
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
