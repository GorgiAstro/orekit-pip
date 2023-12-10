#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTForceModel_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
            class FieldAuxiliaryElements;
          }
          namespace forces {
            class FieldShortPeriodTerms;
            class ShortPeriodTerms;
          }
        }
      }
      class SpacecraftState;
      class FieldSpacecraftState;
      class PropagationType;
      namespace events {
        class EventDetectorsProvider;
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
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

            class DSSTForceModel : public ::org::orekit::utils::ParameterDriversProvider {
             public:
              enum {
                mid_extractParameters_d7d552e275320f67,
                mid_extractParameters_8b177eb25e4eb468,
                mid_getEventDetectors_a68a17dd093f796d,
                mid_getFieldEventDetectors_1328ddb491531a35,
                mid_getMeanElementRate_3b4b4fe187ad73ff,
                mid_getMeanElementRate_5265bce9e9da3506,
                mid_init_3d13474d79f5e7bc,
                mid_init_acdd8180a5dc1a8d,
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

              explicit DSSTForceModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTForceModel(const DSSTForceModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

              JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
              ::java::util::stream::Stream getEventDetectors() const;
              ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTForceModel);
            extern PyTypeObject *PY_TYPE(DSSTForceModel);

            class t_DSSTForceModel {
            public:
              PyObject_HEAD
              DSSTForceModel object;
              static PyObject *wrap_Object(const DSSTForceModel&);
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
