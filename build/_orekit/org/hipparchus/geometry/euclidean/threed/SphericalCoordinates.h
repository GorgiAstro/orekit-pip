#ifndef org_hipparchus_geometry_euclidean_threed_SphericalCoordinates_H
#define org_hipparchus_geometry_euclidean_threed_SphericalCoordinates_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class SphericalCoordinates : public ::java::lang::Object {
           public:
            enum {
              mid_init$_029ff0cbf68ea054,
              mid_init$_2c56b6dd4d4b1dec,
              mid_getCartesian_d52645e0d4c07563,
              mid_getPhi_dff5885c2c873297,
              mid_getR_dff5885c2c873297,
              mid_getTheta_dff5885c2c873297,
              mid_toCartesianGradient_ac3d742ccc742f22,
              mid_toCartesianHessian_81ab62e515fe2068,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SphericalCoordinates(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SphericalCoordinates(const SphericalCoordinates& obj) : ::java::lang::Object(obj) {}

            SphericalCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            SphericalCoordinates(jdouble, jdouble, jdouble);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getCartesian() const;
            jdouble getPhi() const;
            jdouble getR() const;
            jdouble getTheta() const;
            JArray< jdouble > toCartesianGradient(const JArray< jdouble > &) const;
            JArray< JArray< jdouble > > toCartesianHessian(const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
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
          extern PyType_Def PY_TYPE_DEF(SphericalCoordinates);
          extern PyTypeObject *PY_TYPE(SphericalCoordinates);

          class t_SphericalCoordinates {
          public:
            PyObject_HEAD
            SphericalCoordinates object;
            static PyObject *wrap_Object(const SphericalCoordinates&);
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
