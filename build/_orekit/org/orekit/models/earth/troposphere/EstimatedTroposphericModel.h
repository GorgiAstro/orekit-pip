#ifndef org_orekit_models_earth_troposphere_EstimatedTroposphericModel_H
#define org_orekit_models_earth_troposphere_EstimatedTroposphericModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class MappingFunction;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          class EstimatedTroposphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_73d05fd29ef2005b,
              mid_init$_63fe71cad1f79f0a,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_pathDelay_ff7a895eb6f0af2e,
              mid_pathDelay_fe3b5c46874ab115,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EstimatedTroposphericModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EstimatedTroposphericModel(const EstimatedTroposphericModel& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *TOTAL_ZENITH_DELAY;

            EstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::MappingFunction &, jdouble);
            EstimatedTroposphericModel(jdouble, jdouble, const ::org::orekit::models::earth::troposphere::MappingFunction &, jdouble);

            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(EstimatedTroposphericModel);
          extern PyTypeObject *PY_TYPE(EstimatedTroposphericModel);

          class t_EstimatedTroposphericModel {
          public:
            PyObject_HEAD
            EstimatedTroposphericModel object;
            static PyObject *wrap_Object(const EstimatedTroposphericModel&);
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
