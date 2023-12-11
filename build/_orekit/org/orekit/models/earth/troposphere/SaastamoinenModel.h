#ifndef org_orekit_models_earth_troposphere_SaastamoinenModel_H
#define org_orekit_models_earth_troposphere_SaastamoinenModel_H

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
          class SaastamoinenModel;
          class DiscreteTroposphericModel;
        }
      }
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace data {
      class DataProvidersManager;
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

          class SaastamoinenModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_87096e3fd8086100,
              mid_init$_cd0a6cb6bf2555a1,
              mid_init$_6715d5a727bb2ee9,
              mid_getLowElevationThreshold_557b8123390d8d0c,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getStandardModel_f1fd9d673b2eb4b0,
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pathDelay_129678f244f63094,
              mid_setLowElevationThreshold_10f281d777284cea,
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
