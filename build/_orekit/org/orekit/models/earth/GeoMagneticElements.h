#ifndef org_orekit_models_earth_GeoMagneticElements_H
#define org_orekit_models_earth_GeoMagneticElements_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
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
  namespace orekit {
    namespace models {
      namespace earth {

        class GeoMagneticElements : public ::java::lang::Object {
         public:
          enum {
            mid_init$_029ff0cbf68ea054,
            mid_getDeclination_dff5885c2c873297,
            mid_getFieldVector_d52645e0d4c07563,
            mid_getHorizontalIntensity_dff5885c2c873297,
            mid_getInclination_dff5885c2c873297,
            mid_getTotalIntensity_dff5885c2c873297,
            mid_toString_11b109bd155ca898,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoMagneticElements(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoMagneticElements(const GeoMagneticElements& obj) : ::java::lang::Object(obj) {}

          GeoMagneticElements(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

          jdouble getDeclination() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getFieldVector() const;
          jdouble getHorizontalIntensity() const;
          jdouble getInclination() const;
          jdouble getTotalIntensity() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        extern PyType_Def PY_TYPE_DEF(GeoMagneticElements);
        extern PyTypeObject *PY_TYPE(GeoMagneticElements);

        class t_GeoMagneticElements {
        public:
          PyObject_HEAD
          GeoMagneticElements object;
          static PyObject *wrap_Object(const GeoMagneticElements&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
