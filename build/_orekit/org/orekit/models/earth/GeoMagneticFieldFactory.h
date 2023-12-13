#ifndef org_orekit_models_earth_GeoMagneticFieldFactory_H
#define org_orekit_models_earth_GeoMagneticFieldFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticField;
        class GeoMagneticFieldFactory$FieldModel;
        class LazyLoadedGeoMagneticFields;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        class GeoMagneticFieldFactory : public ::java::lang::Object {
         public:
          enum {
            mid_getField_63411221dee4d2d9,
            mid_getGeoMagneticFields_d89697effe31d95a,
            mid_getIGRF_0b71ae56f8fa5718,
            mid_getWMM_0b71ae56f8fa5718,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoMagneticFieldFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoMagneticFieldFactory(const GeoMagneticFieldFactory& obj) : ::java::lang::Object(obj) {}

          static ::org::orekit::models::earth::GeoMagneticField getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, jdouble);
          static ::org::orekit::models::earth::LazyLoadedGeoMagneticFields getGeoMagneticFields();
          static ::org::orekit::models::earth::GeoMagneticField getIGRF(jdouble);
          static ::org::orekit::models::earth::GeoMagneticField getWMM(jdouble);
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
        extern PyType_Def PY_TYPE_DEF(GeoMagneticFieldFactory);
        extern PyTypeObject *PY_TYPE(GeoMagneticFieldFactory);

        class t_GeoMagneticFieldFactory {
        public:
          PyObject_HEAD
          GeoMagneticFieldFactory object;
          static PyObject *wrap_Object(const GeoMagneticFieldFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
