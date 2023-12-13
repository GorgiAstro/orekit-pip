#ifndef org_orekit_models_earth_PythonGeoMagneticFields_H
#define org_orekit_models_earth_PythonGeoMagneticFields_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticFields;
        class GeoMagneticField;
        class GeoMagneticFieldFactory$FieldModel;
      }
    }
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getField_63411221dee4d2d9,
            mid_getIGRF_0b71ae56f8fa5718,
            mid_getWMM_0b71ae56f8fa5718,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
