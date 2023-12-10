#ifndef org_orekit_utils_FieldPVCoordinates_H
#define org_orekit_utils_FieldPVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
    }
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative1;
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative2;
      }
    }
    namespace util {
      class FieldBlendable;
    }
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_9c8737fc819646bf,
          mid_init$_d35296e3a83f651e,
          mid_init$_73aec871053b5da0,
          mid_init$_0bb523e1dfdeb246,
          mid_init$_598bca9db0ea664d,
          mid_init$_247062d7c2a77835,
          mid_init$_9e3e1db0a2aa967f,
          mid_init$_3f18bec8c28008a8,
          mid_init$_824e651d3426922f,
          mid_init$_66e66ae11124b9b1,
          mid_init$_d62b17fa020a4f24,
          mid_init$_b201ee41a111da4b,
          mid_init$_3eb5a34dfaadc51b,
          mid_init$_b41231f2ad06089f,
          mid_init$_49c41db8204b1317,
          mid_init$_d4a67adf885bbb69,
          mid_init$_29150d269bfe43d4,
          mid_blendArithmeticallyWith_eba1476fd142b272,
          mid_crossProduct_32f08c76ddea4935,
          mid_estimateVelocity_8f7f51ffc00ffac1,
          mid_getAcceleration_5791f80683b5227e,
          mid_getAngularVelocity_5791f80683b5227e,
          mid_getMomentum_5791f80683b5227e,
          mid_getPosition_5791f80683b5227e,
          mid_getVelocity_5791f80683b5227e,
          mid_getZero_b10aa29cc18662da,
          mid_negate_239ccd4fbdc5d04d,
          mid_normalize_239ccd4fbdc5d04d,
          mid_positionShiftedBy_3023f195d3eecf7e,
          mid_shiftedBy_22431c581ae51eff,
          mid_shiftedBy_7b2c6ce606e939f5,
          mid_toDerivativeStructurePV_42ec5cc0a8e3a780,
          mid_toDerivativeStructureVector_cc53a43c791fc9de,
          mid_toPVCoordinates_6761e3f334368d44,
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
