#ifndef org_orekit_utils_FieldPVCoordinates_H
#define org_orekit_utils_FieldPVCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    namespace util {
      class FieldBlendable;
    }
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative2;
        class FieldUnivariateDerivative1;
        class FieldDerivativeStructure;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
  }
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
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
          mid_init$_c79ed286e3615fed,
          mid_init$_67d015490dd313e3,
          mid_init$_d2f8fd42fbe1e9ea,
          mid_init$_cdf7d14da933bd6b,
          mid_init$_a332f4d4d1886b45,
          mid_init$_d80830cf996d9780,
          mid_init$_454f513ba9b358cd,
          mid_init$_b1d60cb8a86b8e8f,
          mid_init$_1a8058b4e5da5f9c,
          mid_init$_c736ce6ed833c56f,
          mid_init$_071961305ea9c152,
          mid_init$_2354f35a5c328f24,
          mid_init$_3d3d027e88bc533f,
          mid_init$_a33ecdc3aa7fc877,
          mid_init$_c1a8203e73d2a149,
          mid_init$_b4660af81e942f37,
          mid_init$_6d6f7878f920f885,
          mid_blendArithmeticallyWith_b31c79033500d4c2,
          mid_crossProduct_f76646e67e6a0632,
          mid_estimateVelocity_314ed37c51b9736a,
          mid_getAcceleration_716f50c86ffc8da7,
          mid_getAngularVelocity_716f50c86ffc8da7,
          mid_getMomentum_716f50c86ffc8da7,
          mid_getPosition_716f50c86ffc8da7,
          mid_getVelocity_716f50c86ffc8da7,
          mid_getZero_90f77345373c3eb7,
          mid_negate_aae6180d70913ad4,
          mid_normalize_aae6180d70913ad4,
          mid_positionShiftedBy_e0e563985265c470,
          mid_shiftedBy_390e24fc3a0bcb9d,
          mid_shiftedBy_82b950f4b8998a4c,
          mid_toDerivativeStructurePV_4727d8c8b638c5ff,
          mid_toDerivativeStructureVector_7c26e03bd80d6bb3,
          mid_toPVCoordinates_9b7c658c14883c84,
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
