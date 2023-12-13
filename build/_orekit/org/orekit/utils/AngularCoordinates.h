#ifndef org_orekit_utils_AngularCoordinates_H
#define org_orekit_utils_AngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class AngularCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class TimeShiftable;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldRotation;
          class Rotation;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1;
        class UnivariateDerivative2;
        class DerivativeStructure;
      }
    }
  }
}
namespace java {
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
    namespace utils {

      class AngularCoordinates : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_dda4fc5052dbc315,
          mid_init$_f32de4638c68c05a,
          mid_init$_e02abf874db8137f,
          mid_init$_0773768711c29aaf,
          mid_init$_1cc1bcaa3fec8385,
          mid_init$_08ec4abcb342f7e4,
          mid_addOffset_5b02a5c5ff92f9cb,
          mid_applyTo_176da7a9c87c96a5,
          mid_applyTo_b59fe39c52b8d345,
          mid_applyTo_448b59d288b2a2ff,
          mid_applyTo_78bd106652cc7d0f,
          mid_createFromModifiedRodrigues_ff486bc27859fbb3,
          mid_estimateRate_777fefe4c2acaed3,
          mid_getModifiedRodrigues_be4fdefc2fcf7494,
          mid_getRotation_ff298a39b3cae5da,
          mid_getRotationAcceleration_8b724f8b4fdad1a2,
          mid_getRotationRate_8b724f8b4fdad1a2,
          mid_revert_df90fc3151533d81,
          mid_rotationShiftedBy_0b2bfb9df138ab1c,
          mid_shiftedBy_e7e7fac768feeefc,
          mid_subtractOffset_5b02a5c5ff92f9cb,
          mid_toDerivativeStructureRotation_33765e3b6b59bed2,
          mid_toUnivariateDerivative1Rotation_1e54a5caa5199c2e,
          mid_toUnivariateDerivative2Rotation_1e54a5caa5199c2e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AngularCoordinates(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AngularCoordinates(const AngularCoordinates& obj) : ::java::lang::Object(obj) {}

        static AngularCoordinates *IDENTITY;

        AngularCoordinates();
        AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
        AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        AngularCoordinates(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &);
        AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        AngularCoordinates(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &, jdouble);

        AngularCoordinates addOffset(const AngularCoordinates &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates &) const;
        ::org::orekit::utils::FieldPVCoordinates applyTo(const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::utils::PVCoordinates applyTo(const ::org::orekit::utils::PVCoordinates &) const;
        static AngularCoordinates createFromModifiedRodrigues(const JArray< JArray< jdouble > > &);
        static ::org::hipparchus::geometry::euclidean::threed::Vector3D estimateRate(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, jdouble);
        JArray< JArray< jdouble > > getModifiedRodrigues(jdouble) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getRotationAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getRotationRate() const;
        AngularCoordinates revert() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationShiftedBy(jdouble) const;
        AngularCoordinates shiftedBy(jdouble) const;
        AngularCoordinates subtractOffset(const AngularCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation toDerivativeStructureRotation(jint) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation toUnivariateDerivative1Rotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation toUnivariateDerivative2Rotation() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AngularCoordinates);
      extern PyTypeObject *PY_TYPE(AngularCoordinates);

      class t_AngularCoordinates {
      public:
        PyObject_HEAD
        AngularCoordinates object;
        static PyObject *wrap_Object(const AngularCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
