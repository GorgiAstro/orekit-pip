#ifndef org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContribution_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
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
      class PropagationType;
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class AbstractGaussianContribution : public ::java::lang::Object {
             public:
              enum {
                mid_getMeanElementRate_43ba9f5eaba95dbb,
                mid_getMeanElementRate_3eb9526d5d611f82,
                mid_getParametersDrivers_d751c1a57012b438,
                mid_init_14deaae988292d42,
                mid_init_357211ab77703f3f,
                mid_initializeShortPeriodTerms_1d563346dd4410fc,
                mid_initializeShortPeriodTerms_29410e2fe048cdd6,
                mid_registerAttitudeProvider_fddd0a7d9f33bafa,
                mid_updateShortPeriodTerms_49390f5c28b648db,
                mid_updateShortPeriodTerms_61d4f27408b30d56,
                mid_getMeanElementRate_58a6b06e250dffee,
                mid_getMeanElementRate_4f8f8474d6a9a1ae,
                mid_getLLimits_15451c899b8436e1,
                mid_getLLimits_5bf18b5e9ec57652,
                mid_getParametersDriversWithoutMu_d751c1a57012b438,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractGaussianContribution(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractGaussianContribution(const AbstractGaussianContribution& obj) : ::java::lang::Object(obj) {}

              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              ::java::util::List getParametersDrivers() const;
              void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
              void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractGaussianContribution);
            extern PyTypeObject *PY_TYPE(AbstractGaussianContribution);

            class t_AbstractGaussianContribution {
            public:
              PyObject_HEAD
              AbstractGaussianContribution object;
              static PyObject *wrap_Object(const AbstractGaussianContribution&);
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
