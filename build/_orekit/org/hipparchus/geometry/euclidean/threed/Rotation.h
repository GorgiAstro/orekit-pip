#ifndef org_hipparchus_geometry_euclidean_threed_Rotation_H
#define org_hipparchus_geometry_euclidean_threed_Rotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
          class RotationOrder;
          class RotationConvention;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class MathRuntimeException;
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

          class Rotation : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bedd188d9f399c34,
              mid_init$_03697b699aa0ff80,
              mid_init$_155dcc6d13e5c5b3,
              mid_init$_031d018afc606d51,
              mid_init$_da0304f1b27bd801,
              mid_init$_39a9a79474e53394,
              mid_applyInverseTo_d9eecc5668c093d0,
              mid_applyInverseTo_afd63a09f6d01e4c,
              mid_applyInverseTo_0d03c8a1d7f56f02,
              mid_applyTo_d9eecc5668c093d0,
              mid_applyTo_afd63a09f6d01e4c,
              mid_applyTo_0d03c8a1d7f56f02,
              mid_compose_1018c521de6ee2a3,
              mid_composeInverse_1018c521de6ee2a3,
              mid_distance_9887de54c3d14021,
              mid_getAngle_456d9a2f64d6b28d,
              mid_getAngles_32000a56afaeda36,
              mid_getAxis_4856575fbf5ac2cf,
              mid_getMatrix_43de1192439efa92,
              mid_getQ0_456d9a2f64d6b28d,
              mid_getQ1_456d9a2f64d6b28d,
              mid_getQ2_456d9a2f64d6b28d,
              mid_getQ3_456d9a2f64d6b28d,
              mid_revert_24d2e432e376f9a0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Rotation(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Rotation(const Rotation& obj) : ::java::lang::Object(obj) {}

            static Rotation *IDENTITY;

            Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            Rotation(const JArray< JArray< jdouble > > &, jdouble);
            Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &);
            Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            Rotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &, jdouble, jdouble, jdouble);
            Rotation(jdouble, jdouble, jdouble, jdouble, jboolean);

            Rotation applyInverseTo(const Rotation &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void applyInverseTo(const JArray< jdouble > &, const JArray< jdouble > &) const;
            Rotation applyTo(const Rotation &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void applyTo(const JArray< jdouble > &, const JArray< jdouble > &) const;
            Rotation compose(const Rotation &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            Rotation composeInverse(const Rotation &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            static jdouble distance(const Rotation &, const Rotation &);
            jdouble getAngle() const;
            JArray< jdouble > getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention &) const;
            JArray< JArray< jdouble > > getMatrix() const;
            jdouble getQ0() const;
            jdouble getQ1() const;
            jdouble getQ2() const;
            jdouble getQ3() const;
            Rotation revert() const;
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
          extern PyType_Def PY_TYPE_DEF(Rotation);
          extern PyTypeObject *PY_TYPE(Rotation);

          class t_Rotation {
          public:
            PyObject_HEAD
            Rotation object;
            static PyObject *wrap_Object(const Rotation&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
