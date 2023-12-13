#ifndef org_orekit_models_earth_troposphere_GlobalMappingFunctionModel_H
#define org_orekit_models_earth_troposphere_GlobalMappingFunctionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_cae5d0c3721eff67,
              mid_mappingFactors_6dcded9cb7dee3c2,
              mid_mappingFactors_6e118a7a5998051c,
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
