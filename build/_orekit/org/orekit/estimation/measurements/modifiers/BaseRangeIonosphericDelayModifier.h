#ifndef org_orekit_estimation_measurements_modifiers_BaseRangeIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BaseRangeIonosphericDelayModifier_H

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

          class BaseRangeIonosphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_d751c1a57012b438,
              mid_rangeErrorIonosphericModel_e648598eaaa5f94d,
              mid_rangeErrorIonosphericModel_29b53a0d2fc3b115,
              mid_getIonoModel_f3204fe1fff3f0ac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseRangeIonosphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseRangeIonosphericDelayModifier(const BaseRangeIonosphericDelayModifier& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(BaseRangeIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BaseRangeIonosphericDelayModifier);

          class t_BaseRangeIonosphericDelayModifier {
          public:
            PyObject_HEAD
            BaseRangeIonosphericDelayModifier object;
            static PyObject *wrap_Object(const BaseRangeIonosphericDelayModifier&);
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
