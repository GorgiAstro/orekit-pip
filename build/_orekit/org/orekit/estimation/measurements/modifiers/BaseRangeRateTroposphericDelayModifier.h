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
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
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
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_rangeRateErrorTroposphericModel_b8971448fff75978,
              mid_rangeRateErrorTroposphericModel_9a2cbda6eb51ddd8,
              mid_getTropoModel_3c029eb579d11318,
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
