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
    namespace time {
      class TimeScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap$Span;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
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
              mid_init$_c6fb7ef4a979e235,
              mid_init$_f8b676ef258f695c,
              mid_addTroposphericModelValidAfter_7c58a07aee9727ab,
              mid_addTroposphericModelValidBefore_7c58a07aee9727ab,
              mid_extractParameters_d7d552e275320f67,
              mid_extractParameters_8b177eb25e4eb468,
              mid_getFirstSpan_39a1e35b17737f60,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getTroposphericModel_56bce35cef2cb913,
              mid_pathDelay_af133f80cdba1dc2,
              mid_pathDelay_0326270bf0e8ed17,
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
            jdouble pathDelay(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
