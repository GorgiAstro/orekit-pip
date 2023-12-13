#ifndef org_orekit_models_earth_troposphere_TroposphericModelUtils_H
#define org_orekit_models_earth_troposphere_TroposphericModelUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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

          class TroposphericModelUtils : public ::java::lang::Object {
           public:
            enum {
              mid_computeHeightCorrection_99e3200dafc19573,
              mid_computeHeightCorrection_3d637a35454b0975,
              mid_mappingFunction_08eba2463884b341,
              mid_mappingFunction_0a337cffdfb74cd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TroposphericModelUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TroposphericModelUtils(const TroposphericModelUtils& obj) : ::java::lang::Object(obj) {}

            static jdouble computeHeightCorrection(jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement computeHeightCorrection(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::Field &);
            static jdouble mappingFunction(jdouble, jdouble, jdouble, jdouble);
            static ::org::hipparchus::CalculusFieldElement mappingFunction(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
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
          extern PyType_Def PY_TYPE_DEF(TroposphericModelUtils);
          extern PyTypeObject *PY_TYPE(TroposphericModelUtils);

          class t_TroposphericModelUtils {
          public:
            PyObject_HEAD
            TroposphericModelUtils object;
            static PyObject *wrap_Object(const TroposphericModelUtils&);
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
