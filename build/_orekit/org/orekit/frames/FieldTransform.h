#ifndef org_orekit_frames_FieldTransform_H
#define org_orekit_frames_FieldTransform_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class Transform;
      class FieldStaticTransform;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class CartesianDerivativesFilter;
      class FieldAngularCoordinates;
      class PVCoordinates;
      class AngularDerivativesFilter;
    }
  }
  namespace hipparchus {
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class FieldTransform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7d09f2d0faf56c24,
          mid_init$_0aa97ac04cede617,
          mid_init$_6d860b64bc24952f,
          mid_init$_994d2e3578155e05,
          mid_init$_1d1b254e2009d3a9,
          mid_init$_d9280f8ac65149af,
          mid_init$_4de9f3e3d770866c,
          mid_init$_9e3b0ee999dcd97e,
          mid_init$_69ea71c8c9a32ba2,
          mid_init$_8a2daddc92952c07,
          mid_freeze_c58e1d0e1f3afd7d,
          mid_getAcceleration_d1b42a6748e907f9,
          mid_getAngular_f9d057933ad73f59,
          mid_getCartesian_345fc9bafd1687ff,
          mid_getDate_80e11148db499dda,
          mid_getFieldDate_1fea28374011eef5,
          mid_getIdentity_17da171d62449753,
          mid_getInverse_c58e1d0e1f3afd7d,
          mid_getJacobian_92c4dd0c6709f4ca,
          mid_getRotation_5c8e6f300713559c,
          mid_getRotationAcceleration_d1b42a6748e907f9,
          mid_getRotationRate_d1b42a6748e907f9,
          mid_getTranslation_d1b42a6748e907f9,
          mid_getVelocity_d1b42a6748e907f9,
          mid_interpolate_3fd67c27b4f48c52,
          mid_interpolate_9a561c7c7e0a4ab5,
          mid_interpolate_cdad96fc1533d6a4,
          mid_shiftedBy_f2636d4a97f7a23b,
          mid_shiftedBy_9f52e2ad8ef98349,
          mid_staticShiftedBy_4e699b1bed6fd784,
          mid_toStaticTransform_bfbe5d9ed8a9e205,
          mid_transformPVCoordinates_42f03a1654758e56,
          mid_transformPVCoordinates_25934c59f051a43a,
          mid_transformPVCoordinates_1bd1ef8a7bbb7399,
          mid_transformPVCoordinates_bbe671ce7c49d0a3,
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
