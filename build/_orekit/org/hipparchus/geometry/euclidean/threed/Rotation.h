#ifndef org_hipparchus_geometry_euclidean_threed_Rotation_H
#define org_hipparchus_geometry_euclidean_threed_Rotation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationConvention;
          class Rotation;
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
              mid_init$_8f7d2a24ef2ff591,
              mid_init$_2dc700e70febd4ad,
              mid_init$_27dead8fbd68e444,
              mid_init$_6daf871d109886ea,
              mid_init$_97162a3d562c2699,
              mid_init$_1b47bef3b986c422,
              mid_applyInverseTo_9f88b874cdb77e92,
              mid_applyInverseTo_d0fe714ef34714f7,
              mid_applyInverseTo_e1f4b15468f5564a,
              mid_applyTo_9f88b874cdb77e92,
              mid_applyTo_d0fe714ef34714f7,
              mid_applyTo_e1f4b15468f5564a,
              mid_compose_ff6197154b48afce,
              mid_composeInverse_ff6197154b48afce,
              mid_distance_0086305c5b699627,
              mid_getAngle_dff5885c2c873297,
              mid_getAngles_2d06c337fbfd1b2e,
              mid_getAxis_33c6fc5f4328c947,
              mid_getMatrix_0358d8ea02f2cdb1,
              mid_getQ0_dff5885c2c873297,
              mid_getQ1_dff5885c2c873297,
              mid_getQ2_dff5885c2c873297,
              mid_getQ3_dff5885c2c873297,
              mid_revert_de86c7efc42eac14,
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
