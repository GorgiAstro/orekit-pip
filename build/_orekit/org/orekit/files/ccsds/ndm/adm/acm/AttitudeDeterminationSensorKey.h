#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeDeterminationSensorKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeDeterminationSensorKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeDeterminationSensorKey;
              class AttitudeDeterminationSensor;
            }
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              class AttitudeDeterminationSensorKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_aaf800ef038097fb,
                  mid_valueOf_fe0127e2c1fcb623,
                  mid_values_2f4c390550dbbad4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeDeterminationSensorKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeDeterminationSensorKey(const AttitudeDeterminationSensorKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudeDeterminationSensorKey *NUMBER_SENSOR_NOISE_COVARIANCE;
                static AttitudeDeterminationSensorKey *SENSOR_FREQUENCY;
                static AttitudeDeterminationSensorKey *SENSOR_NOISE_STDDEV;
                static AttitudeDeterminationSensorKey *SENSOR_NUMBER;
                static AttitudeDeterminationSensorKey *SENSOR_USED;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor &) const;
                static AttitudeDeterminationSensorKey valueOf(const ::java::lang::String &);
                static JArray< AttitudeDeterminationSensorKey > values();
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeDeterminationSensorKey);
              extern PyTypeObject *PY_TYPE(AttitudeDeterminationSensorKey);

              class t_AttitudeDeterminationSensorKey {
              public:
                PyObject_HEAD
                AttitudeDeterminationSensorKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeDeterminationSensorKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeDeterminationSensorKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeDeterminationSensorKey&, PyTypeObject *);
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
}

#endif
