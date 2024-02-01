#ifndef org_orekit_models_earth_troposphere_PythonDiscreteTroposphericModel_H
#define org_orekit_models_earth_troposphere_PythonDiscreteTroposphericModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
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
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          class PythonDiscreteTroposphericModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getParameters_be783177b060994b,
              mid_getParameters_84f929c42eeec397,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pathDelay_a07808bbc1ebff8d,
              mid_pathDelay_3e863f8cc7cde633,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonDiscreteTroposphericModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonDiscreteTroposphericModel(const PythonDiscreteTroposphericModel& obj) : ::java::lang::Object(obj) {}

            PythonDiscreteTroposphericModel();

            void finalize() const;
            JArray< jdouble > getParameters() const;
            JArray< ::org::hipparchus::CalculusFieldElement > getParameters(const ::org::hipparchus::Field &) const;
            ::java::util::List getParametersDrivers() const;
            jdouble pathDelay(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonDiscreteTroposphericModel);
          extern PyTypeObject *PY_TYPE(PythonDiscreteTroposphericModel);

          class t_PythonDiscreteTroposphericModel {
          public:
            PyObject_HEAD
            PythonDiscreteTroposphericModel object;
            static PyObject *wrap_Object(const PythonDiscreteTroposphericModel&);
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
