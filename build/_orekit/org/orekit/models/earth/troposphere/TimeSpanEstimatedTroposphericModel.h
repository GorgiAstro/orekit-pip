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
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap$Span;
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class EstimatedTroposphericModel;
        }
      }
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
              mid_init$_f96d1a03a603be44,
              mid_init$_73f1c37454d76b46,
              mid_addTroposphericModelValidAfter_476a18f671c64533,
              mid_addTroposphericModelValidBefore_476a18f671c64533,
              mid_extractParameters_2a4cb51cb18e4e8b,
              mid_extractParameters_32c7759b5aba450d,
              mid_getFirstSpan_2a24ed7b7f6cbca3,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getTroposphericModel_e45f8fce45533b23,
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pathDelay_129678f244f63094,
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
