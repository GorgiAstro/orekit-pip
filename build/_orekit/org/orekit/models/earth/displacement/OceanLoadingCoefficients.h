#ifndef org_orekit_models_earth_displacement_OceanLoadingCoefficients_H
#define org_orekit_models_earth_displacement_OceanLoadingCoefficients_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          class Tide;
        }
      }
    }
    namespace bodies {
      class GeodeticPoint;
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
              mid_init$_45ecc5fe392d73ba,
              mid_getNbSpecies_55546ef6a647f39b,
              mid_getNbTides_0e7cf35192c3effe,
              mid_getSiteLocation_963915d358b1e63a,
              mid_getSiteName_1c1fa1e935d6cdcf,
              mid_getSouthAmplitude_cad98089d00f8a5b,
              mid_getSouthPhase_cad98089d00f8a5b,
              mid_getTide_eae842591bb4ca23,
              mid_getWestAmplitude_cad98089d00f8a5b,
              mid_getWestPhase_cad98089d00f8a5b,
              mid_getZenithAmplitude_cad98089d00f8a5b,
              mid_getZenithPhase_cad98089d00f8a5b,
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
