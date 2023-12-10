#ifndef org_orekit_models_earth_troposphere_SaastamoinenModel_H
#define org_orekit_models_earth_troposphere_SaastamoinenModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class SaastamoinenModel;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace utils {
      class ParameterDriver;
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

          class SaastamoinenModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d0d6094fbd7015c5,
              mid_init$_cfec5599e7a5e79d,
              mid_init$_90f6d74ff6e11b16,
              mid_getLowElevationThreshold_456d9a2f64d6b28d,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getStandardModel_f7dd8a663f4b9798,
              mid_pathDelay_0326270bf0e8ed17,
              mid_pathDelay_af133f80cdba1dc2,
              mid_setLowElevationThreshold_77e0f9a1f260e2e5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SaastamoinenModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SaastamoinenModel(const SaastamoinenModel& obj) : ::java::lang::Object(obj) {}

            static jdouble DEFAULT_LOW_ELEVATION_THRESHOLD;
            static ::java::lang::String *DELTA_R_FILE_NAME;

            SaastamoinenModel(jdouble, jdouble, jdouble);
            SaastamoinenModel(jdouble, jdouble, jdouble, const ::java::lang::String &);
            SaastamoinenModel(jdouble, jdouble, jdouble, const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);

            jdouble getLowElevationThreshold() const;
            ::java::util::List getParametersDrivers() const;
            static SaastamoinenModel getStandardModel();
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            jdouble pathDelay(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            void setLowElevationThreshold(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(SaastamoinenModel);
          extern PyTypeObject *PY_TYPE(SaastamoinenModel);

          class t_SaastamoinenModel {
          public:
            PyObject_HEAD
            SaastamoinenModel object;
            static PyObject *wrap_Object(const SaastamoinenModel&);
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
