#ifndef org_orekit_utils_FieldAngularCoordinates_H
#define org_orekit_utils_FieldAngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
    }
    namespace utils {
      class FieldAngularCoordinates;
      class TimeStampedFieldPVCoordinates;
      class PVCoordinates;
      class TimeStampedPVCoordinates;
      class AngularCoordinates;
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
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class CalculusFieldElement;
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
          mid_init$_f8f94b8019a86187,
          mid_init$_66871659c3e0bfb2,
          mid_init$_3c4f2f18d0303b84,
          mid_init$_6ac368b443d4f180,
          mid_init$_561a148bb3fca15e,
          mid_addOffset_4bfc5bd74ac720b5,
          mid_applyTo_dc7eea29a4d4ad51,
          mid_applyTo_e42117f6acaa0604,
          mid_applyTo_32f08c76ddea4935,
          mid_applyTo_bdfc1809fc8a7def,
          mid_createFromModifiedRodrigues_12e5bbdb204422f8,
          mid_estimateRate_0c5dd53b4f41dc79,
          mid_estimateRate_0f1070a3f1d3a0b3,
          mid_getIdentity_baf57d554bbf8cbc,
          mid_getModifiedRodrigues_150723b2a6519ce9,
          mid_getRotation_ac4489fdef1c3aef,
          mid_getRotationAcceleration_5791f80683b5227e,
          mid_getRotationRate_5791f80683b5227e,
          mid_revert_60e0de9a41eb35da,
          mid_rotationShiftedBy_d07ea2a19a5215cb,
          mid_shiftedBy_5a1bf28e9397fdaa,
          mid_shiftedBy_c0afe8dc9dafe168,
          mid_subtractOffset_4bfc5bd74ac720b5,
          mid_toAngularCoordinates_eb0542756098e24f,
          mid_toDerivativeStructureRotation_4293e15d24113072,
          mid_toUnivariateDerivative1Rotation_ac4489fdef1c3aef,
          mid_toUnivariateDerivative2Rotation_ac4489fdef1c3aef,
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
