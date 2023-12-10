#ifndef org_orekit_models_earth_troposphere_TimeSpanEstimatedTroposphericModel_H
#define org_orekit_models_earth_troposphere_TimeSpanEstimatedTroposphericModel_H

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
          class EstimatedTroposphericModel;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace utils {
      class TimeSpanMap$Span;
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

          class TimeSpanEstimatedTroposphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_51e24b7792379eec,
              mid_init$_0117665e923ce303,
              mid_addTroposphericModelValidAfter_a5a1634f5bfcf1ab,
              mid_addTroposphericModelValidBefore_a5a1634f5bfcf1ab,
              mid_extractParameters_020d17bb8c285475,
              mid_extractParameters_547c908eaeea187e,
              mid_getFirstSpan_971209c2bf2033e7,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getTroposphericModel_2e0f060ffdeb7f2a,
              mid_pathDelay_ff7a895eb6f0af2e,
              mid_pathDelay_fe3b5c46874ab115,
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
