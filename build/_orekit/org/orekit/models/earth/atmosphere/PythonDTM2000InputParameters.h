#ifndef org_orekit_models_earth_atmosphere_PythonDTM2000InputParameters_H
#define org_orekit_models_earth_atmosphere_PythonDTM2000InputParameters_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class DTM2000InputParameters;
        }
      }
    }
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
              mid_init$_7ae3461a92a43152,
              mid_finalize_7ae3461a92a43152,
              mid_get24HoursKp_e912d21057defe63,
              mid_getInstantFlux_e912d21057defe63,
              mid_getMaxDate_aaa854c403487cf3,
              mid_getMeanFlux_e912d21057defe63,
              mid_getMinDate_aaa854c403487cf3,
              mid_getThreeHourlyKP_e912d21057defe63,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
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
