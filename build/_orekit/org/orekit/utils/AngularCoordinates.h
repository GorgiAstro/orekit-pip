#ifndef org_orekit_utils_AngularCoordinates_H
#define org_orekit_utils_AngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
      class PVCoordinates;
      class AngularCoordinates;
      class TimeStampedPVCoordinates;
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
          class Rotation;
          class FieldRotation;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative1;
        class UnivariateDerivative2;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_52b7e4a71c1f5acc,
          mid_init$_cffe2196131a8abb,
          mid_init$_cacf1e806efac37c,
          mid_init$_ef872cbae0d10840,
          mid_init$_4fdcd85b0c7929aa,
          mid_init$_adb68a911ef752b9,
          mid_addOffset_c0f86b964fece7aa,
          mid_applyTo_f6b3fdf5ec92a07f,
          mid_applyTo_fc4b100c90055253,
          mid_applyTo_5954fda0d828683a,
          mid_applyTo_c0d29187a28e22fc,
          mid_createFromModifiedRodrigues_e4f621c772dd618e,
          mid_estimateRate_d6616c6d64635c33,
          mid_getModifiedRodrigues_575a099fc2492a12,
          mid_getRotation_1e0dc1a6788897b9,
          mid_getRotationAcceleration_f88961cca75a2c0a,
          mid_getRotationRate_f88961cca75a2c0a,
          mid_revert_f385f7a363d6ca27,
          mid_rotationShiftedBy_72e0d732f56c88d5,
          mid_shiftedBy_2dc3d2110b20141c,
          mid_subtractOffset_c0f86b964fece7aa,
          mid_toDerivativeStructureRotation_787de7775c059c73,
          mid_toUnivariateDerivative1Rotation_73da4eeccf2b7e14,
          mid_toUnivariateDerivative2Rotation_73da4eeccf2b7e14,
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
