#ifndef org_orekit_frames_FieldTransform_H
#define org_orekit_frames_FieldTransform_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class FieldTimeShiftable;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
      class PVCoordinates;
      class FieldAngularCoordinates;
      class CartesianDerivativesFilter;
      class AngularDerivativesFilter;
    }
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Transform;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class FieldTransform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3e3c82b13e2cf201,
          mid_init$_3662f4f3d5ceb7b5,
          mid_init$_35bdc1ce10a82b14,
          mid_init$_ba43a5f0914e9ada,
          mid_init$_c1da1fadea6d07de,
          mid_init$_85d2f5694dce0dd3,
          mid_init$_0ece0fa6b706157f,
          mid_init$_9f3e9231dc4d4fdd,
          mid_init$_448839dff1f7f897,
          mid_init$_e632fd0ade92943b,
          mid_freeze_88fa1fad93ade5d3,
          mid_getAcceleration_2d64addf4c3391d9,
          mid_getAngular_2e8947cffff3985b,
          mid_getCartesian_950575861e9716b3,
          mid_getDate_7a97f7e149e79afb,
          mid_getFieldDate_f1fe4daf77c66560,
          mid_getIdentity_99b2ac05e5fc7895,
          mid_getInverse_88fa1fad93ade5d3,
          mid_getJacobian_4ff515bdbce6a2ad,
          mid_getRotation_73da4eeccf2b7e14,
          mid_getRotationAcceleration_2d64addf4c3391d9,
          mid_getRotationRate_2d64addf4c3391d9,
          mid_getTranslation_2d64addf4c3391d9,
          mid_getVelocity_2d64addf4c3391d9,
          mid_interpolate_f374ad8221fbadd4,
          mid_interpolate_e76541a1d81fb90b,
          mid_interpolate_4940ae4d3bb419f1,
          mid_shiftedBy_e779761267ceaf91,
          mid_shiftedBy_1ce66039276ccc6b,
          mid_staticShiftedBy_39d5979fbbfb1f23,
          mid_toStaticTransform_fe2c5c7bc73a25b6,
          mid_transformPVCoordinates_f6b3fdf5ec92a07f,
          mid_transformPVCoordinates_fdfa06d009a789af,
          mid_transformPVCoordinates_5954fda0d828683a,
          mid_transformPVCoordinates_b038abcbf2a1b6eb,
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
