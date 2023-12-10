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
    namespace data {
      class DataProvidersManager;
    }
    namespace bodies {
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
              mid_init$_e939c6558ae8d313,
              mid_init$_2a9119a84e92f14a,
              mid_init$_748b42918a92f2d4,
              mid_getDefaultModel_17d59345a9bde8da,
              mid_getParametersDrivers_a6156df500549a58,
              mid_pathDelay_0326270bf0e8ed17,
              mid_pathDelay_af133f80cdba1dc2,
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
