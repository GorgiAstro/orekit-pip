#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTZonal_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTZonal_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
            class FieldAuxiliaryElements;
          }
          namespace forces {
            class FieldShortPeriodTerms;
            class ShortPeriodTerms;
            class DSSTForceModel;
          }
        }
      }
      class SpacecraftState;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class DSSTZonal : public ::java::lang::Object {
             public:
              enum {
                mid_init$_824898e59eddfa6c,
                mid_init$_78ed1711d05b4189,
                mid_getMeanElementRate_6930c150caff50e0,
                mid_getMeanElementRate_3573019cca22a7a6,
                mid_getParametersDrivers_0d9551367f7ecdef,
                mid_getProvider_72fe1f11b4245c25,
                mid_initializeShortPeriodTerms_57b295149dcd4abd,
                mid_initializeShortPeriodTerms_0791dbeb06a23554,
                mid_registerAttitudeProvider_8fa6c0c067ead7b2,
                mid_updateShortPeriodTerms_a9be3da5be85857d,
                mid_updateShortPeriodTerms_114c99ef73dfde56,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTZonal(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTZonal(const DSSTZonal& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *SHORT_PERIOD_PREFIX;

              DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
              DSSTZonal(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jint, jint, jint);

              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              ::java::util::List getParametersDrivers() const;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider getProvider() const;
              ::java::util::List initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const ::org::orekit::propagation::PropagationType &, const JArray< jdouble > &) const;
              ::java::util::List initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const ::org::orekit::propagation::PropagationType &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              void registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
              void updateShortPeriodTerms(const JArray< jdouble > &, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
              void updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::orekit::propagation::FieldSpacecraftState > &) const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTZonal);
            extern PyTypeObject *PY_TYPE(DSSTZonal);

            class t_DSSTZonal {
            public:
              PyObject_HEAD
              DSSTZonal object;
              static PyObject *wrap_Object(const DSSTZonal&);
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
