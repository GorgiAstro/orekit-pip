#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBody_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBody_H

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
            class FieldShortPeriodTerms;
            class DSSTForceModel;
            class ShortPeriodTerms;
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
    namespace utils {
      class ParameterDriver;
    }
    namespace bodies {
      class CelestialBody;
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
                mid_init$_9fdcf330e0068bec,
                mid_getBody_5df52e80cbb5eb85,
                mid_getMeanElementRate_0483a0f94731abef,
                mid_getMeanElementRate_7d3eb19aa1e75a63,
                mid_getParametersDrivers_e62d3bb06d56d7e3,
                mid_initializeShortPeriodTerms_6fb0c582e8925f89,
                mid_initializeShortPeriodTerms_3144241334d46411,
                mid_registerAttitudeProvider_8e4d3ea100bc0095,
                mid_updateShortPeriodTerms_5401e749436ec3b7,
                mid_updateShortPeriodTerms_62f1ad39eb6f1276,
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
