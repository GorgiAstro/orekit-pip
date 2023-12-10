#ifndef org_orekit_estimation_measurements_modifiers_PhaseCentersRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_PhaseCentersRangeModifier_H

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
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class Range;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class PhaseCentersRangeModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_55b30db589ada038,
              mid_getParametersDrivers_a6156df500549a58,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseCentersRangeModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseCentersRangeModifier(const PhaseCentersRangeModifier& obj) : ::java::lang::Object(obj) {}

            PhaseCentersRangeModifier(const ::org::orekit::gnss::antenna::FrequencyPattern &, const ::org::orekit::gnss::antenna::FrequencyPattern &);

            ::java::util::List getParametersDrivers() const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
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
          extern PyType_Def PY_TYPE_DEF(PhaseCentersRangeModifier);
          extern PyTypeObject *PY_TYPE(PhaseCentersRangeModifier);

          class t_PhaseCentersRangeModifier {
          public:
            PyObject_HEAD
            PhaseCentersRangeModifier object;
            static PyObject *wrap_Object(const PhaseCentersRangeModifier&);
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