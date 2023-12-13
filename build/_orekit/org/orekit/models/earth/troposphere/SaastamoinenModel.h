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
          class DiscreteTroposphericModel;
          class SaastamoinenModel;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          class SaastamoinenModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b5167f35b2521627,
              mid_init$_86e04e54e74f419a,
              mid_init$_b722bf633ce1eb32,
              mid_getLowElevationThreshold_b74f83833fdad017,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getStandardModel_21d2c53891518209,
              mid_pathDelay_6f66c6b7094d6f08,
              mid_pathDelay_2edbfa177156ee09,
              mid_setLowElevationThreshold_8ba9fe7a847cecad,
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
