#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseral_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseral_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class ShortPeriodTerms;
            class FieldShortPeriodTerms;
            class DSSTForceModel;
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
    namespace frames {
      class Frame;
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
                mid_init$_b7cabcdf5a365203,
                mid_init$_f1427e30b4ce583f,
                mid_getMeanElementRate_3b4b4fe187ad73ff,
                mid_getMeanElementRate_5265bce9e9da3506,
                mid_getParametersDrivers_a6156df500549a58,
                mid_initializeShortPeriodTerms_74f227e9e3e51225,
                mid_initializeShortPeriodTerms_46b1d1d9daf3396d,
                mid_registerAttitudeProvider_8109c1a27d4471d3,
                mid_updateShortPeriodTerms_6839803ab3ef216d,
                mid_updateShortPeriodTerms_8df221610d0cb785,
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
