#ifndef org_orekit_attitudes_FieldAttitude_H
#define org_orekit_attitudes_FieldAttitude_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
          class FieldRotation;
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class FieldAngularCoordinates;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class FieldAttitude : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e3fb72cc27e6c483,
          mid_init$_fb1376e69ffb8e6e,
          mid_init$_14ad51624d1f3f8d,
          mid_init$_dd1b2a9192d06339,
          mid_init$_1b16afdc0eb26364,
          mid_getDate_09b0a926600dfc14,
          mid_getOrientation_3a64e8ea05af639a,
          mid_getReferenceFrame_c8fe21bcdac65bf6,
          mid_getRotation_ac4489fdef1c3aef,
          mid_getRotationAcceleration_5791f80683b5227e,
          mid_getSpin_5791f80683b5227e,
          mid_shiftedBy_1bb050278f5e3878,
          mid_shiftedBy_a33d86f54ca7c82b,
          mid_toAttitude_78dca83e076ede35,
          mid_withReferenceFrame_5ada39731d5e8f52,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAttitude(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAttitude(const FieldAttitude& obj) : ::java::lang::Object(obj) {}

        FieldAttitude(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates &);
        FieldAttitude(const ::org::hipparchus::Field &, const ::org::orekit::attitudes::Attitude &);
        FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::FieldAngularCoordinates &);
        FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::Field &);

        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates getOrientation() const;
        ::org::orekit::frames::Frame getReferenceFrame() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getRotationAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getSpin() const;
        FieldAttitude shiftedBy(jdouble) const;
        FieldAttitude shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::attitudes::Attitude toAttitude() const;
        FieldAttitude withReferenceFrame(const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(FieldAttitude);
      extern PyTypeObject *PY_TYPE(FieldAttitude);

      class t_FieldAttitude {
      public:
        PyObject_HEAD
        FieldAttitude object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAttitude *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAttitude&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAttitude&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
