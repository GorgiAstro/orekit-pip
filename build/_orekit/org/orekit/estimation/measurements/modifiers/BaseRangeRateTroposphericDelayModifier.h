#ifndef org_orekit_estimation_measurements_modifiers_BaseRangeRateTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BaseRangeRateTroposphericDelayModifier_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class BaseRangeRateTroposphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_d751c1a57012b438,
              mid_rangeRateErrorTroposphericModel_29b53a0d2fc3b115,
              mid_rangeRateErrorTroposphericModel_e648598eaaa5f94d,
              mid_getTropoModel_793e0852d1c6d57c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseRangeRateTroposphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseRangeRateTroposphericDelayModifier(const BaseRangeRateTroposphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getParametersDrivers() const;
            jdouble rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(BaseRangeRateTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BaseRangeRateTroposphericDelayModifier);

          class t_BaseRangeRateTroposphericDelayModifier {
          public:
            PyObject_HEAD
            BaseRangeRateTroposphericDelayModifier object;
            static PyObject *wrap_Object(const BaseRangeRateTroposphericDelayModifier&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
