#ifndef org_orekit_models_earth_troposphere_SaastamoinenModel_H
#define org_orekit_models_earth_troposphere_SaastamoinenModel_H

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
          class SaastamoinenModel;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
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

          class SaastamoinenModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2c56b6dd4d4b1dec,
              mid_init$_67f6ec33b4d0bffd,
              mid_init$_08597647738b99f8,
              mid_getLowElevationThreshold_dff5885c2c873297,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getStandardModel_7e2e0f949f78c931,
              mid_pathDelay_ff7a895eb6f0af2e,
              mid_pathDelay_fe3b5c46874ab115,
              mid_setLowElevationThreshold_17db3a65980d3441,
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
