#ifndef org_orekit_models_earth_troposphere_TimeSpanEstimatedTroposphericModel_H
#define org_orekit_models_earth_troposphere_TimeSpanEstimatedTroposphericModel_H

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
          class EstimatedTroposphericModel;
        }
      }
    }
    namespace utils {
      class TimeSpanMap$Span;
      class ParameterDriver;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
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

          class TimeSpanEstimatedTroposphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e4decacb2b1b0d4e,
              mid_init$_da6156174acb8778,
              mid_addTroposphericModelValidAfter_ad0495186ecc4e93,
              mid_addTroposphericModelValidBefore_ad0495186ecc4e93,
              mid_extractParameters_5417afc1212505b6,
              mid_extractParameters_afb90c8392ccc216,
              mid_getFirstSpan_5290b219f9ebfd63,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getTroposphericModel_b8fed425d07d8042,
              mid_pathDelay_6f66c6b7094d6f08,
              mid_pathDelay_2edbfa177156ee09,
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
