#ifndef org_hipparchus_geometry_euclidean_threed_FieldRotation_H
#define org_hipparchus_geometry_euclidean_threed_FieldRotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationConvention;
          class Vector3D;
          class FieldRotation;
          class FieldVector3D;
          class RotationOrder;
          class Rotation;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
              mid_init$_e67380c15d7bb85a,
              mid_init$_e970db82036444fd,
              mid_init$_d965f7261acd08d9,
              mid_init$_ba1bb984c580930b,
              mid_init$_f3ce3a1fac668ea5,
              mid_init$_31abe03686aee6c3,
              mid_init$_78fbed7d6fa102fc,
              mid_applyInverseTo_d0768944fb0b84ef,
              mid_applyInverseTo_49157187b00e5904,
              mid_applyInverseTo_21d5fadd2d5408be,
              mid_applyInverseTo_356b02aa715afa02,
              mid_applyInverseTo_3d107ab4a6dcd08d,
              mid_applyInverseTo_2d4b2d13ddc9fb6a,
              mid_applyInverseTo_8b37798c2ad7690e,
              mid_applyInverseTo_1a804267ea91ac19,
              mid_applyTo_d0768944fb0b84ef,
              mid_applyTo_49157187b00e5904,
              mid_applyTo_21d5fadd2d5408be,
              mid_applyTo_356b02aa715afa02,
              mid_applyTo_3d107ab4a6dcd08d,
              mid_applyTo_2d4b2d13ddc9fb6a,
              mid_applyTo_8b37798c2ad7690e,
              mid_applyTo_1a804267ea91ac19,
              mid_compose_eda9f6acf9a8318c,
              mid_compose_8b72f7d6d24f121b,
              mid_composeInverse_eda9f6acf9a8318c,
              mid_composeInverse_8b72f7d6d24f121b,
              mid_distance_a579456cc557b766,
              mid_getAngle_81520b552cb3fa26,
              mid_getAngles_39b23660f6d802e5,
              mid_getAxis_c217c42bc03f34e5,
              mid_getIdentity_643bba172d42020e,
              mid_getMatrix_34ce7b2f6a50059b,
              mid_getQ0_81520b552cb3fa26,
              mid_getQ1_81520b552cb3fa26,
              mid_getQ2_81520b552cb3fa26,
              mid_getQ3_81520b552cb3fa26,
              mid_revert_1e54a5caa5199c2e,
              mid_toRotation_ff298a39b3cae5da,
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
