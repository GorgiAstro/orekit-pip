#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTSolarRadiationPressure_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTSolarRadiationPressure_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class DSSTSolarRadiationPressure : public ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution {
             public:
              enum {
                mid_init$_67bf70f4c00ef897,
                mid_init$_4ea24182ae12d009,
                mid_init$_31d9b2733d5b0c58,
                mid_init$_2bd38fab3137bf0b,
                mid_getEquatorialRadius_dff5885c2c873297,
                mid_getSpacecraft_df6c7f3bc1979ce3,
                mid_getLLimits_04690aaa2b6db52c,
                mid_getLLimits_7442885516ff2293,
                mid_getParametersDriversWithoutMu_2afa36052df4765d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTSolarRadiationPressure(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTSolarRadiationPressure(const DSSTSolarRadiationPressure& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(obj) {}

              DSSTSolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::forces::radiation::RadiationSensitive &, jdouble);
              DSSTSolarRadiationPressure(jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
              DSSTSolarRadiationPressure(jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::forces::radiation::RadiationSensitive &, jdouble);
              DSSTSolarRadiationPressure(jdouble, jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

              jdouble getEquatorialRadius() const;
              ::org::orekit::forces::radiation::RadiationSensitive getSpacecraft() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(DSSTSolarRadiationPressure);
            extern PyTypeObject *PY_TYPE(DSSTSolarRadiationPressure);

            class t_DSSTSolarRadiationPressure {
            public:
              PyObject_HEAD
              DSSTSolarRadiationPressure object;
              static PyObject *wrap_Object(const DSSTSolarRadiationPressure&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
