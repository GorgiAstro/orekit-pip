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
                mid_init$_c2d149dbf242a70a,
                mid_init$_469b9d23c5967fa5,
                mid_init$_930c2f779352a514,
                mid_init$_14afa2a4075b1e1e,
                mid_getEquatorialRadius_b74f83833fdad017,
                mid_getSpacecraft_6c4eac88f18322d9,
                mid_getLLimits_9b6fd6b3a2b07f62,
                mid_getLLimits_1abf2eee80dffc68,
                mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3,
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
