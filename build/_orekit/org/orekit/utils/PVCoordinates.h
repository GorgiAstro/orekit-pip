#ifndef org_orekit_utils_PVCoordinates_H
#define org_orekit_utils_PVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
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
          class Vector3D;
          class FieldVector3D;
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
    namespace util {
      class Blendable;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_c9e829dd925c6618,
          mid_init$_1844f891addbac57,
          mid_init$_b651b5ef96594ce8,
          mid_init$_0773768711c29aaf,
          mid_init$_3e5c7ece8fe50647,
          mid_init$_861a083234734422,
          mid_init$_4f2f4e9b469da4d6,
          mid_init$_3504eb0f25931ec1,
          mid_init$_be9a0aa1438157c0,
          mid_blendArithmeticallyWith_13fe4b7b671cdfde,
          mid_crossProduct_0179475057507e12,
          mid_estimateVelocity_21c804d1eea56b9e,
          mid_getAcceleration_8b724f8b4fdad1a2,
          mid_getAngularVelocity_8b724f8b4fdad1a2,
          mid_getMomentum_8b724f8b4fdad1a2,
          mid_getPosition_8b724f8b4fdad1a2,
          mid_getVelocity_8b724f8b4fdad1a2,
          mid_negate_180fb117720acb76,
          mid_normalize_180fb117720acb76,
          mid_positionShiftedBy_498f52cd8e5a7072,
          mid_shiftedBy_07c38118aecc9309,
          mid_toDerivativeStructurePV_2d4908cd9204fb9d,
          mid_toDerivativeStructureVector_87f39fdae6ed156b,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toUnivariateDerivative1PV_3bf1e58d8bf42589,
          mid_toUnivariateDerivative1Vector_ff5ac73a7b43eddd,
          mid_toUnivariateDerivative2PV_3bf1e58d8bf42589,
          mid_toUnivariateDerivative2Vector_ff5ac73a7b43eddd,
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
