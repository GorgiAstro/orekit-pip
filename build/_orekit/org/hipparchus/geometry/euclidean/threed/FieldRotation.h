#ifndef org_hipparchus_geometry_euclidean_threed_FieldRotation_H
#define org_hipparchus_geometry_euclidean_threed_FieldRotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
          class FieldVector3D;
          class RotationOrder;
          class RotationConvention;
          class FieldRotation;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
      class MathIllegalStateException;
    }
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
              mid_init$_d35296e3a83f651e,
              mid_init$_34d501d44c817ec2,
              mid_init$_a7e278938f05de5f,
              mid_init$_d6d5bacbc27f25c0,
              mid_init$_ce1254023c8acdf4,
              mid_init$_9955e36472134364,
              mid_init$_7793ae77d5892991,
              mid_applyInverseTo_7780b180520e4093,
              mid_applyInverseTo_8ff2edc0ecba4b6e,
              mid_applyInverseTo_dce949c5c7f1be52,
              mid_applyInverseTo_89718cf054290f11,
              mid_applyInverseTo_7bd097adab3a6fd8,
              mid_applyInverseTo_44f58eee1ec38a36,
              mid_applyInverseTo_ecb7c4116ea96bbc,
              mid_applyInverseTo_71fdc303b3a884ec,
              mid_applyTo_7780b180520e4093,
              mid_applyTo_8ff2edc0ecba4b6e,
              mid_applyTo_dce949c5c7f1be52,
              mid_applyTo_89718cf054290f11,
              mid_applyTo_7bd097adab3a6fd8,
              mid_applyTo_44f58eee1ec38a36,
              mid_applyTo_ecb7c4116ea96bbc,
              mid_applyTo_71fdc303b3a884ec,
              mid_compose_2e891f0ba92656ce,
              mid_compose_148c6c34e651184a,
              mid_composeInverse_2e891f0ba92656ce,
              mid_composeInverse_148c6c34e651184a,
              mid_distance_8778d6edba1e4c81,
              mid_getAngle_e6d4d3215c30992a,
              mid_getAngles_79c0b7a5665e5fa5,
              mid_getAxis_cd6bb24193486c18,
              mid_getIdentity_cb81d904ebed2a63,
              mid_getMatrix_dd8485a0eb2e2903,
              mid_getQ0_e6d4d3215c30992a,
              mid_getQ1_e6d4d3215c30992a,
              mid_getQ2_e6d4d3215c30992a,
              mid_getQ3_e6d4d3215c30992a,
              mid_revert_ac4489fdef1c3aef,
              mid_toRotation_24d2e432e376f9a0,
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
