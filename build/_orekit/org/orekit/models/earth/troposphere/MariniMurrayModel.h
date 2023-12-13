#ifndef org_orekit_models_earth_troposphere_MariniMurrayModel_H
#define org_orekit_models_earth_troposphere_MariniMurrayModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class MariniMurrayModel;
          class DiscreteTroposphericModel;
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
              mid_init$_49f4b5153d696ea5,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getStandardModel_1781709fdef80e4c,
              mid_pathDelay_2edbfa177156ee09,
              mid_pathDelay_6f66c6b7094d6f08,
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
