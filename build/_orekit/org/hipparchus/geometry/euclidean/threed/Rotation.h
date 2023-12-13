#ifndef org_hipparchus_geometry_euclidean_threed_Rotation_H
#define org_hipparchus_geometry_euclidean_threed_Rotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationConvention;
          class Vector3D;
          class RotationOrder;
          class Rotation;
        }
      }
    }
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

          class Rotation : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b651b5ef96594ce8,
              mid_init$_9362f21bee0a3b93,
              mid_init$_7005c718acc6ad99,
              mid_init$_f6f8af5f1648b06a,
              mid_init$_1c51932bc6cfcbf6,
              mid_init$_e1234700c30e734e,
              mid_applyInverseTo_ee28de9af47f5c59,
              mid_applyInverseTo_f21507e4850a184e,
              mid_applyInverseTo_b15baa0161a4e9c7,
              mid_applyTo_ee28de9af47f5c59,
              mid_applyTo_f21507e4850a184e,
              mid_applyTo_b15baa0161a4e9c7,
              mid_compose_6d8395e667c69471,
              mid_composeInverse_6d8395e667c69471,
              mid_distance_1fa547ea9a0201c5,
              mid_getAngle_b74f83833fdad017,
              mid_getAngles_400c30dc94b4a4c2,
              mid_getAxis_ff3972e7a0715932,
              mid_getMatrix_3b7b373db8e7887f,
              mid_getQ0_b74f83833fdad017,
              mid_getQ1_b74f83833fdad017,
              mid_getQ2_b74f83833fdad017,
              mid_getQ3_b74f83833fdad017,
              mid_revert_ff298a39b3cae5da,
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
