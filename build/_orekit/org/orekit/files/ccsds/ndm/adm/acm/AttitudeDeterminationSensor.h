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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getNbSensorNoiseCovariance_55546ef6a647f39b,
                  mid_getSensorFrequency_b74f83833fdad017,
                  mid_getSensorNoiseCovariance_25e1757a36c4dde2,
                  mid_getSensorNumber_55546ef6a647f39b,
                  mid_getSensorUsed_1c1fa1e935d6cdcf,
                  mid_setNbSensorNoiseCovariance_44ed599e93e8a30c,
                  mid_setSensorFrequency_8ba9fe7a847cecad,
                  mid_setSensorNoiseCovariance_ab69da052b88f50c,
                  mid_setSensorNumber_44ed599e93e8a30c,
                  mid_setSensorUsed_734b91ac30d5f9b4,
                  mid_validate_8ba9fe7a847cecad,
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
