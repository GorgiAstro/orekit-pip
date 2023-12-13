#ifndef org_orekit_utils_FieldPVCoordinates_H
#define org_orekit_utils_FieldPVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldTimeShiftable;
    }
  }
  namespace hipparchus {
    namespace util {
      class FieldBlendable;
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative2;
        class FieldUnivariateDerivative1;
      }
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    class CalculusFieldElement;
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
          mid_init$_c9e829dd925c6618,
          mid_init$_e67380c15d7bb85a,
          mid_init$_e53652729cc89dd5,
          mid_init$_8c18806a647b623a,
          mid_init$_a82a71926d9e01a9,
          mid_init$_547f875cf70f6264,
          mid_init$_a494016481e7602f,
          mid_init$_1c97ea822aabbabd,
          mid_init$_db1a98118ce4db6d,
          mid_init$_8e5af44c2bd3f093,
          mid_init$_516fa767e7cc2415,
          mid_init$_199193858021b664,
          mid_init$_878d264b488023ec,
          mid_init$_d7e6c70ff4751ba2,
          mid_init$_22950dc0d2f433e9,
          mid_init$_a610ace5364209c4,
          mid_init$_4caf5c71ea123a55,
          mid_blendArithmeticallyWith_bb2381f65b7df7aa,
          mid_crossProduct_448b59d288b2a2ff,
          mid_estimateVelocity_72df45201a864b2b,
          mid_getAcceleration_ff5ac73a7b43eddd,
          mid_getAngularVelocity_ff5ac73a7b43eddd,
          mid_getMomentum_ff5ac73a7b43eddd,
          mid_getPosition_ff5ac73a7b43eddd,
          mid_getVelocity_ff5ac73a7b43eddd,
          mid_getZero_dac7b66b757e9da0,
          mid_negate_3bf1e58d8bf42589,
          mid_normalize_3bf1e58d8bf42589,
          mid_positionShiftedBy_0e25f993119a02fa,
          mid_shiftedBy_ffc2a13fa89e8345,
          mid_shiftedBy_419fd97e4c533329,
          mid_toDerivativeStructurePV_2d4908cd9204fb9d,
          mid_toDerivativeStructureVector_87f39fdae6ed156b,
          mid_toPVCoordinates_180fb117720acb76,
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
