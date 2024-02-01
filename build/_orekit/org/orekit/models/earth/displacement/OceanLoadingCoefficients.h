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
              mid_init$_ce7c5e10fb653720,
              mid_getNbSpecies_d6ab429752e7c267,
              mid_getNbTides_d938fc64e8c6df2d,
              mid_getSiteLocation_bdca252cae79438c,
              mid_getSiteName_d2c8eb4129821f0e,
              mid_getSouthAmplitude_6d920aab27f0a3d2,
              mid_getSouthPhase_6d920aab27f0a3d2,
              mid_getTide_e8d164c6a78ece0c,
              mid_getWestAmplitude_6d920aab27f0a3d2,
              mid_getWestPhase_6d920aab27f0a3d2,
              mid_getZenithAmplitude_6d920aab27f0a3d2,
              mid_getZenithPhase_6d920aab27f0a3d2,
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
