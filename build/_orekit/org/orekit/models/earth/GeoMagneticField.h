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
            mid_calculateField_54d6c2ca75c55cb8,
            mid_getDecimalYear_2f53baea9459d443,
            mid_getEpoch_b74f83833fdad017,
            mid_getModelName_1c1fa1e935d6cdcf,
            mid_supportsTimeTransform_9ab94ac1dc23b105,
            mid_transformModel_0b71ae56f8fa5718,
            mid_transformModel_e0a954d9b53a7db9,
            mid_validFrom_b74f83833fdad017,
            mid_validTo_b74f83833fdad017,
            mid_setMainFieldCoefficients_97e33498326f7285,
            mid_setSecularVariationCoefficients_97e33498326f7285,
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
