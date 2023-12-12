#ifndef org_orekit_models_earth_troposphere_DiscreteTroposphericModel_H
#define org_orekit_models_earth_troposphere_DiscreteTroposphericModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
    namespace models {
      namespace earth {
        namespace troposphere {

          class DiscreteTroposphericModel : public ::org::orekit::utils::ParameterDriversProvider {
           public:
            enum {
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pathDelay_129678f244f63094,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiscreteTroposphericModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiscreteTroposphericModel(const DiscreteTroposphericModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            jdouble pathDelay(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          extern PyType_Def PY_TYPE_DEF(DiscreteTroposphericModel);
          extern PyTypeObject *PY_TYPE(DiscreteTroposphericModel);

          class t_DiscreteTroposphericModel {
          public:
            PyObject_HEAD
            DiscreteTroposphericModel object;
            static PyObject *wrap_Object(const DiscreteTroposphericModel&);
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
