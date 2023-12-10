#ifndef org_orekit_attitudes_Attitude_H
#define org_orekit_attitudes_Attitude_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
      class TimeShiftable;
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
          mid_init$_dea257300c01aa24,
          mid_init$_548f5fe1e94cd245,
          mid_init$_deeadd030b9b683a,
          mid_getDate_85703d13e302437e,
          mid_getOrientation_b8bfd7046d8ee6f7,
          mid_getReferenceFrame_b86f9f61d97a7244,
          mid_getRotation_de86c7efc42eac14,
          mid_getRotationAcceleration_d52645e0d4c07563,
          mid_getSpin_d52645e0d4c07563,
          mid_shiftedBy_97390777173603db,
          mid_withReferenceFrame_4b6ab70a25936a1a,
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
