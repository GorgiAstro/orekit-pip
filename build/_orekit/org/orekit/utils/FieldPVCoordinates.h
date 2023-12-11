#ifndef org_orekit_utils_FieldPVCoordinates_H
#define org_orekit_utils_FieldPVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldBlendable;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative1;
        class FieldUnivariateDerivative2;
        class FieldDerivativeStructure;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldTimeShiftable;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldPVCoordinates : public ::java::lang::Object {
       public:
        enum {
          mid_init$_282cea09b82f4134,
          mid_init$_b2e28a0995250182,
          mid_init$_4ed5fdbdf7016e23,
          mid_init$_82fdb17849f946ec,
          mid_init$_6a2a42d58caa4d27,
          mid_init$_e782294a839e0555,
          mid_init$_eff98b08f4f6424e,
          mid_init$_877643588e302837,
          mid_init$_841b0434a4d012cc,
          mid_init$_8ec479cdceb23ae1,
          mid_init$_67ace1d97ccd9fd7,
          mid_init$_17dca5b2c9782f96,
          mid_init$_b60fc950e96eedb6,
          mid_init$_009099fa61888802,
          mid_init$_b87b24ac9f6102ab,
          mid_init$_d139b21913043525,
          mid_init$_f1c731c72489bed5,
          mid_blendArithmeticallyWith_3462ff1a56800c66,
          mid_crossProduct_5954fda0d828683a,
          mid_estimateVelocity_afbdb6b4ae03af83,
          mid_getAcceleration_2d64addf4c3391d9,
          mid_getAngularVelocity_2d64addf4c3391d9,
          mid_getMomentum_2d64addf4c3391d9,
          mid_getPosition_2d64addf4c3391d9,
          mid_getVelocity_2d64addf4c3391d9,
          mid_getZero_dda60cf1427afe76,
          mid_negate_950575861e9716b3,
          mid_normalize_950575861e9716b3,
          mid_positionShiftedBy_68e9ce281b70d410,
          mid_shiftedBy_11ef0a6028c1d437,
          mid_shiftedBy_c486b08837b7fbd4,
          mid_toDerivativeStructurePV_c4ba5dc533a7295c,
          mid_toDerivativeStructureVector_57f172e29ab8adbf,
          mid_toPVCoordinates_77bd7b3cdab2713e,
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

        explicit FieldPVCoordinates(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldPVCoordinates(const FieldPVCoordinates& obj) : ::java::lang::Object(obj) {}

        FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldPVCoordinates(const FieldPVCoordinates &, const FieldPVCoordinates &);
        FieldPVCoordinates(jdouble, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::Field &, const ::org::orekit::utils::PVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldPVCoordinates(jdouble, const FieldPVCoordinates &, jdouble, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        FieldPVCoordinates(jdouble, const FieldPVCoordinates &, jdouble, const FieldPVCoordinates &, jdouble, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);
        FieldPVCoordinates(jdouble, const FieldPVCoordinates &, jdouble, const FieldPVCoordinates &, jdouble, const FieldPVCoordinates &, jdouble, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldPVCoordinates &);
        FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::PVCoordinates &);

        FieldPVCoordinates blendArithmeticallyWith(const FieldPVCoordinates &, const ::org::hipparchus::CalculusFieldElement &) const;
        FieldPVCoordinates crossProduct(const FieldPVCoordinates &) const;
        static ::org::hipparchus::geometry::euclidean::threed::FieldVector3D estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, jdouble);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAngularVelocity() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getMomentum() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getVelocity() const;
        static FieldPVCoordinates getZero(const ::org::hipparchus::Field &);
        FieldPVCoordinates negate() const;
        FieldPVCoordinates normalize() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D positionShiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldPVCoordinates shiftedBy(jdouble) const;
        FieldPVCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldPVCoordinates toDerivativeStructurePV(jint) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toDerivativeStructureVector(jint) const;
        ::org::orekit::utils::PVCoordinates toPVCoordinates() const;
        ::java::lang::String toString() const;
        FieldPVCoordinates toUnivariateDerivative1PV() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toUnivariateDerivative1Vector() const;
        FieldPVCoordinates toUnivariateDerivative2PV() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toUnivariateDerivative2Vector() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldPVCoordinates);
      extern PyTypeObject *PY_TYPE(FieldPVCoordinates);

      class t_FieldPVCoordinates {
      public:
        PyObject_HEAD
        FieldPVCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldPVCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldPVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldPVCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
