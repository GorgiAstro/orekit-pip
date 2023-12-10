#ifndef org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContribution_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class ShortPeriodTerms;
            class DSSTForceModel;
            class FieldShortPeriodTerms;
          }
          namespace utilities {
            class AuxiliaryElements;
            class FieldAuxiliaryElements;
          }
        }
      }
      class SpacecraftState;
      class PropagationType;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
                mid_getMeanElementRate_3b4b4fe187ad73ff,
                mid_getMeanElementRate_5265bce9e9da3506,
                mid_getParametersDrivers_a6156df500549a58,
                mid_init_3d13474d79f5e7bc,
                mid_init_acdd8180a5dc1a8d,
                mid_initializeShortPeriodTerms_74f227e9e3e51225,
                mid_initializeShortPeriodTerms_46b1d1d9daf3396d,
                mid_registerAttitudeProvider_8109c1a27d4471d3,
                mid_updateShortPeriodTerms_8df221610d0cb785,
                mid_updateShortPeriodTerms_6839803ab3ef216d,
                mid_getParametersDriversWithoutMu_a6156df500549a58,
                mid_getMeanElementRate_cb33129d37cbb389,
                mid_getMeanElementRate_df7b7b29e2f03d3a,
                mid_getLLimits_4ece4b82b4394674,
                mid_getLLimits_f53f254b7878e0dd,
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
