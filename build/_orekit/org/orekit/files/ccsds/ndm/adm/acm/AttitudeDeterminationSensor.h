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
                  mid_init$_0640e6acf969ed28,
                  mid_getNbSensorNoiseCovariance_412668abc8d889e9,
                  mid_getSensorFrequency_557b8123390d8d0c,
                  mid_getSensorNoiseCovariance_a53a7513ecedada2,
                  mid_getSensorNumber_412668abc8d889e9,
                  mid_getSensorUsed_3cffd47377eca18a,
                  mid_setNbSensorNoiseCovariance_a3da1a935cb37f7b,
                  mid_setSensorFrequency_10f281d777284cea,
                  mid_setSensorNoiseCovariance_cc18240f4a737f14,
                  mid_setSensorNumber_a3da1a935cb37f7b,
                  mid_setSensorUsed_f5ffdf29129ef90a,
                  mid_validate_10f281d777284cea,
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
