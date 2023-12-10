#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBody_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBody_H

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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace bodies {
      class CelestialBody;
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

            class DSSTThirdBody : public ::java::lang::Object {
             public:
              enum {
                mid_init$_4cc66398d376fdad,
                mid_getBody_798caa59db6076aa,
                mid_getMeanElementRate_3b4b4fe187ad73ff,
                mid_getMeanElementRate_5265bce9e9da3506,
                mid_getParametersDrivers_a6156df500549a58,
                mid_initializeShortPeriodTerms_74f227e9e3e51225,
                mid_initializeShortPeriodTerms_46b1d1d9daf3396d,
                mid_registerAttitudeProvider_8109c1a27d4471d3,
                mid_updateShortPeriodTerms_8df221610d0cb785,
                mid_updateShortPeriodTerms_6839803ab3ef216d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTThirdBody(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTThirdBody(const DSSTThirdBody& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *ATTRACTION_COEFFICIENT;
              static jdouble BIG_TRUNCATION_TOLERANCE;
              static jint MAX_POWER;
              static ::java::lang::String *SHORT_PERIOD_PREFIX;
              static jdouble SMALL_TRUNCATION_TOLERANCE;

              DSSTThirdBody(const ::org::orekit::bodies::CelestialBody &, jdouble);

              ::org::orekit::bodies::CelestialBody getBody() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTThirdBody);
            extern PyTypeObject *PY_TYPE(DSSTThirdBody);

            class t_DSSTThirdBody {
            public:
              PyObject_HEAD
              DSSTThirdBody object;
              static PyObject *wrap_Object(const DSSTThirdBody&);
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
