#ifndef org_hipparchus_geometry_euclidean_threed_FieldRotation_H
#define org_hipparchus_geometry_euclidean_threed_FieldRotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
          class Rotation;
          class RotationConvention;
          class RotationOrder;
          class FieldRotation;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
      class MathIllegalStateException;
    }
    class CalculusFieldElement;
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
              mid_init$_b2e28a0995250182,
              mid_init$_99519c74887c9a65,
              mid_init$_cd2793491083f130,
              mid_init$_70afa204a0c5f293,
              mid_init$_7032bcc2305f4a2a,
              mid_init$_c8fb986ac347be10,
              mid_init$_5df711e8e19596d4,
              mid_applyInverseTo_8926439b3a3636df,
              mid_applyInverseTo_588ed0f09550adb9,
              mid_applyInverseTo_41277586417b5e98,
              mid_applyInverseTo_3d90e30d4cb13513,
              mid_applyInverseTo_dbc10859aa4336fa,
              mid_applyInverseTo_2c0fd42a693364fa,
              mid_applyInverseTo_700737d6d191289b,
              mid_applyInverseTo_9938b214a9bc898d,
              mid_applyTo_8926439b3a3636df,
              mid_applyTo_588ed0f09550adb9,
              mid_applyTo_41277586417b5e98,
              mid_applyTo_3d90e30d4cb13513,
              mid_applyTo_dbc10859aa4336fa,
              mid_applyTo_2c0fd42a693364fa,
              mid_applyTo_700737d6d191289b,
              mid_applyTo_9938b214a9bc898d,
              mid_compose_6b040ce0cdf349fd,
              mid_compose_1346c98f72663e1a,
              mid_composeInverse_6b040ce0cdf349fd,
              mid_composeInverse_1346c98f72663e1a,
              mid_distance_0e2701e899e1a78d,
              mid_getAngle_613c8f46c659f636,
              mid_getAngles_3af024ffea07f1eb,
              mid_getAxis_2c83ede3dfe0d5da,
              mid_getIdentity_45d0c5633bdbb166,
              mid_getMatrix_f180d140dce78d62,
              mid_getQ0_613c8f46c659f636,
              mid_getQ1_613c8f46c659f636,
              mid_getQ2_613c8f46c659f636,
              mid_getQ3_613c8f46c659f636,
              mid_revert_73da4eeccf2b7e14,
              mid_toRotation_1e0dc1a6788897b9,
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
