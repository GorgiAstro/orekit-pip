#ifndef org_orekit_models_earth_troposphere_EstimatedTroposphericModel_H
#define org_orekit_models_earth_troposphere_EstimatedTroposphericModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
              mid_init$_2a5646a2a563a1d9,
              mid_init$_a32781d12c3f2c37,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_pathDelay_6f66c6b7094d6f08,
              mid_pathDelay_2edbfa177156ee09,
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
