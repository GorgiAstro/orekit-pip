#ifndef org_orekit_models_earth_GeoMagneticElements_H
#define org_orekit_models_earth_GeoMagneticElements_H

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
    class String;
    class Class;
  }
  namespace io {
    class Serializable;
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
            mid_init$_1844f891addbac57,
            mid_getDeclination_b74f83833fdad017,
            mid_getFieldVector_8b724f8b4fdad1a2,
            mid_getHorizontalIntensity_b74f83833fdad017,
            mid_getInclination_b74f83833fdad017,
            mid_getTotalIntensity_b74f83833fdad017,
            mid_toString_1c1fa1e935d6cdcf,
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
