#ifndef org_orekit_attitudes_Attitude_H
#define org_orekit_attitudes_Attitude_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeShiftable;
    }
    namespace utils {
      class AngularCoordinates;
      class TimeStampedAngularCoordinates;
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
          class Vector3D;
          class Rotation;
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
          mid_init$_9cc28a23ed35929f,
          mid_init$_2c8188d8ce9c0bed,
          mid_init$_0dc338dda588c0d5,
          mid_getDate_c325492395d89b24,
          mid_getOrientation_9825c51fb1940671,
          mid_getReferenceFrame_2c51111cc6894ba1,
          mid_getRotation_ff298a39b3cae5da,
          mid_getRotationAcceleration_8b724f8b4fdad1a2,
          mid_getSpin_8b724f8b4fdad1a2,
          mid_shiftedBy_4d06035acf6ca0aa,
          mid_withReferenceFrame_682a0bac5d9d92db,
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
