#ifndef org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation$StrengthLevel_H
#define org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation$StrengthLevel_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
          }
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
          namespace data {

            class MarshallSolarActivityFutureEstimation$StrengthLevel : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_62df8fd2953b0dfa,
                mid_values_5a2e18a919376664,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MarshallSolarActivityFutureEstimation$StrengthLevel(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MarshallSolarActivityFutureEstimation$StrengthLevel(const MarshallSolarActivityFutureEstimation$StrengthLevel& obj) : ::java::lang::Enum(obj) {}

              static MarshallSolarActivityFutureEstimation$StrengthLevel *AVERAGE;
              static MarshallSolarActivityFutureEstimation$StrengthLevel *STRONG;
              static MarshallSolarActivityFutureEstimation$StrengthLevel *WEAK;

              static MarshallSolarActivityFutureEstimation$StrengthLevel valueOf(const ::java::lang::String &);
              static JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > values();
            };
          }
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
          namespace data {
            extern PyType_Def PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel);
            extern PyTypeObject *PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel);

            class t_MarshallSolarActivityFutureEstimation$StrengthLevel {
            public:
              PyObject_HEAD
              MarshallSolarActivityFutureEstimation$StrengthLevel object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimation$StrengthLevel&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimation$StrengthLevel&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
