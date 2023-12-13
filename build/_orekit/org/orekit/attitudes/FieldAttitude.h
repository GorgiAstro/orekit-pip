#ifndef org_orekit_attitudes_FieldAttitude_H
#define org_orekit_attitudes_FieldAttitude_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class FieldAngularCoordinates;
    }
    namespace time {
      class FieldTimeShiftable;
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace frames {
      class Frame;
    }
  }
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
          mid_init$_1bc951f35febb40d,
          mid_init$_bfc56c8bb2c571c3,
          mid_init$_66a409719d3da56b,
          mid_init$_8c1049989487e742,
          mid_init$_6f0f05cb4f827357,
          mid_getDate_fa23a4301b9c83e7,
          mid_getOrientation_508aa3ee9876a7be,
          mid_getReferenceFrame_2c51111cc6894ba1,
          mid_getRotation_1e54a5caa5199c2e,
          mid_getRotationAcceleration_ff5ac73a7b43eddd,
          mid_getSpin_ff5ac73a7b43eddd,
          mid_shiftedBy_0d906c51b1e0b7ab,
          mid_shiftedBy_9b2f89e5c043156c,
          mid_toAttitude_9d85ee1243dd5d25,
          mid_withReferenceFrame_07f6f41a69716d83,
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
