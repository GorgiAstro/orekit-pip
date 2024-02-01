#ifndef org_orekit_frames_Transform_H
#define org_orekit_frames_Transform_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class Collection;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class PVCoordinates;
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
      class AngularDerivativesFilter;
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class TimeShiftable;
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
      class StaticTransform;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Transform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_53b511dfac966d9d,
          mid_init$_6cd7edb8044c4c4f,
          mid_init$_cf5f08326bbab2f8,
          mid_init$_31e6f8c616daea23,
          mid_init$_c3bbf60ac4acdc0a,
          mid_init$_9204f9dff7aae59d,
          mid_init$_7b623ae2fc3786b5,
          mid_init$_a2b364081bb4b263,
          mid_init$_9086b91a3588262e,
          mid_init$_04ca53ad0bba71dc,
          mid_freeze_da06dd761109637f,
          mid_getAcceleration_032312bdeb3f2f93,
          mid_getAngular_76b9e5ce5fa05103,
          mid_getCartesian_78e01095d7eced90,
          mid_getDate_80e11148db499dda,
          mid_getInverse_da06dd761109637f,
          mid_getJacobian_fbedb6ce2f15e3cc,
          mid_getRotation_4d68cff5f6e4403a,
          mid_getRotationAcceleration_032312bdeb3f2f93,
          mid_getRotationRate_032312bdeb3f2f93,
          mid_getTranslation_032312bdeb3f2f93,
          mid_getVelocity_032312bdeb3f2f93,
          mid_interpolate_b7c3f2b896f21900,
          mid_interpolate_3be1861a6dc0cf44,
          mid_shiftedBy_7fd6858dd2efbc88,
          mid_staticShiftedBy_214367d2bf1a05d4,
          mid_toStaticTransform_4707295cf0323d2d,
          mid_transformPVCoordinates_42f03a1654758e56,
          mid_transformPVCoordinates_d354398d2df6ac32,
          mid_transformPVCoordinates_1bd1ef8a7bbb7399,
          mid_transformPVCoordinates_923313623a7fdc2f,
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
