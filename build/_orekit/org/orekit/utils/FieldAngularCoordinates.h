#ifndef org_orekit_utils_FieldAngularCoordinates_H
#define org_orekit_utils_FieldAngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
        class FieldUnivariateDerivative2;
        class FieldUnivariateDerivative1;
        class FieldDerivativeStructure;
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class PVCoordinates;
      class FieldPVCoordinates;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class FieldAngularCoordinates;
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
          mid_init$_36678dbdedc42376,
          mid_init$_d0f1c83862c61b8e,
          mid_init$_d0be30050404b9d7,
          mid_init$_6f9d9a409c6b64c9,
          mid_init$_6c82494359f1e442,
          mid_addOffset_5c4217e0473c8587,
          mid_applyTo_2c604bfeb0a28a2f,
          mid_applyTo_554e30441a4431d6,
          mid_applyTo_f76646e67e6a0632,
          mid_applyTo_ddd20dd2dd77e82a,
          mid_createFromModifiedRodrigues_b6da44a362005f7f,
          mid_estimateRate_eca05ede80447dac,
          mid_estimateRate_fea02aafbdef9ea8,
          mid_getIdentity_527880ef18d4c545,
          mid_getModifiedRodrigues_cd67b2fc6153e86f,
          mid_getRotation_1d339a2ee3a3323a,
          mid_getRotationAcceleration_716f50c86ffc8da7,
          mid_getRotationRate_716f50c86ffc8da7,
          mid_revert_816428dc64133c35,
          mid_rotationShiftedBy_18cefe87a5836f51,
          mid_shiftedBy_d44ae49cec21abff,
          mid_shiftedBy_44ac14fd99cc1f4e,
          mid_subtractOffset_5c4217e0473c8587,
          mid_toAngularCoordinates_8a604053f4d4c39e,
          mid_toDerivativeStructureRotation_371facd070e18d41,
          mid_toUnivariateDerivative1Rotation_1d339a2ee3a3323a,
          mid_toUnivariateDerivative2Rotation_1d339a2ee3a3323a,
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
