#ifndef org_orekit_utils_AngularCoordinates_H
#define org_orekit_utils_AngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative2;
        class DerivativeStructure;
        class UnivariateDerivative1;
      }
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
          class FieldRotation;
        }
      }
    }
  }
  namespace orekit {
    namespace time {
      class TimeShiftable;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class TimeStampedPVCoordinates;
      class AngularCoordinates;
      class FieldPVCoordinates;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_f8f94b8019a86187,
          mid_init$_897939f7cf621023,
          mid_init$_7caabad3a3c78268,
          mid_init$_f733b5fb34d30a40,
          mid_init$_55be699d863c58bf,
          mid_init$_e164aa97b1983b7b,
          mid_addOffset_c325375dff95cd95,
          mid_applyTo_dc7eea29a4d4ad51,
          mid_applyTo_95abb8abb7f5aee0,
          mid_applyTo_32f08c76ddea4935,
          mid_applyTo_21828419b7bbfc20,
          mid_createFromModifiedRodrigues_d18c47eb9dc5b2be,
          mid_estimateRate_70b6dadefd895849,
          mid_getModifiedRodrigues_46ddffa0c457a6dd,
          mid_getRotation_24d2e432e376f9a0,
          mid_getRotationAcceleration_17a952530a808943,
          mid_getRotationRate_17a952530a808943,
          mid_revert_eb0542756098e24f,
          mid_rotationShiftedBy_60201563a2dd3783,
          mid_shiftedBy_7fb56df8f8ae2e03,
          mid_subtractOffset_c325375dff95cd95,
          mid_toDerivativeStructureRotation_4293e15d24113072,
          mid_toUnivariateDerivative1Rotation_ac4489fdef1c3aef,
          mid_toUnivariateDerivative2Rotation_ac4489fdef1c3aef,
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
