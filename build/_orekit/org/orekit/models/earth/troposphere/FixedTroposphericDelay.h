#ifndef org_orekit_models_earth_troposphere_FixedTroposphericDelay_H
#define org_orekit_models_earth_troposphere_FixedTroposphericDelay_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
          class FixedTroposphericDelay;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
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

          class FixedTroposphericDelay : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f5ffdf29129ef90a,
              mid_init$_28c7bdc075bb74e8,
              mid_init$_fa8d638c79b33265,
              mid_getDefaultModel_f6291ba3968b7789,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_pathDelay_a4fdd877b349d4a6,
              mid_pathDelay_129678f244f63094,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedTroposphericDelay(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedTroposphericDelay(const FixedTroposphericDelay& obj) : ::java::lang::Object(obj) {}

            FixedTroposphericDelay(const ::java::lang::String &);
            FixedTroposphericDelay(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);
            FixedTroposphericDelay(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &);

            static FixedTroposphericDelay getDefaultModel();
            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(FixedTroposphericDelay);
          extern PyTypeObject *PY_TYPE(FixedTroposphericDelay);

          class t_FixedTroposphericDelay {
          public:
            PyObject_HEAD
            FixedTroposphericDelay object;
            static PyObject *wrap_Object(const FixedTroposphericDelay&);
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
