#ifndef org_hipparchus_geometry_euclidean_threed_FieldRotation_H
#define org_hipparchus_geometry_euclidean_threed_FieldRotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class RotationOrder;
          class RotationConvention;
          class FieldRotation;
          class Rotation;
          class Vector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class FieldRotation : public ::java::lang::Object {
           public:
            enum {
              mid_init$_45d220651e48f081,
              mid_init$_1d7654747a97875b,
              mid_init$_67493a0743323b57,
              mid_init$_932492fd27af1630,
              mid_init$_6fff80aed6ccb177,
              mid_init$_3f69a26f157cde18,
              mid_init$_1d5219772450f61f,
              mid_applyInverseTo_5a1b7d6ed4b4f387,
              mid_applyInverseTo_df37e4d755ff0467,
              mid_applyInverseTo_fdf2c698f521cc21,
              mid_applyInverseTo_f577b57448bfefd2,
              mid_applyInverseTo_f505830437b92c46,
              mid_applyInverseTo_7709cb51638b2622,
              mid_applyInverseTo_4d48ecd7a3a818eb,
              mid_applyInverseTo_d24da01432850594,
              mid_applyTo_5a1b7d6ed4b4f387,
              mid_applyTo_df37e4d755ff0467,
              mid_applyTo_fdf2c698f521cc21,
              mid_applyTo_f577b57448bfefd2,
              mid_applyTo_f505830437b92c46,
              mid_applyTo_7709cb51638b2622,
              mid_applyTo_4d48ecd7a3a818eb,
              mid_applyTo_d24da01432850594,
              mid_compose_269023ef73a640c2,
              mid_compose_c51154664f6e214d,
              mid_composeInverse_269023ef73a640c2,
              mid_composeInverse_c51154664f6e214d,
              mid_distance_6b0cc5ad87dddb65,
              mid_getAngle_08d37e3f77b7239d,
              mid_getAngles_c78eddae8510fb04,
              mid_getAxis_e381526ea6eceb85,
              mid_getIdentity_1618d8dd33222dca,
              mid_getMatrix_4d010bb8d4780d51,
              mid_getQ0_08d37e3f77b7239d,
              mid_getQ1_08d37e3f77b7239d,
              mid_getQ2_08d37e3f77b7239d,
              mid_getQ3_08d37e3f77b7239d,
              mid_revert_5c8e6f300713559c,
              mid_toRotation_4d68cff5f6e4403a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldRotation(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldRotation(const FieldRotation& obj) : ::java::lang::Object(obj) {}

            FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
            FieldRotation(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &, jdouble);
            FieldRotation(const ::org::hipparchus::Field &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
            FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &);
            FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
            FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            FieldRotation(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jboolean);

            FieldRotation applyInverseTo(const FieldRotation &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            FieldRotation applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void applyInverseTo(const JArray< jdouble > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            void applyInverseTo(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            static FieldRotation applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const FieldRotation &);
            static ::org::hipparchus::geometry::euclidean::threed::FieldVector3D applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
            FieldRotation applyTo(const FieldRotation &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D applyTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            FieldRotation applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void applyTo(const JArray< jdouble > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            void applyTo(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            static FieldRotation applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const FieldRotation &);
            static ::org::hipparchus::geometry::euclidean::threed::FieldVector3D applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
            FieldRotation compose(const FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            FieldRotation compose(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            FieldRotation composeInverse(const FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            FieldRotation composeInverse(const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            static ::org::hipparchus::CalculusFieldElement distance(const FieldRotation &, const FieldRotation &);
            ::org::hipparchus::CalculusFieldElement getAngle() const;
            JArray< ::org::hipparchus::CalculusFieldElement > getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            static FieldRotation getIdentity(const ::org::hipparchus::Field &);
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > getMatrix() const;
            ::org::hipparchus::CalculusFieldElement getQ0() const;
            ::org::hipparchus::CalculusFieldElement getQ1() const;
            ::org::hipparchus::CalculusFieldElement getQ2() const;
            ::org::hipparchus::CalculusFieldElement getQ3() const;
            FieldRotation revert() const;
            ::org::hipparchus::geometry::euclidean::threed::Rotation toRotation() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(FieldRotation);
          extern PyTypeObject *PY_TYPE(FieldRotation);

          class t_FieldRotation {
          public:
            PyObject_HEAD
            FieldRotation object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldRotation *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldRotation&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldRotation&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
