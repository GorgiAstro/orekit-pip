#ifndef org_orekit_models_earth_atmosphere_NRLMSISE00InputParameters_H
#define org_orekit_models_earth_atmosphere_NRLMSISE00InputParameters_H

#include "java/io/Serializable.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          class NRLMSISE00InputParameters : public ::java::io::Serializable {
           public:
            enum {
              mid_getAp_e586dea4c0bad69b,
              mid_getAverageFlux_e912d21057defe63,
              mid_getDailyFlux_e912d21057defe63,
              mid_getMaxDate_aaa854c403487cf3,
              mid_getMinDate_aaa854c403487cf3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NRLMSISE00InputParameters(jobject obj) : ::java::io::Serializable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NRLMSISE00InputParameters(const NRLMSISE00InputParameters& obj) : ::java::io::Serializable(obj) {}

            JArray< jdouble > getAp(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getAverageFlux(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getDailyFlux(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMaxDate() const;
            ::org::orekit::time::AbsoluteDate getMinDate() const;
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
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(NRLMSISE00InputParameters);
          extern PyTypeObject *PY_TYPE(NRLMSISE00InputParameters);

          class t_NRLMSISE00InputParameters {
          public:
            PyObject_HEAD
            NRLMSISE00InputParameters object;
            static PyObject *wrap_Object(const NRLMSISE00InputParameters&);
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
