#ifndef org_orekit_models_earth_GeoMagneticField_H
#define org_orekit_models_earth_GeoMagneticField_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticElements;
        class GeoMagneticField;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        class GeoMagneticField : public ::java::lang::Object {
         public:
          enum {
            mid_calculateField_3b6e25dbcc3ddd45,
            mid_getDecimalYear_3d407e6a8cf9e8ca,
            mid_getEpoch_dff5885c2c873297,
            mid_getModelName_11b109bd155ca898,
            mid_supportsTimeTransform_b108b35ef48e27bd,
            mid_transformModel_11ad1d91265636f7,
            mid_transformModel_39245caac2ba5683,
            mid_validFrom_dff5885c2c873297,
            mid_validTo_dff5885c2c873297,
            mid_setMainFieldCoefficients_d472661d1e6c4e58,
            mid_setSecularVariationCoefficients_d472661d1e6c4e58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoMagneticField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoMagneticField(const GeoMagneticField& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::models::earth::GeoMagneticElements calculateField(jdouble, jdouble, jdouble) const;
          static jdouble getDecimalYear(jint, jint, jint);
          jdouble getEpoch() const;
          ::java::lang::String getModelName() const;
          jboolean supportsTimeTransform() const;
          GeoMagneticField transformModel(jdouble) const;
          GeoMagneticField transformModel(const GeoMagneticField &, jdouble) const;
          jdouble validFrom() const;
          jdouble validTo() const;
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
        extern PyType_Def PY_TYPE_DEF(GeoMagneticField);
        extern PyTypeObject *PY_TYPE(GeoMagneticField);

        class t_GeoMagneticField {
        public:
          PyObject_HEAD
          GeoMagneticField object;
          static PyObject *wrap_Object(const GeoMagneticField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
