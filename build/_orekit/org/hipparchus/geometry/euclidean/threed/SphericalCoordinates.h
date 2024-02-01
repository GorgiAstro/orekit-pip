#ifndef org_hipparchus_geometry_euclidean_threed_SphericalCoordinates_H
#define org_hipparchus_geometry_euclidean_threed_SphericalCoordinates_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
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
              mid_init$_30f8886dfb88a63c,
              mid_init$_bd28dc6055dc5bbd,
              mid_getCartesian_032312bdeb3f2f93,
              mid_getPhi_9981f74b2d109da6,
              mid_getR_9981f74b2d109da6,
              mid_getTheta_9981f74b2d109da6,
              mid_toCartesianGradient_51f624c89851da7e,
              mid_toCartesianHessian_d97bb40bc481bc0d,
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
