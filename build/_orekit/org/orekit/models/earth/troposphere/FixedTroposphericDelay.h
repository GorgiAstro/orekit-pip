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
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class FixedTroposphericDelay;
        }
      }
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_734b91ac30d5f9b4,
              mid_init$_0343d25c5af74eca,
              mid_init$_3f7c4bf9d0d94a6c,
              mid_getDefaultModel_7073151b6b851b50,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_pathDelay_6f66c6b7094d6f08,
              mid_pathDelay_2edbfa177156ee09,
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
