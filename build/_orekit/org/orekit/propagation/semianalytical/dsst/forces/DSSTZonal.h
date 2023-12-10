#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTZonal_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTZonal_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class DSSTForceModel;
            class ShortPeriodTerms;
            class FieldShortPeriodTerms;
          }
          namespace utilities {
            class FieldAuxiliaryElements;
            class AuxiliaryElements;
          }
        }
      }
      class FieldSpacecraftState;
      class PropagationType;
      class SpacecraftState;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
    }
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
                mid_init$_a30010a3362089e6,
                mid_init$_c746a94bc718e759,
                mid_getMeanElementRate_c0df8831049775b0,
                mid_getMeanElementRate_5dbca2d049b16b82,
                mid_getParametersDrivers_2afa36052df4765d,
                mid_getProvider_137abdb234636c0e,
                mid_initializeShortPeriodTerms_cd6a8183d9477030,
                mid_initializeShortPeriodTerms_c7d75d32fd67f743,
                mid_registerAttitudeProvider_3cff7c75ea06698c,
                mid_updateShortPeriodTerms_120865f9c5cc3bda,
                mid_updateShortPeriodTerms_a9748e634dd1c969,
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

              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
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
