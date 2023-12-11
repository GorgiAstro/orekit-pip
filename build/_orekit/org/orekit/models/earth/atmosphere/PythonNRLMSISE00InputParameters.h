#ifndef org_orekit_models_earth_atmosphere_PythonNRLMSISE00InputParameters_H
#define org_orekit_models_earth_atmosphere_PythonNRLMSISE00InputParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class NRLMSISE00InputParameters;
        }
      }
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

          class PythonNRLMSISE00InputParameters : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getAp_89e8b78e4211e023,
              mid_getAverageFlux_b0b988f941da47d8,
              mid_getDailyFlux_b0b988f941da47d8,
              mid_getMaxDate_7a97f7e149e79afb,
              mid_getMinDate_7a97f7e149e79afb,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonNRLMSISE00InputParameters(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonNRLMSISE00InputParameters(const PythonNRLMSISE00InputParameters& obj) : ::java::lang::Object(obj) {}

            PythonNRLMSISE00InputParameters();

            void finalize() const;
            JArray< jdouble > getAp(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getAverageFlux(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getDailyFlux(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMaxDate() const;
            ::org::orekit::time::AbsoluteDate getMinDate() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonNRLMSISE00InputParameters);
          extern PyTypeObject *PY_TYPE(PythonNRLMSISE00InputParameters);

          class t_PythonNRLMSISE00InputParameters {
          public:
            PyObject_HEAD
            PythonNRLMSISE00InputParameters object;
            static PyObject *wrap_Object(const PythonNRLMSISE00InputParameters&);
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
