#ifndef org_orekit_utils_PVCoordinates_H
#define org_orekit_utils_PVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Blendable;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative2;
        class UnivariateDerivative1;
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
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_c79ed286e3615fed,
          mid_init$_029ff0cbf68ea054,
          mid_init$_8f7d2a24ef2ff591,
          mid_init$_ab85b25be4476a0e,
          mid_init$_4d7069b4f49b3239,
          mid_init$_fb75995a4eb9efa6,
          mid_init$_b6c7e1e3390c4227,
          mid_init$_68c2d46bde110a69,
          mid_init$_c44d21e08d49aa42,
          mid_blendArithmeticallyWith_cddb05cb45a93e06,
          mid_crossProduct_4be7f0caefce2f42,
          mid_estimateVelocity_de52532c17b2a672,
          mid_getAcceleration_d52645e0d4c07563,
          mid_getAngularVelocity_d52645e0d4c07563,
          mid_getMomentum_d52645e0d4c07563,
          mid_getPosition_d52645e0d4c07563,
          mid_getVelocity_d52645e0d4c07563,
          mid_negate_9b7c658c14883c84,
          mid_normalize_9b7c658c14883c84,
          mid_positionShiftedBy_9137bba253a33d9c,
          mid_shiftedBy_6c1233261171385d,
          mid_toDerivativeStructurePV_4727d8c8b638c5ff,
          mid_toDerivativeStructureVector_7c26e03bd80d6bb3,
          mid_toString_11b109bd155ca898,
          mid_toUnivariateDerivative1PV_aae6180d70913ad4,
          mid_toUnivariateDerivative1Vector_716f50c86ffc8da7,
          mid_toUnivariateDerivative2PV_aae6180d70913ad4,
          mid_toUnivariateDerivative2Vector_716f50c86ffc8da7,
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
