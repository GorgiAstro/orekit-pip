#ifndef org_orekit_frames_Transform_H
#define org_orekit_frames_Transform_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class AngularCoordinates;
      class TimeStampedPVCoordinates;
      class AngularDerivativesFilter;
      class PVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class CartesianDerivativesFilter;
    }
    namespace frames {
      class Transform;
      class StaticTransform;
    }
    namespace time {
      class AbsoluteDate;
      class TimeShiftable;
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
  namespace util {
    class Collection;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Transform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4973b210c379a6b1,
          mid_init$_f276cbdae45300cc,
          mid_init$_e8077287e11d5f05,
          mid_init$_a6070c42868c5d8c,
          mid_init$_f1da648c2878262f,
          mid_init$_851a055d87a1592a,
          mid_init$_aa897b2f8732b983,
          mid_init$_ed88fa386c1304b1,
          mid_init$_a592ae8491041610,
          mid_init$_e4bf4a0667705a20,
          mid_freeze_417755e67b7f769d,
          mid_getAcceleration_8b724f8b4fdad1a2,
          mid_getAngular_df90fc3151533d81,
          mid_getCartesian_180fb117720acb76,
          mid_getDate_c325492395d89b24,
          mid_getInverse_417755e67b7f769d,
          mid_getJacobian_6bd398a80aa9b7ce,
          mid_getRotation_ff298a39b3cae5da,
          mid_getRotationAcceleration_8b724f8b4fdad1a2,
          mid_getRotationRate_8b724f8b4fdad1a2,
          mid_getTranslation_8b724f8b4fdad1a2,
          mid_getVelocity_8b724f8b4fdad1a2,
          mid_interpolate_7df603372442182f,
          mid_interpolate_156dfc208f41012a,
          mid_shiftedBy_eb3d7c6c384b4dcd,
          mid_staticShiftedBy_c1bc66353a3f996e,
          mid_toStaticTransform_00930874428900c5,
          mid_transformPVCoordinates_176da7a9c87c96a5,
          mid_transformPVCoordinates_b59fe39c52b8d345,
          mid_transformPVCoordinates_448b59d288b2a2ff,
          mid_transformPVCoordinates_78bd106652cc7d0f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Transform(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Transform(const Transform& obj) : ::java::lang::Object(obj) {}

        static Transform *IDENTITY;

        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::AngularCoordinates &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const Transform &, const Transform &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::AngularCoordinates &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        Transform(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

        Transform freeze() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration() const;
        ::org::orekit::utils::AngularCoordinates getAngular() const;
        ::org::orekit::utils::PVCoordinates getCartesian() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        Transform getInverse() const;
        void getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter &, const JArray< JArray< jdouble > > &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getRotationAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getRotationRate() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getTranslation() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocity() const;
        Transform interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::stream::Stream &) const;
        static Transform interpolate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, const ::java::util::Collection &);
        Transform shiftedBy(jdouble) const;
        ::org::orekit::frames::StaticTransform staticShiftedBy(jdouble) const;
        ::org::orekit::frames::StaticTransform toStaticTransform() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates &) const;
        ::org::orekit::utils::FieldPVCoordinates transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::utils::PVCoordinates transformPVCoordinates(const ::org::orekit::utils::PVCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(Transform);
      extern PyTypeObject *PY_TYPE(Transform);

      class t_Transform {
      public:
        PyObject_HEAD
        Transform object;
        static PyObject *wrap_Object(const Transform&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
