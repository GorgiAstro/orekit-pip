#ifndef org_orekit_utils_FieldAngularCoordinates_H
#define org_orekit_utils_FieldAngularCoordinates_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class AngularCoordinates;
      class TimeStampedPVCoordinates;
      class PVCoordinates;
      class FieldAngularCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldTimeShiftable;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class FieldVector3D;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative2;
        class FieldUnivariateDerivative1;
      }
    }
    class Field;
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
          mid_init$_dda4fc5052dbc315,
          mid_init$_006ed17eafc6f566,
          mid_init$_b48a80a7923c10e7,
          mid_init$_3e921d7ba937742f,
          mid_init$_b3548fb4d05156ca,
          mid_addOffset_b4fca2d41d96dde7,
          mid_applyTo_176da7a9c87c96a5,
          mid_applyTo_b9efbea1bca1646b,
          mid_applyTo_448b59d288b2a2ff,
          mid_applyTo_56bdb7492041db79,
          mid_createFromModifiedRodrigues_3765c91cac246fea,
          mid_estimateRate_fb3f5086e8ab09a4,
          mid_estimateRate_4aafef0025250c27,
          mid_getIdentity_f9978acbd91ca763,
          mid_getModifiedRodrigues_8834de8762278880,
          mid_getRotation_1e54a5caa5199c2e,
          mid_getRotationAcceleration_ff5ac73a7b43eddd,
          mid_getRotationRate_ff5ac73a7b43eddd,
          mid_revert_c0c63601c9238de5,
          mid_rotationShiftedBy_2005bf0d8214fe6a,
          mid_shiftedBy_82d5cf76a7821c9e,
          mid_shiftedBy_e3acef3b80610ef7,
          mid_subtractOffset_b4fca2d41d96dde7,
          mid_toAngularCoordinates_df90fc3151533d81,
          mid_toDerivativeStructureRotation_33765e3b6b59bed2,
          mid_toUnivariateDerivative1Rotation_1e54a5caa5199c2e,
          mid_toUnivariateDerivative2Rotation_1e54a5caa5199c2e,
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
