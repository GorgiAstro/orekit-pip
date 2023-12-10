#ifndef org_orekit_utils_AngularCoordinates_H
#define org_orekit_utils_AngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class TimeShiftable;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
          class Vector3D;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative2;
        class UnivariateDerivative1;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_36678dbdedc42376,
          mid_init$_80a55d93aa5ecb9e,
          mid_init$_c67728c7f4a764b5,
          mid_init$_ab85b25be4476a0e,
          mid_init$_7b92f603fecfaf2b,
          mid_init$_e11bf4825866d52b,
          mid_addOffset_1677a311e39de502,
          mid_applyTo_2c604bfeb0a28a2f,
          mid_applyTo_fe87e6eba6ef42f9,
          mid_applyTo_f76646e67e6a0632,
          mid_applyTo_44abf30654d86934,
          mid_createFromModifiedRodrigues_ec287fbe4bf97234,
          mid_estimateRate_5497a219643496d9,
          mid_getModifiedRodrigues_a1f5c9dbe0a195af,
          mid_getRotation_de86c7efc42eac14,
          mid_getRotationAcceleration_d52645e0d4c07563,
          mid_getRotationRate_d52645e0d4c07563,
          mid_revert_8a604053f4d4c39e,
          mid_rotationShiftedBy_ce9226ab7f6f56df,
          mid_shiftedBy_3ab5c08186f27feb,
          mid_subtractOffset_1677a311e39de502,
          mid_toDerivativeStructureRotation_371facd070e18d41,
          mid_toUnivariateDerivative1Rotation_1d339a2ee3a3323a,
          mid_toUnivariateDerivative2Rotation_1d339a2ee3a3323a,
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
