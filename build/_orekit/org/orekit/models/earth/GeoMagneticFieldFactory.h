#ifndef org_orekit_models_earth_GeoMagneticFieldFactory_H
#define org_orekit_models_earth_GeoMagneticFieldFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class LazyLoadedGeoMagneticFields;
        class GeoMagneticFieldFactory$FieldModel;
        class GeoMagneticField;
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
            mid_getField_a3e70fb66ee864fe,
            mid_getGeoMagneticFields_f938ea66f56d3454,
            mid_getIGRF_7100d3672aa999e4,
            mid_getWMM_7100d3672aa999e4,
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
