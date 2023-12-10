#ifndef org_orekit_models_earth_atmosphere_DTM2000InputParameters_H
#define org_orekit_models_earth_atmosphere_DTM2000InputParameters_H

#include "java/io/Serializable.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          class DTM2000InputParameters : public ::java::io::Serializable {
           public:
            enum {
              mid_get24HoursKp_bf1d7732f1acb697,
              mid_getInstantFlux_bf1d7732f1acb697,
              mid_getMaxDate_85703d13e302437e,
              mid_getMeanFlux_bf1d7732f1acb697,
              mid_getMinDate_85703d13e302437e,
              mid_getThreeHourlyKP_bf1d7732f1acb697,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DTM2000InputParameters(jobject obj) : ::java::io::Serializable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DTM2000InputParameters(const DTM2000InputParameters& obj) : ::java::io::Serializable(obj) {}

            jdouble get24HoursKp(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getInstantFlux(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMaxDate() const;
            jdouble getMeanFlux(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMinDate() const;
            jdouble getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(DTM2000InputParameters);
          extern PyTypeObject *PY_TYPE(DTM2000InputParameters);

          class t_DTM2000InputParameters {
          public:
            PyObject_HEAD
            DTM2000InputParameters object;
            static PyObject *wrap_Object(const DTM2000InputParameters&);
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
