#ifndef org_orekit_models_earth_troposphere_PythonDiscreteTroposphericModel_H
#define org_orekit_models_earth_troposphere_PythonDiscreteTroposphericModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
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
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
        }
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getParameters_a53a7513ecedada2,
              mid_getParameters_4ab353685404cfce,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_pathDelay_129678f244f63094,
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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
