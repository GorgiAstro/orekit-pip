#ifndef org_orekit_models_earth_troposphere_TimeSpanEstimatedTroposphericModel_H
#define org_orekit_models_earth_troposphere_TimeSpanEstimatedTroposphericModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class EstimatedTroposphericModel;
        }
      }
    }
    namespace utils {
      class TimeSpanMap$Span;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
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

          class TimeSpanEstimatedTroposphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_743dc20d16d022b9,
              mid_init$_4fab802330f7900b,
              mid_addTroposphericModelValidAfter_3839ebc9b842660e,
              mid_addTroposphericModelValidBefore_3839ebc9b842660e,
              mid_extractParameters_f6f6c8fcf1e496fb,
              mid_extractParameters_f4e70a6b1a1cf5f6,
              mid_getFirstSpan_ea49fa2ad441b95d,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getTroposphericModel_a520c157e580b96d,
              mid_pathDelay_3e863f8cc7cde633,
              mid_pathDelay_a07808bbc1ebff8d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TimeSpanEstimatedTroposphericModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TimeSpanEstimatedTroposphericModel(const TimeSpanEstimatedTroposphericModel& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *DATE_AFTER;
            static ::java::lang::String *DATE_BEFORE;

            TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel &);
            TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel &, const ::org::orekit::time::TimeScale &);

            void addTroposphericModelValidAfter(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel &, const ::org::orekit::time::AbsoluteDate &) const;
            void addTroposphericModelValidBefore(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel &, const ::org::orekit::time::AbsoluteDate &) const;
            JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            ::org::orekit::utils::TimeSpanMap$Span getFirstSpan() const;
            ::java::util::List getParametersDrivers() const;
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel getTroposphericModel(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(TimeSpanEstimatedTroposphericModel);
          extern PyTypeObject *PY_TYPE(TimeSpanEstimatedTroposphericModel);

          class t_TimeSpanEstimatedTroposphericModel {
          public:
            PyObject_HEAD
            TimeSpanEstimatedTroposphericModel object;
            static PyObject *wrap_Object(const TimeSpanEstimatedTroposphericModel&);
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
