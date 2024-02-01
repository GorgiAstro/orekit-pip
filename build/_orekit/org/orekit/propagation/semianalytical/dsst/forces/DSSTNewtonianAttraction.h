#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTNewtonianAttraction_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTNewtonianAttraction_H

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

            class DSSTNewtonianAttraction : public ::java::lang::Object {
             public:
              enum {
                mid_init$_1ad26e8c8c0cd65b,
                mid_getMeanElementRate_43ba9f5eaba95dbb,
                mid_getMeanElementRate_3eb9526d5d611f82,
                mid_getMu_209f08246d708042,
                mid_getParametersDrivers_d751c1a57012b438,
                mid_initializeShortPeriodTerms_1d563346dd4410fc,
                mid_initializeShortPeriodTerms_29410e2fe048cdd6,
                mid_registerAttitudeProvider_fddd0a7d9f33bafa,
                mid_updateShortPeriodTerms_61d4f27408b30d56,
                mid_updateShortPeriodTerms_49390f5c28b648db,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTNewtonianAttraction(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTNewtonianAttraction(const DSSTNewtonianAttraction& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *CENTRAL_ATTRACTION_COEFFICIENT;

              DSSTNewtonianAttraction(jdouble);

              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              jdouble getMu(const ::org::orekit::time::AbsoluteDate &) const;
              ::java::util::List getParametersDrivers() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTNewtonianAttraction);
            extern PyTypeObject *PY_TYPE(DSSTNewtonianAttraction);

            class t_DSSTNewtonianAttraction {
            public:
              PyObject_HEAD
              DSSTNewtonianAttraction object;
              static PyObject *wrap_Object(const DSSTNewtonianAttraction&);
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
