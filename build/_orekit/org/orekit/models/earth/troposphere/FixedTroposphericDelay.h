#ifndef org_orekit_models_earth_troposphere_FixedTroposphericDelay_H
#define org_orekit_models_earth_troposphere_FixedTroposphericDelay_H

#include "java/lang/Object.h"

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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
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
              mid_init$_105e1eadb709d9ac,
              mid_init$_4c16e57d19ddaa09,
              mid_init$_3a2cd39ad5830d3b,
              mid_getDefaultModel_d1fde2ae98884ceb,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_pathDelay_3e863f8cc7cde633,
              mid_pathDelay_a07808bbc1ebff8d,
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
