#ifndef org_orekit_estimation_measurements_modifiers_BaseRangeTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BaseRangeTroposphericDelayModifier_H

#include "java/lang/Object.h"

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
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class BaseRangeTroposphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_2afa36052df4765d,
              mid_rangeErrorTroposphericModel_08d2a35aee39232b,
              mid_rangeErrorTroposphericModel_03cd5a2e88a0f0f6,
              mid_getTropoModel_4b77a751a52d683d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseRangeTroposphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseRangeTroposphericDelayModifier(const BaseRangeTroposphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getParametersDrivers() const;
            jdouble rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
          extern PyType_Def PY_TYPE_DEF(BaseRangeTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BaseRangeTroposphericDelayModifier);

          class t_BaseRangeTroposphericDelayModifier {
          public:
            PyObject_HEAD
            BaseRangeTroposphericDelayModifier object;
            static PyObject *wrap_Object(const BaseRangeTroposphericDelayModifier&);
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
