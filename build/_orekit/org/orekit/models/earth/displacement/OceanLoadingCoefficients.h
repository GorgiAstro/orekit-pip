#ifndef org_orekit_models_earth_displacement_OceanLoadingCoefficients_H
#define org_orekit_models_earth_displacement_OceanLoadingCoefficients_H

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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          class OceanLoadingCoefficients : public ::java::lang::Object {
           public:
            enum {
              mid_init$_07c801f17154fb71,
              mid_getNbSpecies_f2f64475e4580546,
              mid_getNbTides_38565d58479aa24a,
              mid_getSiteLocation_fabc97b1aefe5844,
              mid_getSiteName_0090f7797e403f43,
              mid_getSouthAmplitude_a84e4ee1da3f1ab8,
              mid_getSouthPhase_a84e4ee1da3f1ab8,
              mid_getTide_8d497e94d9aa86f9,
              mid_getWestAmplitude_a84e4ee1da3f1ab8,
              mid_getWestPhase_a84e4ee1da3f1ab8,
              mid_getZenithAmplitude_a84e4ee1da3f1ab8,
              mid_getZenithPhase_a84e4ee1da3f1ab8,
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
