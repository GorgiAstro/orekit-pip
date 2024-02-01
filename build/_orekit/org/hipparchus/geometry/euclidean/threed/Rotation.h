#ifndef org_hipparchus_geometry_euclidean_threed_Rotation_H
#define org_hipparchus_geometry_euclidean_threed_Rotation_H

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
          class RotationOrder;
          class RotationConvention;
          class Rotation;
          class Vector3D;
        }
      }
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
              mid_init$_c8e9682f0daaca68,
              mid_init$_c5c31e89a68c0b64,
              mid_init$_8e113468e1d0b227,
              mid_init$_d48631c3a44dc662,
              mid_init$_adfb2f933ffda657,
              mid_init$_9fbe2e1f25f3b32b,
              mid_applyInverseTo_1481d82ae902b1df,
              mid_applyInverseTo_53c542efd8574582,
              mid_applyInverseTo_64100e41ba74de8f,
              mid_applyTo_1481d82ae902b1df,
              mid_applyTo_53c542efd8574582,
              mid_applyTo_64100e41ba74de8f,
              mid_compose_5fda24242ec16b36,
              mid_composeInverse_5fda24242ec16b36,
              mid_distance_e52ef6c5917ecd0e,
              mid_getAngle_9981f74b2d109da6,
              mid_getAngles_8244d7d1cde77ff0,
              mid_getAxis_882b8d638222834b,
              mid_getMatrix_eda3f19b8225f78f,
              mid_getQ0_9981f74b2d109da6,
              mid_getQ1_9981f74b2d109da6,
              mid_getQ2_9981f74b2d109da6,
              mid_getQ3_9981f74b2d109da6,
              mid_revert_4d68cff5f6e4403a,
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
