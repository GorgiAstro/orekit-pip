#ifndef org_orekit_models_earth_PythonGeoMagneticFields_H
#define org_orekit_models_earth_PythonGeoMagneticFields_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticFieldFactory$FieldModel;
        class GeoMagneticFields;
        class GeoMagneticField;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        class PythonGeoMagneticFields : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getField_4aeee65bc3c68b0b,
            mid_getIGRF_11ad1d91265636f7,
            mid_getWMM_11ad1d91265636f7,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonGeoMagneticFields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonGeoMagneticFields(const PythonGeoMagneticFields& obj) : ::java::lang::Object(obj) {}

          PythonGeoMagneticFields();

          void finalize() const;
          ::org::orekit::models::earth::GeoMagneticField getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, jdouble) const;
          ::org::orekit::models::earth::GeoMagneticField getIGRF(jdouble) const;
          ::org::orekit::models::earth::GeoMagneticField getWMM(jdouble) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonGeoMagneticFields);
        extern PyTypeObject *PY_TYPE(PythonGeoMagneticFields);

        class t_PythonGeoMagneticFields {
        public:
          PyObject_HEAD
          PythonGeoMagneticFields object;
          static PyObject *wrap_Object(const PythonGeoMagneticFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
