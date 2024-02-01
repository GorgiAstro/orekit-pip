#ifndef org_orekit_attitudes_FieldAttitude_H
#define org_orekit_attitudes_FieldAttitude_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
          class Rotation;
          class Vector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldTimeShiftable;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
    }
    namespace frames {
      class Frame;
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
          mid_init$_f9186b23d2ab2a5d,
          mid_init$_a937292011bfa7b6,
          mid_init$_da30998d712a0da0,
          mid_init$_8b19bbb96b06c376,
          mid_init$_cc8fc18d776df738,
          mid_getDate_1fea28374011eef5,
          mid_getOrientation_3c739ea1aa8f99e1,
          mid_getReferenceFrame_cb151471db4570f0,
          mid_getRotation_5c8e6f300713559c,
          mid_getRotationAcceleration_d1b42a6748e907f9,
          mid_getSpin_d1b42a6748e907f9,
          mid_shiftedBy_d86ca4d933b5a0f2,
          mid_shiftedBy_937a2bd33cd4a521,
          mid_toAttitude_83f44b5ac6431edc,
          mid_withReferenceFrame_640898f7e015318c,
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
