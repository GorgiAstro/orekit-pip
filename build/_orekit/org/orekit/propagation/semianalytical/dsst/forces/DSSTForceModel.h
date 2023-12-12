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
      class FieldSpacecraftState;
      namespace events {
        class EventDetectorsProvider;
        class FieldEventDetector;
        class EventDetector;
      }
      class PropagationType;
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
                mid_extractParameters_2a4cb51cb18e4e8b,
                mid_extractParameters_32c7759b5aba450d,
                mid_getEventDetectors_d7cce92225eb0db2,
                mid_getFieldEventDetectors_8130af76f6998f44,
                mid_getMeanElementRate_3573019cca22a7a6,
                mid_getMeanElementRate_6930c150caff50e0,
                mid_init_0472264ad6f40bc2,
                mid_init_811e49dad2467b67,
                mid_initializeShortPeriodTerms_57b295149dcd4abd,
                mid_initializeShortPeriodTerms_0791dbeb06a23554,
                mid_registerAttitudeProvider_8fa6c0c067ead7b2,
                mid_updateShortPeriodTerms_114c99ef73dfde56,
                mid_updateShortPeriodTerms_a9be3da5be85857d,
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
