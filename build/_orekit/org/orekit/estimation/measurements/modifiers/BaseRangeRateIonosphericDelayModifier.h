#ifndef org_orekit_estimation_measurements_modifiers_BaseRangeRateIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BaseRangeRateIonosphericDelayModifier_H

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
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class BaseRangeRateIonosphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_a6156df500549a58,
              mid_getIonoModel_a6521fb5ddb54669,
              mid_rangeRateErrorIonosphericModel_452a588415b00924,
              mid_rangeRateErrorIonosphericModel_79833a4daf329f8b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseRangeRateIonosphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseRangeRateIonosphericDelayModifier(const BaseRangeRateIonosphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(BaseRangeRateIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BaseRangeRateIonosphericDelayModifier);

          class t_BaseRangeRateIonosphericDelayModifier {
          public:
            PyObject_HEAD
            BaseRangeRateIonosphericDelayModifier object;
            static PyObject *wrap_Object(const BaseRangeRateIonosphericDelayModifier&);
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
