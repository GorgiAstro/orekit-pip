#ifndef org_orekit_models_earth_GeoMagneticField_H
#define org_orekit_models_earth_GeoMagneticField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticField;
        class GeoMagneticElements;
      }
    }
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
            mid_calculateField_7b281ab1819631ec,
            mid_getDecimalYear_d692aeb156453fed,
            mid_getEpoch_9981f74b2d109da6,
            mid_getModelName_d2c8eb4129821f0e,
            mid_supportsTimeTransform_eee3de00fe971136,
            mid_transformModel_5fbf1330f033ba72,
            mid_transformModel_5b65d0d05bf28ecf,
            mid_validFrom_9981f74b2d109da6,
            mid_validTo_9981f74b2d109da6,
            mid_setMainFieldCoefficients_c65d45c928e07977,
            mid_setSecularVariationCoefficients_c65d45c928e07977,
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
