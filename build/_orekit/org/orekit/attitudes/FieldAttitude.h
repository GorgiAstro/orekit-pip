#ifndef org_orekit_attitudes_FieldAttitude_H
#define org_orekit_attitudes_FieldAttitude_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class FieldAngularCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class FieldTimeShiftable;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
          class Rotation;
          class FieldRotation;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
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
          mid_init$_d19b0669806052fb,
          mid_init$_5dfce6dcb2f2f4fa,
          mid_init$_ff527da09f82b6d2,
          mid_init$_8dfe6ba809ac1d2d,
          mid_init$_0de1d014cc09f042,
          mid_getDate_f1fe4daf77c66560,
          mid_getOrientation_6ee4b6b8d0c547ac,
          mid_getReferenceFrame_6c9bc0a928c56d4e,
          mid_getRotation_73da4eeccf2b7e14,
          mid_getRotationAcceleration_2d64addf4c3391d9,
          mid_getSpin_2d64addf4c3391d9,
          mid_shiftedBy_7f36c3f6f9d790d4,
          mid_shiftedBy_2ba1b5f5b87774e7,
          mid_toAttitude_ed1eef73b5133690,
          mid_withReferenceFrame_708b51366c08d226,
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
