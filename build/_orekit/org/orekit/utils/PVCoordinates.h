#ifndef org_orekit_utils_PVCoordinates_H
#define org_orekit_utils_PVCoordinates_H

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
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class Blendable;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_9c8737fc819646bf,
          mid_init$_a94622407b723689,
          mid_init$_bedd188d9f399c34,
          mid_init$_f733b5fb34d30a40,
          mid_init$_4fabb277d4d40971,
          mid_init$_5737cfd628135b91,
          mid_init$_a5593e21de3a7d7d,
          mid_init$_e97331f48bbe1e24,
          mid_init$_e2de5798ac31ec49,
          mid_blendArithmeticallyWith_58bd750f3969f288,
          mid_crossProduct_6c0643aee4cb3ced,
          mid_estimateVelocity_b93b7baa8492af38,
          mid_getAcceleration_17a952530a808943,
          mid_getAngularVelocity_17a952530a808943,
          mid_getMomentum_17a952530a808943,
          mid_getPosition_17a952530a808943,
          mid_getVelocity_17a952530a808943,
          mid_negate_6761e3f334368d44,
          mid_normalize_6761e3f334368d44,
          mid_positionShiftedBy_5f993a721a1d8c59,
          mid_shiftedBy_ab4581311accba8a,
          mid_toDerivativeStructurePV_42ec5cc0a8e3a780,
          mid_toDerivativeStructureVector_cc53a43c791fc9de,
          mid_toString_0090f7797e403f43,
          mid_toUnivariateDerivative1PV_239ccd4fbdc5d04d,
          mid_toUnivariateDerivative1Vector_5791f80683b5227e,
          mid_toUnivariateDerivative2PV_239ccd4fbdc5d04d,
          mid_toUnivariateDerivative2Vector_5791f80683b5227e,
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
