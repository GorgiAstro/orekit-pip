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
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getAp_9b63d19c31941c0f,
              mid_getAverageFlux_209f08246d708042,
              mid_getDailyFlux_209f08246d708042,
              mid_getMaxDate_80e11148db499dda,
              mid_getMinDate_80e11148db499dda,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
