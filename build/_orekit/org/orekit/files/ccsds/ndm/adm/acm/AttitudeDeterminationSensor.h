#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeDeterminationSensor_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeDeterminationSensor_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
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

              class AttitudeDeterminationSensor : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_getNbSensorNoiseCovariance_f2f64475e4580546,
                  mid_getSensorFrequency_456d9a2f64d6b28d,
                  mid_getSensorNoiseCovariance_7cdc325af0834901,
                  mid_getSensorNumber_f2f64475e4580546,
                  mid_getSensorUsed_0090f7797e403f43,
                  mid_setNbSensorNoiseCovariance_0a2a1ac2721c0336,
                  mid_setSensorFrequency_77e0f9a1f260e2e5,
                  mid_setSensorNoiseCovariance_ebc26dcaf4761286,
                  mid_setSensorNumber_0a2a1ac2721c0336,
                  mid_setSensorUsed_e939c6558ae8d313,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeDeterminationSensor(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeDeterminationSensor(const AttitudeDeterminationSensor& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudeDeterminationSensor();

                jint getNbSensorNoiseCovariance() const;
                jdouble getSensorFrequency() const;
                JArray< jdouble > getSensorNoiseCovariance() const;
                jint getSensorNumber() const;
                ::java::lang::String getSensorUsed() const;
                void setNbSensorNoiseCovariance(jint) const;
                void setSensorFrequency(jdouble) const;
                void setSensorNoiseCovariance(const JArray< jdouble > &) const;
                void setSensorNumber(jint) const;
                void setSensorUsed(const ::java::lang::String &) const;
                void validate(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeDeterminationSensor);
              extern PyTypeObject *PY_TYPE(AttitudeDeterminationSensor);

              class t_AttitudeDeterminationSensor {
              public:
                PyObject_HEAD
                AttitudeDeterminationSensor object;
                static PyObject *wrap_Object(const AttitudeDeterminationSensor&);
                static PyObject *wrap_jobject(const jobject&);
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
