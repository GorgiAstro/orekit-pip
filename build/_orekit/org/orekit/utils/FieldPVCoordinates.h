#ifndef org_orekit_utils_FieldPVCoordinates_H
#define org_orekit_utils_FieldPVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative1;
        class FieldUnivariateDerivative2;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    namespace util {
      class FieldBlendable;
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
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
          mid_init$_1344cdbf3f0498af,
          mid_init$_45d220651e48f081,
          mid_init$_9eb1493b94e6a981,
          mid_init$_47164bb8c8ecc825,
          mid_init$_a8a1b054e88c8ec4,
          mid_init$_9a097f6b1f51eb0d,
          mid_init$_9ef45704d38d42b3,
          mid_init$_c44724ef5fc47f15,
          mid_init$_5362353bb80d573f,
          mid_init$_bb6fd142d08cc8a8,
          mid_init$_221411688a1f30a8,
          mid_init$_3e23a780d70a9499,
          mid_init$_5aaeea0d9dd59987,
          mid_init$_72fc4b6b13fab078,
          mid_init$_c2436c086842bb0d,
          mid_init$_03d19cf6bcbd31dc,
          mid_init$_fade8cfc0be6514d,
          mid_blendArithmeticallyWith_a2af71d3a8247277,
          mid_crossProduct_1bd1ef8a7bbb7399,
          mid_estimateVelocity_7f41566731f83459,
          mid_getAcceleration_d1b42a6748e907f9,
          mid_getAngularVelocity_d1b42a6748e907f9,
          mid_getMomentum_d1b42a6748e907f9,
          mid_getPosition_d1b42a6748e907f9,
          mid_getVelocity_d1b42a6748e907f9,
          mid_getZero_aab2b71a889b2b8a,
          mid_negate_345fc9bafd1687ff,
          mid_normalize_345fc9bafd1687ff,
          mid_positionShiftedBy_c2b058e1eb7a8988,
          mid_shiftedBy_7c72f45dd6c2303a,
          mid_shiftedBy_7e165dafecad92c1,
          mid_toDerivativeStructurePV_608e82d3b6abf5f8,
          mid_toDerivativeStructureVector_bd593b3379529ee5,
          mid_toPVCoordinates_78e01095d7eced90,
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
