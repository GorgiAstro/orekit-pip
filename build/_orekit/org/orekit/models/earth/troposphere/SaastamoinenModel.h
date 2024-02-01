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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace data {
      class DataProvidersManager;
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

          class SaastamoinenModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bd28dc6055dc5bbd,
              mid_init$_85660574e101bd4c,
              mid_init$_765ec9631049e580,
              mid_getLowElevationThreshold_9981f74b2d109da6,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getStandardModel_0733d9cbb2354c47,
              mid_pathDelay_3e863f8cc7cde633,
              mid_pathDelay_a07808bbc1ebff8d,
              mid_setLowElevationThreshold_1ad26e8c8c0cd65b,
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
