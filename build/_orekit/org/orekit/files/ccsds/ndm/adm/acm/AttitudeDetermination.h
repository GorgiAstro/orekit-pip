#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeDetermination_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeDetermination_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class RateElementsType;
              class AttitudeElementsType;
              class AttitudeDeterminationSensor;
              class AttitudeCovarianceType;
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
namespace java {
  namespace util {
    class List;
  }
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

              class AttitudeDetermination : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_addSensor_4e458b36c7297083,
                  mid_getAttitudeStates_53d1d57d6e9487ac,
                  mid_getCovarianceType_49fb04b3e4992396,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getEulerRotSeq_513511eeab1350d5,
                  mid_getId_1c1fa1e935d6cdcf,
                  mid_getMethod_3f186886b06461a4,
                  mid_getNbStates_55546ef6a647f39b,
                  mid_getPrevId_1c1fa1e935d6cdcf,
                  mid_getRateProcessNoiseStdDev_b74f83833fdad017,
                  mid_getRateStates_7f391c24fe2095f0,
                  mid_getSensorsUsed_e62d3bb06d56d7e3,
                  mid_getSigmaU_b74f83833fdad017,
                  mid_getSigmaV_b74f83833fdad017,
                  mid_getSource_1c1fa1e935d6cdcf,
                  mid_setAttitudeStates_2fd9a6a10148e91b,
                  mid_setCovarianceType_8563e2f42c19e56b,
                  mid_setEulerRotSeq_062f1951e591952f,
                  mid_setId_734b91ac30d5f9b4,
                  mid_setMethod_801f7c356502c653,
                  mid_setNbStates_44ed599e93e8a30c,
                  mid_setPrevId_734b91ac30d5f9b4,
                  mid_setRateProcessNoiseStdDev_8ba9fe7a847cecad,
                  mid_setRateStates_6e45359e1a7bacd4,
                  mid_setSigmaU_8ba9fe7a847cecad,
                  mid_setSigmaV_8ba9fe7a847cecad,
                  mid_setSource_734b91ac30d5f9b4,
                  mid_validate_8ba9fe7a847cecad,
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
