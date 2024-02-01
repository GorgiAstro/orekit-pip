#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTSolarRadiationPressure_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTSolarRadiationPressure_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
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
                mid_init$_fedac73c650c8906,
                mid_init$_84f1dc809037d397,
                mid_init$_02072059e9d75829,
                mid_init$_9f13a4da6fee365a,
                mid_getEquatorialRadius_9981f74b2d109da6,
                mid_getSpacecraft_3dd1229abd19b8f5,
                mid_getLLimits_5bf18b5e9ec57652,
                mid_getLLimits_15451c899b8436e1,
                mid_getParametersDriversWithoutMu_d751c1a57012b438,
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
