#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTSolarRadiationPressure_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTSolarRadiationPressure_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
                mid_init$_14a378572b7eca58,
                mid_init$_84dee32dce7f9fa5,
                mid_init$_9858768d9a9d55aa,
                mid_init$_6e5ce588856634e5,
                mid_getEquatorialRadius_557b8123390d8d0c,
                mid_getSpacecraft_6d06026db8c77c35,
                mid_getLLimits_8babb6fb34d6b24d,
                mid_getLLimits_233f032b171b49d2,
                mid_getParametersDriversWithoutMu_0d9551367f7ecdef,
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
