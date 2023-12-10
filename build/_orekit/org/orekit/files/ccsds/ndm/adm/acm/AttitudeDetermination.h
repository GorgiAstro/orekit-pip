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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
  }
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeElementsType;
              class RateElementsType;
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
                  mid_init$_7ae3461a92a43152,
                  mid_addSensor_4d8be7cfc38a825b,
                  mid_getAttitudeStates_ec3c84a694477494,
                  mid_getCovarianceType_10ff8ccfa18eb164,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getEulerRotSeq_425debac8563c8f4,
                  mid_getId_0090f7797e403f43,
                  mid_getMethod_c8f5f28322e29d95,
                  mid_getNbStates_f2f64475e4580546,
                  mid_getPrevId_0090f7797e403f43,
                  mid_getRateProcessNoiseStdDev_456d9a2f64d6b28d,
                  mid_getRateStates_6a98691d179a0a11,
                  mid_getSensorsUsed_a6156df500549a58,
                  mid_getSigmaU_456d9a2f64d6b28d,
                  mid_getSigmaV_456d9a2f64d6b28d,
                  mid_getSource_0090f7797e403f43,
                  mid_setAttitudeStates_3a0e4c42559abb2e,
                  mid_setCovarianceType_f40cd56ce69cda26,
                  mid_setEulerRotSeq_3c290f1c2c08ff0e,
                  mid_setId_e939c6558ae8d313,
                  mid_setMethod_01ed0efdbc98924d,
                  mid_setNbStates_0a2a1ac2721c0336,
                  mid_setPrevId_e939c6558ae8d313,
                  mid_setRateProcessNoiseStdDev_77e0f9a1f260e2e5,
                  mid_setRateStates_153f0895a658f894,
                  mid_setSigmaU_77e0f9a1f260e2e5,
                  mid_setSigmaV_77e0f9a1f260e2e5,
                  mid_setSource_e939c6558ae8d313,
                  mid_validate_77e0f9a1f260e2e5,
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
