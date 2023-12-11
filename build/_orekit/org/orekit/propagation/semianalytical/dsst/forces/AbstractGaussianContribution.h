#ifndef org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContribution_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
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
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
                mid_getMeanElementRate_3573019cca22a7a6,
                mid_getMeanElementRate_6930c150caff50e0,
                mid_getParametersDrivers_0d9551367f7ecdef,
                mid_init_0472264ad6f40bc2,
                mid_init_811e49dad2467b67,
                mid_initializeShortPeriodTerms_57b295149dcd4abd,
                mid_initializeShortPeriodTerms_0791dbeb06a23554,
                mid_registerAttitudeProvider_8fa6c0c067ead7b2,
                mid_updateShortPeriodTerms_114c99ef73dfde56,
                mid_updateShortPeriodTerms_a9be3da5be85857d,
                mid_getMeanElementRate_dd9e811b89bb8dca,
                mid_getMeanElementRate_c9a5e53b1d67f4e0,
                mid_getLLimits_8babb6fb34d6b24d,
                mid_getLLimits_233f032b171b49d2,
                mid_getParametersDriversWithoutMu_0d9551367f7ecdef,
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

              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              ::java::util::List getParametersDrivers() const;
              void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
              void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
              ::java::util::List initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const ::org::orekit::propagation::PropagationType &, const JArray< jdouble > &) const;
              ::java::util::List initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const ::org::orekit::propagation::PropagationType &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              void registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
              void updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::orekit::propagation::FieldSpacecraftState > &) const;
              void updateShortPeriodTerms(const JArray< jdouble > &, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
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
