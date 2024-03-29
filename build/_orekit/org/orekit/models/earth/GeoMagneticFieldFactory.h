#ifndef org_orekit_models_earth_GeoMagneticFieldFactory_H
#define org_orekit_models_earth_GeoMagneticFieldFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class LazyLoadedGeoMagneticFields;
        class GeoMagneticField;
        class GeoMagneticFieldFactory$FieldModel;
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
            mid_getField_7ee697680d30d1e8,
            mid_getGeoMagneticFields_dc04cadaa56dfc28,
            mid_getIGRF_5fbf1330f033ba72,
            mid_getWMM_5fbf1330f033ba72,
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
