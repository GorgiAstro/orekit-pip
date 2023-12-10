#ifndef org_orekit_models_earth_troposphere_NiellMappingFunctionModel_H
#define org_orekit_models_earth_troposphere_NiellMappingFunctionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
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

          class NiellMappingFunctionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_6d73d536a2f24dd5,
              mid_mappingFactors_67294ed37389436d,
              mid_mappingFactors_6def5a87906f3de8,
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
