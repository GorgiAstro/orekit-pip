#ifndef org_orekit_estimation_measurements_modifiers_BaseRangeIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BaseRangeIonosphericDelayModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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

          class BaseRangeIonosphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_2afa36052df4765d,
              mid_rangeErrorIonosphericModel_03cd5a2e88a0f0f6,
              mid_rangeErrorIonosphericModel_08d2a35aee39232b,
              mid_getIonoModel_f6314816f66aaed0,
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
