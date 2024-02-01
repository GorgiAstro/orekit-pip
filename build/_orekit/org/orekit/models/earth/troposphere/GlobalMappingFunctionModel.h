#ifndef org_orekit_models_earth_troposphere_GlobalMappingFunctionModel_H
#define org_orekit_models_earth_troposphere_GlobalMappingFunctionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class MappingFunction;
        }
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
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

          class GlobalMappingFunctionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_7cb2659f4799e4d2,
              mid_mappingFactors_7d2717f150c68a9f,
              mid_mappingFactors_090b631fda469acd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GlobalMappingFunctionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GlobalMappingFunctionModel(const GlobalMappingFunctionModel& obj) : ::java::lang::Object(obj) {}

            GlobalMappingFunctionModel();
            GlobalMappingFunctionModel(const ::org::orekit::time::TimeScale &);

            JArray< jdouble > mappingFactors(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > mappingFactors(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(GlobalMappingFunctionModel);
          extern PyTypeObject *PY_TYPE(GlobalMappingFunctionModel);

          class t_GlobalMappingFunctionModel {
          public:
            PyObject_HEAD
            GlobalMappingFunctionModel object;
            static PyObject *wrap_Object(const GlobalMappingFunctionModel&);
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
