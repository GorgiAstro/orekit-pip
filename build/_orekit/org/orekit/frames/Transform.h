#ifndef org_orekit_frames_Transform_H
#define org_orekit_frames_Transform_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
      class PVCoordinates;
      class AngularCoordinates;
      class CartesianDerivativesFilter;
      class AngularDerivativesFilter;
      class TimeStampedPVCoordinates;
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
          mid_init$_31365e78edba4ec1,
          mid_init$_900f9429442ceeb9,
          mid_init$_32faa46b708cf6da,
          mid_init$_a1f5dc554250f77b,
          mid_init$_230b401d18461d1c,
          mid_init$_8a280baa525bbe55,
          mid_init$_5646b37963c337b6,
          mid_init$_d071eb3aa7ff7805,
          mid_init$_ab40439ce57e4b27,
          mid_init$_06f788959c496621,
          mid_freeze_1168c6fb2fb8754f,
          mid_getAcceleration_f88961cca75a2c0a,
          mid_getAngular_f385f7a363d6ca27,
          mid_getCartesian_77bd7b3cdab2713e,
          mid_getDate_7a97f7e149e79afb,
          mid_getInverse_1168c6fb2fb8754f,
          mid_getJacobian_b7366abe4d4cbf1f,
          mid_getRotation_1e0dc1a6788897b9,
          mid_getRotationAcceleration_f88961cca75a2c0a,
          mid_getRotationRate_f88961cca75a2c0a,
          mid_getTranslation_f88961cca75a2c0a,
          mid_getVelocity_f88961cca75a2c0a,
          mid_interpolate_ce26e8cca99f8687,
          mid_interpolate_bc60dc3fce0278ca,
          mid_shiftedBy_b51fe6f3da102a87,
          mid_staticShiftedBy_44b666ddb2dc3254,
          mid_toStaticTransform_f798b00aed778de3,
          mid_transformPVCoordinates_f6b3fdf5ec92a07f,
          mid_transformPVCoordinates_fc4b100c90055253,
          mid_transformPVCoordinates_5954fda0d828683a,
          mid_transformPVCoordinates_c0d29187a28e22fc,
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
