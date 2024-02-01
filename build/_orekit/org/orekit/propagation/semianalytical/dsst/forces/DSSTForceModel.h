#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTForceModel_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

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
namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
            class AuxiliaryElements;
          }
          namespace forces {
            class ShortPeriodTerms;
            class FieldShortPeriodTerms;
          }
        }
      }
      namespace events {
        class EventDetector;
        class EventDetectorsProvider;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
      class PropagationType;
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
    class Field;
    class CalculusFieldElement;
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
                mid_extractParameters_f6f6c8fcf1e496fb,
                mid_extractParameters_f4e70a6b1a1cf5f6,
                mid_getEventDetectors_11e4ca8182c1933d,
                mid_getFieldEventDetectors_d3db121d9deb0312,
                mid_getMeanElementRate_3eb9526d5d611f82,
                mid_getMeanElementRate_43ba9f5eaba95dbb,
                mid_init_357211ab77703f3f,
                mid_init_14deaae988292d42,
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

              explicit DSSTForceModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTForceModel(const DSSTForceModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

              JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
              ::java::util::stream::Stream getEventDetectors() const;
              ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              JArray< jdouble > getMeanElementRate(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &) const;
              void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
              void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
