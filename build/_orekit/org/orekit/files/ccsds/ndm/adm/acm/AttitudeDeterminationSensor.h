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
                  mid_init$_ff7cb6c242604316,
                  mid_getNbSensorNoiseCovariance_d6ab429752e7c267,
                  mid_getSensorFrequency_9981f74b2d109da6,
                  mid_getSensorNoiseCovariance_be783177b060994b,
                  mid_getSensorNumber_d6ab429752e7c267,
                  mid_getSensorUsed_d2c8eb4129821f0e,
                  mid_setNbSensorNoiseCovariance_8fd427ab23829bf5,
                  mid_setSensorFrequency_1ad26e8c8c0cd65b,
                  mid_setSensorNoiseCovariance_a71c45509eaf92d1,
                  mid_setSensorNumber_8fd427ab23829bf5,
                  mid_setSensorUsed_105e1eadb709d9ac,
                  mid_validate_1ad26e8c8c0cd65b,
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
