#ifndef org_hipparchus_geometry_euclidean_threed_RotationOrder_H
#define org_hipparchus_geometry_euclidean_threed_RotationOrder_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class RotationOrder : public ::java::lang::Enum {
           public:
            enum {
              mid_getA1_17a952530a808943,
              mid_getA2_17a952530a808943,
              mid_getA3_17a952530a808943,
              mid_getRotationOrder_b19970ea875427f5,
              mid_toString_0090f7797e403f43,
              mid_valueOf_b19970ea875427f5,
              mid_values_da1671c21b9900e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RotationOrder(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RotationOrder(const RotationOrder& obj) : ::java::lang::Enum(obj) {}

            static RotationOrder *XYX;
            static RotationOrder *XYZ;
            static RotationOrder *XZX;
            static RotationOrder *XZY;
            static RotationOrder *YXY;
            static RotationOrder *YXZ;
            static RotationOrder *YZX;
            static RotationOrder *YZY;
            static RotationOrder *ZXY;
            static RotationOrder *ZXZ;
            static RotationOrder *ZYX;
            static RotationOrder *ZYZ;

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getA1() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getA2() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getA3() const;
            static RotationOrder getRotationOrder(const ::java::lang::String &);
            ::java::lang::String toString() const;
            static RotationOrder valueOf(const ::java::lang::String &);
            static JArray< RotationOrder > values();
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
          extern PyType_Def PY_TYPE_DEF(RotationOrder);
          extern PyTypeObject *PY_TYPE(RotationOrder);

          class t_RotationOrder {
          public:
            PyObject_HEAD
            RotationOrder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RotationOrder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RotationOrder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RotationOrder&, PyTypeObject *);
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
