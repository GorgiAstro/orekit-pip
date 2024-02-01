#ifndef org_orekit_models_earth_EarthStandardAtmosphereRefraction_H
#define org_orekit_models_earth_EarthStandardAtmosphereRefraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
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

        class EarthStandardAtmosphereRefraction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_13edac039e8cc967,
            mid_getPressure_9981f74b2d109da6,
            mid_getRefraction_bf28ed64d6e8576b,
            mid_getTemperature_9981f74b2d109da6,
            mid_setPressure_1ad26e8c8c0cd65b,
            mid_setTemperature_1ad26e8c8c0cd65b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EarthStandardAtmosphereRefraction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EarthStandardAtmosphereRefraction(const EarthStandardAtmosphereRefraction& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_CORRECTION_FACTOR;
          static jdouble DEFAULT_PRESSURE;
          static jdouble DEFAULT_TEMPERATURE;
          static jdouble STANDARD_ATM_PRESSURE;
          static jdouble STANDARD_ATM_TEMPERATURE;

          EarthStandardAtmosphereRefraction();
          EarthStandardAtmosphereRefraction(jdouble, jdouble);

          jdouble getPressure() const;
          jdouble getRefraction(jdouble) const;
          jdouble getTemperature() const;
          void setPressure(jdouble) const;
          void setTemperature(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(EarthStandardAtmosphereRefraction);
        extern PyTypeObject *PY_TYPE(EarthStandardAtmosphereRefraction);

        class t_EarthStandardAtmosphereRefraction {
        public:
          PyObject_HEAD
          EarthStandardAtmosphereRefraction object;
          static PyObject *wrap_Object(const EarthStandardAtmosphereRefraction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
