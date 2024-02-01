#ifndef org_orekit_models_earth_LazyLoadedGeoMagneticFields_H
#define org_orekit_models_earth_LazyLoadedGeoMagneticFields_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticFields;
        class GeoMagneticField;
        class GeoMagneticFieldFactory$FieldModel;
      }
    }
    namespace data {
      class DataProvidersManager;
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

        class LazyLoadedGeoMagneticFields : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f44b5b919beca6bf,
            mid_getField_7ee697680d30d1e8,
            mid_getIGRF_5fbf1330f033ba72,
            mid_getWMM_5fbf1330f033ba72,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LazyLoadedGeoMagneticFields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LazyLoadedGeoMagneticFields(const LazyLoadedGeoMagneticFields& obj) : ::java::lang::Object(obj) {}

          LazyLoadedGeoMagneticFields(const ::org::orekit::data::DataProvidersManager &);

          ::org::orekit::models::earth::GeoMagneticField getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, jdouble) const;
          ::org::orekit::models::earth::GeoMagneticField getIGRF(jdouble) const;
          ::org::orekit::models::earth::GeoMagneticField getWMM(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LazyLoadedGeoMagneticFields);
        extern PyTypeObject *PY_TYPE(LazyLoadedGeoMagneticFields);

        class t_LazyLoadedGeoMagneticFields {
        public:
          PyObject_HEAD
          LazyLoadedGeoMagneticFields object;
          static PyObject *wrap_Object(const LazyLoadedGeoMagneticFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
