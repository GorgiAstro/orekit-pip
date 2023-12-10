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
                  mid_init$_0fa09c18fee449d5,
                  mid_getNbSensorNoiseCovariance_570ce0828f81a2c1,
                  mid_getSensorFrequency_dff5885c2c873297,
                  mid_getSensorNoiseCovariance_60c7040667a7dc5c,
                  mid_getSensorNumber_570ce0828f81a2c1,
                  mid_getSensorUsed_11b109bd155ca898,
                  mid_setNbSensorNoiseCovariance_99803b0791f320ff,
                  mid_setSensorFrequency_17db3a65980d3441,
                  mid_setSensorNoiseCovariance_fa9d415d19f69361,
                  mid_setSensorNumber_99803b0791f320ff,
                  mid_setSensorUsed_d0bc48d5b00dc40c,
                  mid_validate_17db3a65980d3441,
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
