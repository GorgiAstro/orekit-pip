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
              mid_init$_667a7965403ed91a,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getStandardModel_c896c6573dd866aa,
              mid_pathDelay_af133f80cdba1dc2,
              mid_pathDelay_0326270bf0e8ed17,
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
