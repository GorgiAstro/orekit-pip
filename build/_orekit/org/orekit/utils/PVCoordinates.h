#ifndef org_orekit_utils_PVCoordinates_H
#define org_orekit_utils_PVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative1;
        class UnivariateDerivative2;
      }
    }
    namespace util {
      class Blendable;
    }
  }
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PVCoordinates : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_282cea09b82f4134,
          mid_init$_2810d2bec90e7b1c,
          mid_init$_be9548a8a583a03d,
          mid_init$_ef872cbae0d10840,
          mid_init$_7dc25758da124f3f,
          mid_init$_d63e82e7c0b1aa2f,
          mid_init$_a59f54e2ae2d05cf,
          mid_init$_46870da220391655,
          mid_init$_2b97db16ec2b21f9,
          mid_blendArithmeticallyWith_e84a973ee276ff40,
          mid_crossProduct_f04a629f07d17851,
          mid_estimateVelocity_28192f68d01b7004,
          mid_getAcceleration_f88961cca75a2c0a,
          mid_getAngularVelocity_f88961cca75a2c0a,
          mid_getMomentum_f88961cca75a2c0a,
          mid_getPosition_f88961cca75a2c0a,
          mid_getVelocity_f88961cca75a2c0a,
          mid_negate_77bd7b3cdab2713e,
          mid_normalize_77bd7b3cdab2713e,
          mid_positionShiftedBy_20de5f9d51c6611f,
          mid_shiftedBy_9237689b200d23a6,
          mid_toDerivativeStructurePV_c4ba5dc533a7295c,
          mid_toDerivativeStructureVector_57f172e29ab8adbf,
          mid_toString_3cffd47377eca18a,
          mid_toUnivariateDerivative1PV_950575861e9716b3,
          mid_toUnivariateDerivative1Vector_2d64addf4c3391d9,
          mid_toUnivariateDerivative2PV_950575861e9716b3,
          mid_toUnivariateDerivative2Vector_2d64addf4c3391d9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PVCoordinates(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PVCoordinates(const PVCoordinates& obj) : ::java::lang::Object(obj) {}

        static PVCoordinates *ZERO;

        PVCoordinates();
        PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        PVCoordinates(const PVCoordinates &, const PVCoordinates &);
        PVCoordinates(jdouble, const PVCoordinates &);
        PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        PVCoordinates(jdouble, const PVCoordinates &, jdouble, const PVCoordinates &);
        PVCoordinates(jdouble, const PVCoordinates &, jdouble, const PVCoordinates &, jdouble, const PVCoordinates &);
        PVCoordinates(jdouble, const PVCoordinates &, jdouble, const PVCoordinates &, jdouble, const PVCoordinates &, jdouble, const PVCoordinates &);

        PVCoordinates blendArithmeticallyWith(const PVCoordinates &, jdouble) const;
        static PVCoordinates crossProduct(const PVCoordinates &, const PVCoordinates &);
        static ::org::hipparchus::geometry::euclidean::threed::Vector3D estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getAngularVelocity() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getMomentum() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocity() const;
        PVCoordinates negate() const;
        PVCoordinates normalize() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D positionShiftedBy(jdouble) const;
        PVCoordinates shiftedBy(jdouble) const;
        ::org::orekit::utils::FieldPVCoordinates toDerivativeStructurePV(jint) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toDerivativeStructureVector(jint) const;
        ::java::lang::String toString() const;
        ::org::orekit::utils::FieldPVCoordinates toUnivariateDerivative1PV() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toUnivariateDerivative1Vector() const;
        ::org::orekit::utils::FieldPVCoordinates toUnivariateDerivative2PV() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toUnivariateDerivative2Vector() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PVCoordinates);
      extern PyTypeObject *PY_TYPE(PVCoordinates);

      class t_PVCoordinates {
      public:
        PyObject_HEAD
        PVCoordinates object;
        static PyObject *wrap_Object(const PVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
