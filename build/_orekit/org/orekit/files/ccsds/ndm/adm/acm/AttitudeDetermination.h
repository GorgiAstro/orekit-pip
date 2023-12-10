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
              class AttitudeElementsType;
              class AttitudeCovarianceType;
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
                  mid_init$_0fa09c18fee449d5,
                  mid_addSensor_bb8c5ac3b7165de2,
                  mid_getAttitudeStates_f08064c40442c84b,
                  mid_getCovarianceType_dbbc6c3c22ca640c,
                  mid_getEndpoints_35bd4909c56b6915,
                  mid_getEulerRotSeq_5aea028785008a06,
                  mid_getId_11b109bd155ca898,
                  mid_getMethod_d2912780ca38b0dd,
                  mid_getNbStates_570ce0828f81a2c1,
                  mid_getPrevId_11b109bd155ca898,
                  mid_getRateProcessNoiseStdDev_dff5885c2c873297,
                  mid_getRateStates_f2358484d07d6202,
                  mid_getSensorsUsed_2afa36052df4765d,
                  mid_getSigmaU_dff5885c2c873297,
                  mid_getSigmaV_dff5885c2c873297,
                  mid_getSource_11b109bd155ca898,
                  mid_setAttitudeStates_4299529dacf75fa7,
                  mid_setCovarianceType_c9a39b1c926f77b0,
                  mid_setEulerRotSeq_a908138988eb2a50,
                  mid_setId_d0bc48d5b00dc40c,
                  mid_setMethod_2bd74e151e5425a9,
                  mid_setNbStates_99803b0791f320ff,
                  mid_setPrevId_d0bc48d5b00dc40c,
                  mid_setRateProcessNoiseStdDev_17db3a65980d3441,
                  mid_setRateStates_819c66db610b1575,
                  mid_setSigmaU_17db3a65980d3441,
                  mid_setSigmaV_17db3a65980d3441,
                  mid_setSource_d0bc48d5b00dc40c,
                  mid_validate_17db3a65980d3441,
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
