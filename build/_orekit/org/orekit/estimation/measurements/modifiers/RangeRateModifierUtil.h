#ifndef org_orekit_estimation_measurements_modifiers_RangeRateModifierUtil_H
#define org_orekit_estimation_measurements_modifiers_RangeRateModifierUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
      }
    }
    namespace propagation {
      namespace integration {
        class AbstractGradientConverter;
      }
    }
    namespace utils {
      class ParameterDriversProvider;
    }
  }
}
namespace java {
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

          class RangeRateModifierUtil : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeRateModifierUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeRateModifierUtil(const RangeRateModifierUtil& obj) : ::java::lang::Object(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(RangeRateModifierUtil);
          extern PyTypeObject *PY_TYPE(RangeRateModifierUtil);

          class t_RangeRateModifierUtil {
          public:
            PyObject_HEAD
            RangeRateModifierUtil object;
            static PyObject *wrap_Object(const RangeRateModifierUtil&);
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
