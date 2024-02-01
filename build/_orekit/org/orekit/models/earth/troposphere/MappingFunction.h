#ifndef org_orekit_models_earth_troposphere_MappingFunction_H
#define org_orekit_models_earth_troposphere_MappingFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
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

          class MappingFunction : public ::java::lang::Object {
           public:
            enum {
              mid_mappingFactors_090b631fda469acd,
              mid_mappingFactors_7d2717f150c68a9f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MappingFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MappingFunction(const MappingFunction& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(MappingFunction);
          extern PyTypeObject *PY_TYPE(MappingFunction);

          class t_MappingFunction {
          public:
            PyObject_HEAD
            MappingFunction object;
            static PyObject *wrap_Object(const MappingFunction&);
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
