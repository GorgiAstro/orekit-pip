#ifndef org_orekit_frames_Transform_H
#define org_orekit_frames_Transform_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class PVCoordinates;
      class AngularDerivativesFilter;
      class FieldPVCoordinates;
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
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
          class Rotation;
          class Vector3D;
        }
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Transform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_22bdf1805e44a194,
          mid_init$_3d7cc17d4ec11a9f,
          mid_init$_9769af8992f7d7c2,
          mid_init$_db8760ebddf85268,
          mid_init$_a2dd53dc024aec2d,
          mid_init$_d039183b82af87d6,
          mid_init$_b94b4993c5720e0b,
          mid_init$_f151b980508072a7,
          mid_init$_bc95563ddeee02cc,
          mid_init$_1c345cf73262affe,
          mid_freeze_09afc11266121652,
          mid_getAcceleration_d52645e0d4c07563,
          mid_getAngular_8a604053f4d4c39e,
          mid_getCartesian_9b7c658c14883c84,
          mid_getDate_85703d13e302437e,
          mid_getInverse_09afc11266121652,
          mid_getJacobian_162d7740b4935bd5,
          mid_getRotation_de86c7efc42eac14,
          mid_getRotationAcceleration_d52645e0d4c07563,
          mid_getRotationRate_d52645e0d4c07563,
          mid_getTranslation_d52645e0d4c07563,
          mid_getVelocity_d52645e0d4c07563,
          mid_interpolate_017020b36f2073a7,
          mid_interpolate_4e9cc70946705b1a,
          mid_shiftedBy_4f5cde3777cd20a7,
          mid_staticShiftedBy_1862d3e05bd21533,
          mid_toStaticTransform_892837e768e813bc,
          mid_transformPVCoordinates_2c604bfeb0a28a2f,
          mid_transformPVCoordinates_fe87e6eba6ef42f9,
          mid_transformPVCoordinates_f76646e67e6a0632,
          mid_transformPVCoordinates_44abf30654d86934,
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
