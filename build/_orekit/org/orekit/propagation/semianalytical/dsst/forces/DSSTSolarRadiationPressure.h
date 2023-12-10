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
                mid_init$_0051a626c6c8523b,
                mid_init$_3f2c3635f944dc47,
                mid_init$_4d9dda243b5d66bd,
                mid_init$_4e97cdcac87a62b7,
                mid_getEquatorialRadius_456d9a2f64d6b28d,
                mid_getSpacecraft_a0124c4a4e37e849,
                mid_getParametersDriversWithoutMu_a6156df500549a58,
                mid_getLLimits_4ece4b82b4394674,
                mid_getLLimits_f53f254b7878e0dd,
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
