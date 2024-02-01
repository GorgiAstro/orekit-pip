#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeDetermination_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeDetermination_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class AdMethodType;
        }
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeDeterminationSensor;
              class AttitudeCovarianceType;
              class RateElementsType;
              class AttitudeElementsType;
            }
            class AttitudeEndpoints;
          }
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
                  mid_init$_ff7cb6c242604316,
                  mid_addSensor_f45fd26bf181d10b,
                  mid_getAttitudeStates_8cc80fd874f53bfc,
                  mid_getCovarianceType_74687e132732dee9,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getEulerRotSeq_503d51f00fe64860,
                  mid_getId_d2c8eb4129821f0e,
                  mid_getMethod_eff2d3fe8f228985,
                  mid_getNbStates_d6ab429752e7c267,
                  mid_getPrevId_d2c8eb4129821f0e,
                  mid_getRateProcessNoiseStdDev_9981f74b2d109da6,
                  mid_getRateStates_29a8b143d426bd15,
                  mid_getSensorsUsed_d751c1a57012b438,
                  mid_getSigmaU_9981f74b2d109da6,
                  mid_getSigmaV_9981f74b2d109da6,
                  mid_getSource_d2c8eb4129821f0e,
                  mid_setAttitudeStates_c9e4b2c8c6496634,
                  mid_setCovarianceType_fceaef4829f7546b,
                  mid_setEulerRotSeq_d6989ad0241efe2c,
                  mid_setId_105e1eadb709d9ac,
                  mid_setMethod_bfe4590503579790,
                  mid_setNbStates_8fd427ab23829bf5,
                  mid_setPrevId_105e1eadb709d9ac,
                  mid_setRateProcessNoiseStdDev_1ad26e8c8c0cd65b,
                  mid_setRateStates_60a107afe829430c,
                  mid_setSigmaU_1ad26e8c8c0cd65b,
                  mid_setSigmaV_1ad26e8c8c0cd65b,
                  mid_setSource_105e1eadb709d9ac,
                  mid_validate_1ad26e8c8c0cd65b,
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
