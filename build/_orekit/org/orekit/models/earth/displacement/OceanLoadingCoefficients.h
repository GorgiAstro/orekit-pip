#ifndef org_orekit_models_earth_displacement_OceanLoadingCoefficients_H
#define org_orekit_models_earth_displacement_OceanLoadingCoefficients_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class Tide;
        }
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
        namespace displacement {

          class OceanLoadingCoefficients : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fcb650f5320a1b2a,
              mid_getNbSpecies_412668abc8d889e9,
              mid_getNbTides_0092017e99012694,
              mid_getSiteLocation_8672b163b0e4a5a3,
              mid_getSiteName_3cffd47377eca18a,
              mid_getSouthAmplitude_21b81d54c06b64b0,
              mid_getSouthPhase_21b81d54c06b64b0,
              mid_getTide_b069b3eff5d0d17f,
              mid_getWestAmplitude_21b81d54c06b64b0,
              mid_getWestPhase_21b81d54c06b64b0,
              mid_getZenithAmplitude_21b81d54c06b64b0,
              mid_getZenithPhase_21b81d54c06b64b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OceanLoadingCoefficients(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OceanLoadingCoefficients(const OceanLoadingCoefficients& obj) : ::java::lang::Object(obj) {}

            OceanLoadingCoefficients(const ::java::lang::String &, const ::org::orekit::bodies::GeodeticPoint &, const JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &);

            jint getNbSpecies() const;
            jint getNbTides(jint) const;
            ::org::orekit::bodies::GeodeticPoint getSiteLocation() const;
            ::java::lang::String getSiteName() const;
            jdouble getSouthAmplitude(jint, jint) const;
            jdouble getSouthPhase(jint, jint) const;
            ::org::orekit::models::earth::displacement::Tide getTide(jint, jint) const;
            jdouble getWestAmplitude(jint, jint) const;
            jdouble getWestPhase(jint, jint) const;
            jdouble getZenithAmplitude(jint, jint) const;
            jdouble getZenithPhase(jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          extern PyType_Def PY_TYPE_DEF(OceanLoadingCoefficients);
          extern PyTypeObject *PY_TYPE(OceanLoadingCoefficients);

          class t_OceanLoadingCoefficients {
          public:
            PyObject_HEAD
            OceanLoadingCoefficients object;
            static PyObject *wrap_Object(const OceanLoadingCoefficients&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
