#ifndef org_orekit_models_earth_troposphere_MendesPavlisModel_H
#define org_orekit_models_earth_troposphere_MendesPavlisModel_H

#include "java/lang/Object.h"

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
              mid_init$_bc3712e794ac7a81,
              mid_computeZenithDelay_fd96fda04d407b93,
              mid_computeZenithDelay_006dc50aa6e193b5,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getStandardModel_8facfaf27f8256a8,
              mid_mappingFactors_964dc353437b5da2,
              mid_mappingFactors_e6ce6b157ff98280,
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pathDelay_129678f244f63094,
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
