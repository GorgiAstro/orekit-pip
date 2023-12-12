#ifndef org_orekit_utils_FieldAngularCoordinates_H
#define org_orekit_utils_FieldAngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
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
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
      class PVCoordinates;
      class FieldAngularCoordinates;
      class AngularCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class FieldTimeShiftable;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldAngularCoordinates : public ::java::lang::Object {
       public:
        enum {
          mid_init$_52b7e4a71c1f5acc,
          mid_init$_00ab28977d6cad95,
          mid_init$_efc6e133321bf38d,
          mid_init$_794102ff3ed64d7b,
          mid_init$_fe0a9eac1fde176b,
          mid_addOffset_44eedb5739df97b3,
          mid_applyTo_f6b3fdf5ec92a07f,
          mid_applyTo_fdfa06d009a789af,
          mid_applyTo_5954fda0d828683a,
          mid_applyTo_b038abcbf2a1b6eb,
          mid_createFromModifiedRodrigues_ff358948c2fbc568,
          mid_estimateRate_2b35a597f76f4c97,
          mid_estimateRate_d03d48bfed3b5bc5,
          mid_getIdentity_29a81183f6438266,
          mid_getModifiedRodrigues_edb85c4da4ced345,
          mid_getRotation_73da4eeccf2b7e14,
          mid_getRotationAcceleration_2d64addf4c3391d9,
          mid_getRotationRate_2d64addf4c3391d9,
          mid_revert_2e8947cffff3985b,
          mid_rotationShiftedBy_5e711e04bf4f6ce9,
          mid_shiftedBy_d3ff09ba7b3463f1,
          mid_shiftedBy_8ab2fead23207404,
          mid_subtractOffset_44eedb5739df97b3,
          mid_toAngularCoordinates_f385f7a363d6ca27,
          mid_toDerivativeStructureRotation_787de7775c059c73,
          mid_toUnivariateDerivative1Rotation_73da4eeccf2b7e14,
          mid_toUnivariateDerivative2Rotation_73da4eeccf2b7e14,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAngularCoordinates(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAngularCoordinates(const FieldAngularCoordinates& obj) : ::java::lang::Object(obj) {}

        FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAngularCoordinates(const ::org::hipparchus::Field &, const ::org::orekit::utils::AngularCoordinates &);
        FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAngularCoordinates(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, jdouble);

        FieldAngularCoordinates addOffset(const FieldAngularCoordinates &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates &) const;
        ::org::orekit::utils::FieldPVCoordinates applyTo(const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::utils::FieldPVCoordinates applyTo(const ::org::orekit::utils::PVCoordinates &) const;
        static FieldAngularCoordinates createFromModifiedRodrigues(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &);
        static ::org::hipparchus::geometry::euclidean::threed::FieldVector3D estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, jdouble);
        static ::org::hipparchus::geometry::euclidean::threed::FieldVector3D estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::CalculusFieldElement &);
        static FieldAngularCoordinates getIdentity(const ::org::hipparchus::Field &);
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > getModifiedRodrigues(jdouble) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getRotationAcceleration() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getRotationRate() const;
        FieldAngularCoordinates revert() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationShiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldAngularCoordinates shiftedBy(jdouble) const;
        FieldAngularCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldAngularCoordinates subtractOffset(const FieldAngularCoordinates &) const;
        ::org::orekit::utils::AngularCoordinates toAngularCoordinates() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation toDerivativeStructureRotation(jint) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation toUnivariateDerivative1Rotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation toUnivariateDerivative2Rotation() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldAngularCoordinates);
      extern PyTypeObject *PY_TYPE(FieldAngularCoordinates);

      class t_FieldAngularCoordinates {
      public:
        PyObject_HEAD
        FieldAngularCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAngularCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAngularCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAngularCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
