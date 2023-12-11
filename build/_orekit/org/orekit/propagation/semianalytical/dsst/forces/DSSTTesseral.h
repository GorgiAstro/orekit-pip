#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseral_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseral_H

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
    namespace frames {
      class Frame;
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

            class DSSTTesseral : public ::java::lang::Object {
             public:
              enum {
                mid_init$_de957d647fe18452,
                mid_init$_0d865b1336f1cfaa,
                mid_getMeanElementRate_3573019cca22a7a6,
                mid_getMeanElementRate_6930c150caff50e0,
                mid_getParametersDrivers_0d9551367f7ecdef,
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

              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
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
