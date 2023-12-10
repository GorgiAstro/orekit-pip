#ifndef org_hipparchus_geometry_euclidean_threed_FieldRotation_H
#define org_hipparchus_geometry_euclidean_threed_FieldRotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class RotationConvention;
          class FieldVector3D;
          class FieldRotation;
          class RotationOrder;
          class Vector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    class Field;
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
              mid_init$_67d015490dd313e3,
              mid_init$_4477d1375dd1908a,
              mid_init$_841fd60741dbfb48,
              mid_init$_f918795bdbac97ac,
              mid_init$_49bf7a3fc95b685e,
              mid_init$_816d59820332b1b5,
              mid_init$_fbe39ca3cfe4582d,
              mid_applyInverseTo_81292042324b6fb2,
              mid_applyInverseTo_a173408e2b1f78b2,
              mid_applyInverseTo_dd12e5f7a585a156,
              mid_applyInverseTo_7a9aa2e8b906f1a5,
              mid_applyInverseTo_1fafd88f5c1b8f0f,
              mid_applyInverseTo_cbc98e7d0c0477db,
              mid_applyInverseTo_36d4d2841b95f44f,
              mid_applyInverseTo_431eb85cb1b43ad7,
              mid_applyTo_81292042324b6fb2,
              mid_applyTo_a173408e2b1f78b2,
              mid_applyTo_dd12e5f7a585a156,
              mid_applyTo_7a9aa2e8b906f1a5,
              mid_applyTo_1fafd88f5c1b8f0f,
              mid_applyTo_cbc98e7d0c0477db,
              mid_applyTo_36d4d2841b95f44f,
              mid_applyTo_431eb85cb1b43ad7,
              mid_compose_78c23ea2b2ceca49,
              mid_compose_b2a1d7ead97c63bd,
              mid_composeInverse_78c23ea2b2ceca49,
              mid_composeInverse_b2a1d7ead97c63bd,
              mid_distance_f00f0d7b4350b7f6,
              mid_getAngle_eba8e72a22c984ac,
              mid_getAngles_83468b668f3dd1eb,
              mid_getAxis_470de3cbd3b402cf,
              mid_getIdentity_68ed739186cbd17c,
              mid_getMatrix_1b3ae884bec31e6d,
              mid_getQ0_eba8e72a22c984ac,
              mid_getQ1_eba8e72a22c984ac,
              mid_getQ2_eba8e72a22c984ac,
              mid_getQ3_eba8e72a22c984ac,
              mid_revert_1d339a2ee3a3323a,
              mid_toRotation_de86c7efc42eac14,
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
