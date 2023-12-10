#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTForceModel_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTForceModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
            class AuxiliaryElements;
          }
          namespace forces {
            class FieldShortPeriodTerms;
            class ShortPeriodTerms;
          }
        }
      }
      class SpacecraftState;
      namespace events {
        class FieldEventDetector;
        class EventDetector;
        class EventDetectorsProvider;
      }
      class PropagationType;
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
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
                mid_extractParameters_020d17bb8c285475,
                mid_extractParameters_547c908eaeea187e,
                mid_getEventDetectors_20f6d2b462aaef4b,
                mid_getFieldEventDetectors_361313cd1a9c693a,
                mid_getMeanElementRate_c0df8831049775b0,
                mid_getMeanElementRate_5dbca2d049b16b82,
                mid_init_826b4eda94da4e78,
                mid_init_8e8de2be1664674a,
                mid_initializeShortPeriodTerms_cd6a8183d9477030,
                mid_initializeShortPeriodTerms_c7d75d32fd67f743,
                mid_registerAttitudeProvider_3cff7c75ea06698c,
                mid_updateShortPeriodTerms_a9748e634dd1c969,
                mid_updateShortPeriodTerms_120865f9c5cc3bda,
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
              void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
              void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
