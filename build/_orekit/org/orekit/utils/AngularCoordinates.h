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
          class FieldRotation;
          class Rotation;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class PVCoordinates;
      class TimeStampedPVCoordinates;
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class TimeShiftable;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_93243f17280cd27c,
          mid_init$_c7213d7f3b4952c4,
          mid_init$_b41e491e04b11d1e,
          mid_init$_ab901f2964604b53,
          mid_init$_6063ee1a397a70de,
          mid_init$_a73b464c97fbf565,
          mid_addOffset_fb16ffcb3278ad25,
          mid_applyTo_42f03a1654758e56,
          mid_applyTo_d354398d2df6ac32,
          mid_applyTo_1bd1ef8a7bbb7399,
          mid_applyTo_923313623a7fdc2f,
          mid_createFromModifiedRodrigues_d79d566761fbef0c,
          mid_estimateRate_614e518be6bc5074,
          mid_getModifiedRodrigues_c62f25b3978e0d21,
          mid_getRotation_4d68cff5f6e4403a,
          mid_getRotationAcceleration_032312bdeb3f2f93,
          mid_getRotationRate_032312bdeb3f2f93,
          mid_revert_76b9e5ce5fa05103,
          mid_rotationShiftedBy_5199c191fa93e606,
          mid_shiftedBy_fc5d05a0e9c43705,
          mid_subtractOffset_fb16ffcb3278ad25,
          mid_toDerivativeStructureRotation_6d38f548acbe7c0a,
          mid_toUnivariateDerivative1Rotation_5c8e6f300713559c,
          mid_toUnivariateDerivative2Rotation_5c8e6f300713559c,
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
