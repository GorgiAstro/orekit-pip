#ifndef org_orekit_models_earth_troposphere_FixedTroposphericDelay_H
#define org_orekit_models_earth_troposphere_FixedTroposphericDelay_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class FixedTroposphericDelay;
          class DiscreteTroposphericModel;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_init$_d0bc48d5b00dc40c,
              mid_init$_63232a42a5419b09,
              mid_init$_2656072909750fef,
              mid_getDefaultModel_fb351a86def9fdc1,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_pathDelay_ff7a895eb6f0af2e,
              mid_pathDelay_fe3b5c46874ab115,
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
