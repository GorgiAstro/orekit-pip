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
            mid_init$_2810d2bec90e7b1c,
            mid_getDeclination_557b8123390d8d0c,
            mid_getFieldVector_f88961cca75a2c0a,
            mid_getHorizontalIntensity_557b8123390d8d0c,
            mid_getInclination_557b8123390d8d0c,
            mid_getTotalIntensity_557b8123390d8d0c,
            mid_toString_3cffd47377eca18a,
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
