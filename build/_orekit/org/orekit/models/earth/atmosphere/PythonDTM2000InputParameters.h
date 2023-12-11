#ifndef org_orekit_models_earth_atmosphere_PythonDTM2000InputParameters_H
#define org_orekit_models_earth_atmosphere_PythonDTM2000InputParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          class DTM2000InputParameters;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          class PythonDTM2000InputParameters : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_get24HoursKp_b0b988f941da47d8,
              mid_getInstantFlux_b0b988f941da47d8,
              mid_getMaxDate_7a97f7e149e79afb,
              mid_getMeanFlux_b0b988f941da47d8,
              mid_getMinDate_7a97f7e149e79afb,
              mid_getThreeHourlyKP_b0b988f941da47d8,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonDTM2000InputParameters(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonDTM2000InputParameters(const PythonDTM2000InputParameters& obj) : ::java::lang::Object(obj) {}

            PythonDTM2000InputParameters();

            void finalize() const;
            jdouble get24HoursKp(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getInstantFlux(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMaxDate() const;
            jdouble getMeanFlux(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMinDate() const;
            jdouble getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonDTM2000InputParameters);
          extern PyTypeObject *PY_TYPE(PythonDTM2000InputParameters);

          class t_PythonDTM2000InputParameters {
          public:
            PyObject_HEAD
            PythonDTM2000InputParameters object;
            static PyObject *wrap_Object(const PythonDTM2000InputParameters&);
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
