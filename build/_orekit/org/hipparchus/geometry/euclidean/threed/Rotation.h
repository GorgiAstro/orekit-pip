#ifndef org_hipparchus_geometry_euclidean_threed_Rotation_H
#define org_hipparchus_geometry_euclidean_threed_Rotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
      class MathIllegalStateException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Rotation;
          class RotationConvention;
          class RotationOrder;
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
              mid_init$_be9548a8a583a03d,
              mid_init$_ed1ea3c88bfc4c0e,
              mid_init$_053676e45631ca1c,
              mid_init$_2de057303d403e96,
              mid_init$_107e6f6bd1deddd4,
              mid_init$_5a3f2614d84ea74f,
              mid_applyInverseTo_e81f5abfd2c7d09d,
              mid_applyInverseTo_b48aa9aef740fa79,
              mid_applyInverseTo_ab4840ba016ef1da,
              mid_applyTo_e81f5abfd2c7d09d,
              mid_applyTo_b48aa9aef740fa79,
              mid_applyTo_ab4840ba016ef1da,
              mid_compose_c32f9fe35e571dfa,
              mid_composeInverse_c32f9fe35e571dfa,
              mid_distance_111ab3ebc4d0d9bb,
              mid_getAngle_557b8123390d8d0c,
              mid_getAngles_c40c4543275315f0,
              mid_getAxis_096b5df9e235dcab,
              mid_getMatrix_8cf5267aa13a77f3,
              mid_getQ0_557b8123390d8d0c,
              mid_getQ1_557b8123390d8d0c,
              mid_getQ2_557b8123390d8d0c,
              mid_getQ3_557b8123390d8d0c,
              mid_revert_1e0dc1a6788897b9,
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
