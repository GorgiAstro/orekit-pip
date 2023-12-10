#ifndef org_orekit_frames_FieldTransform_H
#define org_orekit_frames_FieldTransform_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldTimeShiftable;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class FieldAngularCoordinates;
      class AngularDerivativesFilter;
      class FieldPVCoordinates;
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
      class TimeStampedFieldPVCoordinates;
    }
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Transform;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class FieldTransform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b65ab84bb47d00a7,
          mid_init$_468ba0bc6c5bf070,
          mid_init$_26718f4f8a0dd037,
          mid_init$_ffeb9db3a56160f3,
          mid_init$_377b90ea2be02ed7,
          mid_init$_3a3329f14a7830fd,
          mid_init$_e4eca126a7326a31,
          mid_init$_3b280fe84d2fa2bd,
          mid_init$_b615b416f90b473e,
          mid_init$_22c42e194d2f9e41,
          mid_freeze_8c35d0b6fdd377c3,
          mid_getAcceleration_716f50c86ffc8da7,
          mid_getAngular_816428dc64133c35,
          mid_getCartesian_aae6180d70913ad4,
          mid_getDate_85703d13e302437e,
          mid_getFieldDate_51da00d5b8a3b5df,
          mid_getIdentity_e1a67a7e3aeecd7e,
          mid_getInverse_8c35d0b6fdd377c3,
          mid_getJacobian_17a769a90b4358b9,
          mid_getRotation_1d339a2ee3a3323a,
          mid_getRotationAcceleration_716f50c86ffc8da7,
          mid_getRotationRate_716f50c86ffc8da7,
          mid_getTranslation_716f50c86ffc8da7,
          mid_getVelocity_716f50c86ffc8da7,
          mid_interpolate_16c4aa3db8b258a4,
          mid_interpolate_58f99d45c331a0a9,
          mid_interpolate_5679859ce4e8409b,
          mid_shiftedBy_2541ce2a53eedbd6,
          mid_shiftedBy_958f5755b0dcd0d4,
          mid_staticShiftedBy_edfa04e1609ffef6,
          mid_toStaticTransform_b4e9bd069b43219a,
          mid_transformPVCoordinates_2c604bfeb0a28a2f,
          mid_transformPVCoordinates_554e30441a4431d6,
          mid_transformPVCoordinates_f76646e67e6a0632,
          mid_transformPVCoordinates_ddd20dd2dd77e82a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTransform(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTransform(const FieldTransform& obj) : ::java::lang::Object(obj) {}

        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldAngularCoordinates &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        FieldTransform(const ::org::hipparchus::Field &, const ::org::orekit::frames::Transform &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const FieldTransform &, const FieldTransform &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldTransform(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);

        FieldTransform freeze() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration() const;
        ::org::orekit::utils::FieldAngularCoordinates getAngular() const;
        ::org::orekit::utils::FieldPVCoordinates getCartesian() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::time::FieldAbsoluteDate getFieldDate() const;
        static FieldTransform getIdentity(const ::org::hipparchus::Field &);
        FieldTransform getInverse() const;
        void getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getRotationAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getRotationRate() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getTranslation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getVelocity() const;
        static FieldTransform interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &);
        static FieldTransform interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, const ::java::util::Collection &);
        static FieldTransform interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, const ::java::util::stream::Stream &);
        FieldTransform shiftedBy(jdouble) const;
        FieldTransform shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::frames::FieldStaticTransform staticShiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::frames::FieldStaticTransform toStaticTransform() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates &) const;
        ::org::orekit::utils::FieldPVCoordinates transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::utils::FieldPVCoordinates transformPVCoordinates(const ::org::orekit::utils::PVCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FieldTransform);
      extern PyTypeObject *PY_TYPE(FieldTransform);

      class t_FieldTransform {
      public:
        PyObject_HEAD
        FieldTransform object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldTransform *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTransform&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
