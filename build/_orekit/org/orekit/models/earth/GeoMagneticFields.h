#ifndef org_orekit_models_earth_GeoMagneticFields_H
#define org_orekit_models_earth_GeoMagneticFields_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
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

        class GeoMagneticFields : public ::java::lang::Object {
         public:
          enum {
            mid_getField_4aeee65bc3c68b0b,
            mid_getIGRF_11ad1d91265636f7,
            mid_getWMM_11ad1d91265636f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoMagneticFields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoMagneticFields(const GeoMagneticFields& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(GeoMagneticFields);
        extern PyTypeObject *PY_TYPE(GeoMagneticFields);

        class t_GeoMagneticFields {
        public:
          PyObject_HEAD
          GeoMagneticFields object;
          static PyObject *wrap_Object(const GeoMagneticFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
