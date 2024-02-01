#ifndef org_orekit_models_earth_troposphere_MendesPavlisModel_H
#define org_orekit_models_earth_troposphere_MendesPavlisModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class MendesPavlisModel;
          class MappingFunction;
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
              mid_init$_cd5724127cc72e96,
              mid_computeZenithDelay_cf38abfd6de73cb1,
              mid_computeZenithDelay_2a8a1978d107f938,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getStandardModel_d372e21d3f28e181,
              mid_mappingFactors_7d2717f150c68a9f,
              mid_mappingFactors_090b631fda469acd,
              mid_pathDelay_3e863f8cc7cde633,
              mid_pathDelay_a07808bbc1ebff8d,
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

            JArray< jdouble > computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            ::java::util::List getParametersDrivers() const;
            static MendesPavlisModel getStandardModel(jdouble);
            JArray< jdouble > mappingFactors(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > mappingFactors(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
