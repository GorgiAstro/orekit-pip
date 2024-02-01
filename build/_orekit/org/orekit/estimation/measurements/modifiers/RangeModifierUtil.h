#ifndef org_orekit_estimation_measurements_modifiers_RangeModifierUtil_H
#define org_orekit_estimation_measurements_modifiers_RangeModifierUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class GroundStation;
        class EstimatedMeasurement;
      }
    }
    namespace propagation {
      namespace integration {
        class AbstractGradientConverter;
      }
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

          class RangeModifierUtil : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeModifierUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeModifierUtil(const RangeModifierUtil& obj) : ::java::lang::Object(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(RangeModifierUtil);
          extern PyTypeObject *PY_TYPE(RangeModifierUtil);

          class t_RangeModifierUtil {
          public:
            PyObject_HEAD
            RangeModifierUtil object;
            static PyObject *wrap_Object(const RangeModifierUtil&);
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
