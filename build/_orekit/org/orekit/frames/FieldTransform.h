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
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class AngularDerivativesFilter;
      class FieldPVCoordinates;
      class FieldAngularCoordinates;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class CartesianDerivativesFilter;
      class PVCoordinates;
    }
    namespace frames {
      class FieldStaticTransform;
      class Transform;
      class FieldTransform;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
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
          mid_init$_e15b020416400437,
          mid_init$_ee45717687c334a1,
          mid_init$_b4b465ca2d31b322,
          mid_init$_29687ccd72f81db7,
          mid_init$_016ae101e3b99850,
          mid_init$_049e06eb4b4463ae,
          mid_init$_7333807375adb1c5,
          mid_init$_f398968fe5ef5ff5,
          mid_init$_f953797f92c3fc12,
          mid_init$_c04c30a2fab87285,
          mid_freeze_b8bdad2f73e0bf7c,
          mid_getAcceleration_5791f80683b5227e,
          mid_getAngular_60e0de9a41eb35da,
          mid_getCartesian_239ccd4fbdc5d04d,
          mid_getDate_aaa854c403487cf3,
          mid_getFieldDate_09b0a926600dfc14,
          mid_getIdentity_ac58675ed12d0410,
          mid_getInverse_b8bdad2f73e0bf7c,
          mid_getJacobian_0ee4e0155590d2ee,
          mid_getRotation_ac4489fdef1c3aef,
          mid_getRotationAcceleration_5791f80683b5227e,
          mid_getRotationRate_5791f80683b5227e,
          mid_getTranslation_5791f80683b5227e,
          mid_getVelocity_5791f80683b5227e,
          mid_interpolate_72c848b0aa1d0200,
          mid_interpolate_29a048b98cff002d,
          mid_interpolate_f047fa447dbe3e45,
          mid_shiftedBy_433375e70c1dd93f,
          mid_shiftedBy_4df97b023e291093,
          mid_staticShiftedBy_f11319a5fb25b3fd,
          mid_toStaticTransform_dd9256b23dabf6f6,
          mid_transformPVCoordinates_dc7eea29a4d4ad51,
          mid_transformPVCoordinates_e42117f6acaa0604,
          mid_transformPVCoordinates_32f08c76ddea4935,
          mid_transformPVCoordinates_bdfc1809fc8a7def,
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
