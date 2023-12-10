#ifndef org_orekit_frames_Transform_H
#define org_orekit_frames_Transform_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace time {
      class TimeShiftable;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class AngularDerivativesFilter;
      class TimeStampedFieldPVCoordinates;
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
      class AngularCoordinates;
      class FieldPVCoordinates;
    }
    namespace frames {
      class StaticTransform;
      class Transform;
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
          mid_init$_f3775f4d7e276e33,
          mid_init$_4fd2c20d73afc943,
          mid_init$_481a03094e80c723,
          mid_init$_941d8dc495969cee,
          mid_init$_de98e3d58f8ed0c5,
          mid_init$_1f308a96dce4eb31,
          mid_init$_ed94cc52ace0cf72,
          mid_init$_bab3b5654d32da50,
          mid_init$_8b0e1234e87551c9,
          mid_init$_fcb73ff3ac48befe,
          mid_freeze_631c2f99a847a383,
          mid_getAcceleration_17a952530a808943,
          mid_getAngular_eb0542756098e24f,
          mid_getCartesian_6761e3f334368d44,
          mid_getDate_aaa854c403487cf3,
          mid_getInverse_631c2f99a847a383,
          mid_getJacobian_a54172134b551e3f,
          mid_getRotation_24d2e432e376f9a0,
          mid_getRotationAcceleration_17a952530a808943,
          mid_getRotationRate_17a952530a808943,
          mid_getTranslation_17a952530a808943,
          mid_getVelocity_17a952530a808943,
          mid_interpolate_72322215d0d9acc8,
          mid_interpolate_3856d795689bca1e,
          mid_shiftedBy_82b944f63bb69f35,
          mid_staticShiftedBy_52c1706ea4ef71ef,
          mid_toStaticTransform_85643104a022b593,
          mid_transformPVCoordinates_dc7eea29a4d4ad51,
          mid_transformPVCoordinates_95abb8abb7f5aee0,
          mid_transformPVCoordinates_32f08c76ddea4935,
          mid_transformPVCoordinates_21828419b7bbfc20,
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
