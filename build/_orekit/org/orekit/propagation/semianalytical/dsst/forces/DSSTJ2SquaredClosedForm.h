#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTJ2SquaredClosedForm_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTJ2SquaredClosedForm_H

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
            class J2SquaredModel;
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

            class DSSTJ2SquaredClosedForm : public ::java::lang::Object {
             public:
              enum {
                mid_init$_755ae497b8af3c9a,
                mid_getMeanElementRate_3eb9526d5d611f82,
                mid_getMeanElementRate_43ba9f5eaba95dbb,
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

              explicit DSSTJ2SquaredClosedForm(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTJ2SquaredClosedForm(const DSSTJ2SquaredClosedForm& obj) : ::java::lang::Object(obj) {}

              DSSTJ2SquaredClosedForm(const ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);

              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTJ2SquaredClosedForm);
            extern PyTypeObject *PY_TYPE(DSSTJ2SquaredClosedForm);

            class t_DSSTJ2SquaredClosedForm {
            public:
              PyObject_HEAD
              DSSTJ2SquaredClosedForm object;
              static PyObject *wrap_Object(const DSSTJ2SquaredClosedForm&);
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
