#ifndef org_orekit_models_earth_troposphere_MendesPavlisModel_H
#define org_orekit_models_earth_troposphere_MendesPavlisModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class MendesPavlisModel;
          class DiscreteTroposphericModel;
          class MappingFunction;
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

          class MendesPavlisModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_49f4b5153d696ea5,
              mid_computeZenithDelay_90983db312f6218b,
              mid_computeZenithDelay_0b467d379fb3f504,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getStandardModel_ec7740424c9ae069,
              mid_mappingFactors_6e118a7a5998051c,
              mid_mappingFactors_6dcded9cb7dee3c2,
              mid_pathDelay_2edbfa177156ee09,
              mid_pathDelay_6f66c6b7094d6f08,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MendesPavlisModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MendesPavlisModel(const MendesPavlisModel& obj) : ::java::lang::Object(obj) {}

            MendesPavlisModel(jdouble, jdouble, jdouble, jdouble);

            JArray< ::org::hipparchus::CalculusFieldElement > computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            JArray< jdouble > computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            ::java::util::List getParametersDrivers() const;
            static MendesPavlisModel getStandardModel(jdouble);
            JArray< ::org::hipparchus::CalculusFieldElement > mappingFactors(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            JArray< jdouble > mappingFactors(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(MendesPavlisModel);
          extern PyTypeObject *PY_TYPE(MendesPavlisModel);

          class t_MendesPavlisModel {
          public:
            PyObject_HEAD
            MendesPavlisModel object;
            static PyObject *wrap_Object(const MendesPavlisModel&);
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
