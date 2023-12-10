#ifndef org_orekit_attitudes_FieldAttitude_H
#define org_orekit_attitudes_FieldAttitude_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldVector3D;
          class FieldRotation;
          class Vector3D;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldTimeShiftable;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace frames {
      class Frame;
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
          mid_init$_df4a5ea802673084,
          mid_init$_a3f9433b549639d7,
          mid_init$_df9d60e253dca407,
          mid_init$_b7dfe93e78e2f3c9,
          mid_init$_00f2dbe02c1f4a6b,
          mid_getDate_51da00d5b8a3b5df,
          mid_getOrientation_d8696322b912d5fd,
          mid_getReferenceFrame_b86f9f61d97a7244,
          mid_getRotation_1d339a2ee3a3323a,
          mid_getRotationAcceleration_716f50c86ffc8da7,
          mid_getSpin_716f50c86ffc8da7,
          mid_shiftedBy_309635d047969067,
          mid_shiftedBy_482ffc39eb1c8a04,
          mid_toAttitude_bd12f6f74bd44dca,
          mid_withReferenceFrame_f3d56c354e112e1b,
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
