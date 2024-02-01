#ifndef org_orekit_utils_PVCoordinates_H
#define org_orekit_utils_PVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative2;
        class UnivariateDerivative1;
        class DerivativeStructure;
      }
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace util {
      class Blendable;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
  namespace orekit {
    namespace time {
      class TimeShiftable;
    }
    namespace utils {
      class PVCoordinates;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_1344cdbf3f0498af,
          mid_init$_30f8886dfb88a63c,
          mid_init$_c8e9682f0daaca68,
          mid_init$_ab901f2964604b53,
          mid_init$_547a509436999a17,
          mid_init$_8ba3e710eb629d8c,
          mid_init$_131430c01af57e0d,
          mid_init$_c7cd14da3c4e5de3,
          mid_init$_32d9e21e48d1242a,
          mid_blendArithmeticallyWith_87ad1491599f0cb1,
          mid_crossProduct_1f900e1ad2600555,
          mid_estimateVelocity_ccc9d16c585df973,
          mid_getAcceleration_032312bdeb3f2f93,
          mid_getAngularVelocity_032312bdeb3f2f93,
          mid_getMomentum_032312bdeb3f2f93,
          mid_getPosition_032312bdeb3f2f93,
          mid_getVelocity_032312bdeb3f2f93,
          mid_negate_78e01095d7eced90,
          mid_normalize_78e01095d7eced90,
          mid_positionShiftedBy_98a3eeef43dce47a,
          mid_shiftedBy_bf63196c562daab4,
          mid_toDerivativeStructurePV_608e82d3b6abf5f8,
          mid_toDerivativeStructureVector_bd593b3379529ee5,
          mid_toString_d2c8eb4129821f0e,
          mid_toUnivariateDerivative1PV_345fc9bafd1687ff,
          mid_toUnivariateDerivative1Vector_d1b42a6748e907f9,
          mid_toUnivariateDerivative2PV_345fc9bafd1687ff,
          mid_toUnivariateDerivative2Vector_d1b42a6748e907f9,
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
