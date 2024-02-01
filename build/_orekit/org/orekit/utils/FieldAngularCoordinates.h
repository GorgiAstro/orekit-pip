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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class AngularCoordinates;
      class FieldAngularCoordinates;
      class PVCoordinates;
      class TimeStampedPVCoordinates;
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
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
          mid_init$_93243f17280cd27c,
          mid_init$_fbf220282d78d500,
          mid_init$_9b3177aa0063bfd6,
          mid_init$_cea7ef07608fc27b,
          mid_init$_1744820a539d0a5d,
          mid_addOffset_38895dc8ac761c3b,
          mid_applyTo_42f03a1654758e56,
          mid_applyTo_25934c59f051a43a,
          mid_applyTo_1bd1ef8a7bbb7399,
          mid_applyTo_bbe671ce7c49d0a3,
          mid_createFromModifiedRodrigues_9f8340afbe9a0f67,
          mid_estimateRate_abfbb1e338383f1f,
          mid_estimateRate_a00e1d2416bbd412,
          mid_getIdentity_9cc2b9634d93173d,
          mid_getModifiedRodrigues_a17af817fe464523,
          mid_getRotation_5c8e6f300713559c,
          mid_getRotationAcceleration_d1b42a6748e907f9,
          mid_getRotationRate_d1b42a6748e907f9,
          mid_revert_f9d057933ad73f59,
          mid_rotationShiftedBy_bb3ec91d8d6ff7f2,
          mid_shiftedBy_29cf63b368ce4444,
          mid_shiftedBy_61bee88ebe869cf4,
          mid_subtractOffset_38895dc8ac761c3b,
          mid_toAngularCoordinates_76b9e5ce5fa05103,
          mid_toDerivativeStructureRotation_6d38f548acbe7c0a,
          mid_toUnivariateDerivative1Rotation_5c8e6f300713559c,
          mid_toUnivariateDerivative2Rotation_5c8e6f300713559c,
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
