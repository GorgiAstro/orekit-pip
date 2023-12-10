#ifndef org_orekit_models_earth_troposphere_NiellMappingFunctionModel_H
#define org_orekit_models_earth_troposphere_NiellMappingFunctionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
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
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
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

          class NiellMappingFunctionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_e93d77ad761aa1f2,
              mid_mappingFactors_7ef12dc9276409e6,
              mid_mappingFactors_6f55c0ac27817ed2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NiellMappingFunctionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NiellMappingFunctionModel(const NiellMappingFunctionModel& obj) : ::java::lang::Object(obj) {}

            NiellMappingFunctionModel();
            NiellMappingFunctionModel(const ::org::orekit::time::TimeScale &);

            JArray< ::org::hipparchus::CalculusFieldElement > mappingFactors(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            JArray< jdouble > mappingFactors(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(NiellMappingFunctionModel);
          extern PyTypeObject *PY_TYPE(NiellMappingFunctionModel);

          class t_NiellMappingFunctionModel {
          public:
            PyObject_HEAD
            NiellMappingFunctionModel object;
            static PyObject *wrap_Object(const NiellMappingFunctionModel&);
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
