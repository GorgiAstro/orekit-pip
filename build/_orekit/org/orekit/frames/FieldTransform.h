#ifndef org_orekit_frames_FieldTransform_H
#define org_orekit_frames_FieldTransform_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
      class FieldStaticTransform;
      class FieldTransform;
    }
    namespace utils {
      class PVCoordinates;
      class AngularDerivativesFilter;
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
      class TimeStampedPVCoordinates;
      class FieldAngularCoordinates;
      class CartesianDerivativesFilter;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
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
          mid_init$_f8b481461ea8ab39,
          mid_init$_dc699a7de0f37bf7,
          mid_init$_e143e3a87ead43a4,
          mid_init$_b19b60e39c50b506,
          mid_init$_b6842162de8254ea,
          mid_init$_e57f35c4a35a6b1c,
          mid_init$_f3966f483c5badf0,
          mid_init$_192009f269ed8f3e,
          mid_init$_1a460667376305ef,
          mid_init$_4b2d668898c102f2,
          mid_freeze_b8c22ddb6f9598ea,
          mid_getAcceleration_ff5ac73a7b43eddd,
          mid_getAngular_c0c63601c9238de5,
          mid_getCartesian_3bf1e58d8bf42589,
          mid_getDate_c325492395d89b24,
          mid_getFieldDate_fa23a4301b9c83e7,
          mid_getIdentity_8ff5b0b40188d680,
          mid_getInverse_b8c22ddb6f9598ea,
          mid_getJacobian_db9176f8a28cfab8,
          mid_getRotation_1e54a5caa5199c2e,
          mid_getRotationAcceleration_ff5ac73a7b43eddd,
          mid_getRotationRate_ff5ac73a7b43eddd,
          mid_getTranslation_ff5ac73a7b43eddd,
          mid_getVelocity_ff5ac73a7b43eddd,
          mid_interpolate_b964a7334cab06b0,
          mid_interpolate_8399f4dc4f7ede96,
          mid_interpolate_9f2d048dabbfaab4,
          mid_shiftedBy_30f386846a59e91f,
          mid_shiftedBy_1a69f2ef45796156,
          mid_staticShiftedBy_8d8158fd57fb23c5,
          mid_toStaticTransform_f5bae1937d1edbc7,
          mid_transformPVCoordinates_176da7a9c87c96a5,
          mid_transformPVCoordinates_b9efbea1bca1646b,
          mid_transformPVCoordinates_448b59d288b2a2ff,
          mid_transformPVCoordinates_56bdb7492041db79,
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
