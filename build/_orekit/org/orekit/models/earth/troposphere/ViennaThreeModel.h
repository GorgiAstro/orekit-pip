#ifndef org_orekit_models_earth_troposphere_ViennaThreeModel_H
#define org_orekit_models_earth_troposphere_ViennaThreeModel_H

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
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class MappingFunction;
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

          class ViennaThreeModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ab4840ba016ef1da,
              mid_init$_efb1066fada7736f,
              mid_computeZenithDelay_fd96fda04d407b93,
              mid_computeZenithDelay_006dc50aa6e193b5,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_mappingFactors_e6ce6b157ff98280,
              mid_mappingFactors_964dc353437b5da2,
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pathDelay_129678f244f63094,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ViennaThreeModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ViennaThreeModel(const ViennaThreeModel& obj) : ::java::lang::Object(obj) {}

            ViennaThreeModel(const JArray< jdouble > &, const JArray< jdouble > &);
            ViennaThreeModel(const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::time::TimeScale &);

            JArray< jdouble > computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            ::java::util::List getParametersDrivers() const;
            JArray< ::org::hipparchus::CalculusFieldElement > mappingFactors(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            JArray< jdouble > mappingFactors(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(ViennaThreeModel);
          extern PyTypeObject *PY_TYPE(ViennaThreeModel);

          class t_ViennaThreeModel {
          public:
            PyObject_HEAD
            ViennaThreeModel object;
            static PyObject *wrap_Object(const ViennaThreeModel&);
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
