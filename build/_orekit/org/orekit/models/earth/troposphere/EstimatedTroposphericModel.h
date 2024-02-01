#ifndef org_orekit_models_earth_troposphere_EstimatedTroposphericModel_H
#define org_orekit_models_earth_troposphere_EstimatedTroposphericModel_H

#include "java/lang/Object.h"

namespace org {
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
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
              mid_init$_a7f59bfe7a238aee,
              mid_init$_fdcce5b00626d169,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pathDelay_3e863f8cc7cde633,
              mid_pathDelay_a07808bbc1ebff8d,
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
