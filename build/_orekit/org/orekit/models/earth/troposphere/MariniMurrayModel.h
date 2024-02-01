#ifndef org_orekit_models_earth_troposphere_MariniMurrayModel_H
#define org_orekit_models_earth_troposphere_MariniMurrayModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
          class MariniMurrayModel;
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
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
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

          class MariniMurrayModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_cd5724127cc72e96,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getStandardModel_98f67f4fc615fee4,
              mid_pathDelay_a07808bbc1ebff8d,
              mid_pathDelay_3e863f8cc7cde633,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MariniMurrayModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MariniMurrayModel(const MariniMurrayModel& obj) : ::java::lang::Object(obj) {}

            MariniMurrayModel(jdouble, jdouble, jdouble, jdouble);

            ::java::util::List getParametersDrivers() const;
            static MariniMurrayModel getStandardModel(jdouble);
            jdouble pathDelay(jdouble, const ::org::orekit::bodies::GeodeticPoint &, const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::hipparchus::CalculusFieldElement pathDelay(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::FieldGeodeticPoint &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(MariniMurrayModel);
          extern PyTypeObject *PY_TYPE(MariniMurrayModel);

          class t_MariniMurrayModel {
          public:
            PyObject_HEAD
            MariniMurrayModel object;
            static PyObject *wrap_Object(const MariniMurrayModel&);
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
