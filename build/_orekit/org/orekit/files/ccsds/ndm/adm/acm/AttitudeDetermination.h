#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeDetermination_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeDetermination_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class RateElementsType;
              class AttitudeCovarianceType;
              class AttitudeElementsType;
              class AttitudeDeterminationSensor;
            }
            class AttitudeEndpoints;
          }
        }
        namespace definitions {
          class AdMethodType;
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
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

              class AttitudeDetermination : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_addSensor_d19ab97a0ba117d7,
                  mid_getAttitudeStates_5db4fed82a3253b8,
                  mid_getCovarianceType_270107b6f5cd254c,
                  mid_getEndpoints_c66f753ddee38944,
                  mid_getEulerRotSeq_cd8353278e08930b,
                  mid_getId_3cffd47377eca18a,
                  mid_getMethod_da536d3d7c70db0c,
                  mid_getNbStates_412668abc8d889e9,
                  mid_getPrevId_3cffd47377eca18a,
                  mid_getRateProcessNoiseStdDev_557b8123390d8d0c,
                  mid_getRateStates_232ed199566358d9,
                  mid_getSensorsUsed_0d9551367f7ecdef,
                  mid_getSigmaU_557b8123390d8d0c,
                  mid_getSigmaV_557b8123390d8d0c,
                  mid_getSource_3cffd47377eca18a,
                  mid_setAttitudeStates_a785d3c67d2cf110,
                  mid_setCovarianceType_424aa6ac7cc5c170,
                  mid_setEulerRotSeq_8b9f97be929dfd52,
                  mid_setId_f5ffdf29129ef90a,
                  mid_setMethod_7100c7873fbfaf4d,
                  mid_setNbStates_a3da1a935cb37f7b,
                  mid_setPrevId_f5ffdf29129ef90a,
                  mid_setRateProcessNoiseStdDev_10f281d777284cea,
                  mid_setRateStates_2a73a81936748923,
                  mid_setSigmaU_10f281d777284cea,
                  mid_setSigmaV_10f281d777284cea,
                  mid_setSource_f5ffdf29129ef90a,
                  mid_validate_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeDetermination(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeDetermination(const AttitudeDetermination& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudeDetermination();

                void addSensor(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor &) const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType getAttitudeStates() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType getCovarianceType() const;
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder getEulerRotSeq() const;
                ::java::lang::String getId() const;
                ::org::orekit::files::ccsds::definitions::AdMethodType getMethod() const;
                jint getNbStates() const;
                ::java::lang::String getPrevId() const;
                jdouble getRateProcessNoiseStdDev() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType getRateStates() const;
                ::java::util::List getSensorsUsed() const;
                jdouble getSigmaU() const;
                jdouble getSigmaV() const;
                ::java::lang::String getSource() const;
                void setAttitudeStates(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType &) const;
                void setCovarianceType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType &) const;
                void setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &) const;
                void setId(const ::java::lang::String &) const;
                void setMethod(const ::org::orekit::files::ccsds::definitions::AdMethodType &) const;
                void setNbStates(jint) const;
                void setPrevId(const ::java::lang::String &) const;
                void setRateProcessNoiseStdDev(jdouble) const;
                void setRateStates(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType &) const;
                void setSigmaU(jdouble) const;
                void setSigmaV(jdouble) const;
                void setSource(const ::java::lang::String &) const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeDetermination);
              extern PyTypeObject *PY_TYPE(AttitudeDetermination);

              class t_AttitudeDetermination {
              public:
                PyObject_HEAD
                AttitudeDetermination object;
                static PyObject *wrap_Object(const AttitudeDetermination&);
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
