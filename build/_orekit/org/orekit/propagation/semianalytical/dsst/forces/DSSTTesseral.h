#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseral_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseral_H

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
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace frames {
      class Frame;
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

            class DSSTTesseral : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f71606b50743134e,
                mid_init$_7954047194b7313f,
                mid_getMeanElementRate_43ba9f5eaba95dbb,
                mid_getMeanElementRate_3eb9526d5d611f82,
                mid_getParametersDrivers_d751c1a57012b438,
                mid_initializeShortPeriodTerms_1d563346dd4410fc,
                mid_initializeShortPeriodTerms_29410e2fe048cdd6,
                mid_registerAttitudeProvider_fddd0a7d9f33bafa,
                mid_updateShortPeriodTerms_49390f5c28b648db,
                mid_updateShortPeriodTerms_61d4f27408b30d56,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTTesseral(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTTesseral(const DSSTTesseral& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *CM_COEFFICIENTS;
              static ::java::lang::String *SHORT_PERIOD_PREFIX;
              static ::java::lang::String *SM_COEFFICIENTS;

              DSSTTesseral(const ::org::orekit::frames::Frame &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);
              DSSTTesseral(const ::org::orekit::frames::Frame &, jdouble, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, jint, jint, jint, jint, jint, jint, jint);

              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              ::java::util::List getParametersDrivers() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTTesseral);
            extern PyTypeObject *PY_TYPE(DSSTTesseral);

            class t_DSSTTesseral {
            public:
              PyObject_HEAD
              DSSTTesseral object;
              static PyObject *wrap_Object(const DSSTTesseral&);
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
