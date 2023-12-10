#ifndef org_orekit_models_earth_GeoMagneticField_H
#define org_orekit_models_earth_GeoMagneticField_H

#include "java/lang/Object.h"

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
            mid_calculateField_d538f957ac125f99,
            mid_getDecimalYear_17d75a1004cd0f67,
            mid_getEpoch_456d9a2f64d6b28d,
            mid_getModelName_0090f7797e403f43,
            mid_supportsTimeTransform_e470b6d9e0d979db,
            mid_transformModel_e74dfaa8c09512d5,
            mid_transformModel_6cf562e5f28b4989,
            mid_validFrom_456d9a2f64d6b28d,
            mid_validTo_456d9a2f64d6b28d,
            mid_setMainFieldCoefficients_864f173bba930896,
            mid_setSecularVariationCoefficients_864f173bba930896,
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
