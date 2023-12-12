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
            mid_calculateField_115cc5c8f9d6f38b,
            mid_getDecimalYear_093995dc5657c18c,
            mid_getEpoch_557b8123390d8d0c,
            mid_getModelName_3cffd47377eca18a,
            mid_supportsTimeTransform_89b302893bdbe1f1,
            mid_transformModel_7100d3672aa999e4,
            mid_transformModel_64649f752fe0c2a3,
            mid_validFrom_557b8123390d8d0c,
            mid_validTo_557b8123390d8d0c,
            mid_setMainFieldCoefficients_8f08153945634de4,
            mid_setSecularVariationCoefficients_8f08153945634de4,
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
