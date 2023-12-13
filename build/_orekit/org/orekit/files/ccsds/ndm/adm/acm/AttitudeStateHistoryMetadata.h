#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistoryMetadata_H

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

              class AttitudeStateHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getAttBasis_1c1fa1e935d6cdcf,
                  mid_getAttBasisID_1c1fa1e935d6cdcf,
                  mid_getAttID_1c1fa1e935d6cdcf,
                  mid_getAttPrevID_1c1fa1e935d6cdcf,
                  mid_getAttitudeType_53d1d57d6e9487ac,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getEulerRotSeq_513511eeab1350d5,
                  mid_getNbStates_55546ef6a647f39b,
                  mid_getRateType_7f391c24fe2095f0,
                  mid_setAttBasis_734b91ac30d5f9b4,
                  mid_setAttBasisID_734b91ac30d5f9b4,
                  mid_setAttID_734b91ac30d5f9b4,
                  mid_setAttPrevID_734b91ac30d5f9b4,
                  mid_setAttitudeType_2fd9a6a10148e91b,
                  mid_setEulerRotSeq_062f1951e591952f,
                  mid_setNbStates_44ed599e93e8a30c,
                  mid_setRateType_6e45359e1a7bacd4,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeStateHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeStateHistoryMetadata(const AttitudeStateHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudeStateHistoryMetadata();

                ::java::lang::String getAttBasis() const;
                ::java::lang::String getAttBasisID() const;
                ::java::lang::String getAttID() const;
                ::java::lang::String getAttPrevID() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType getAttitudeType() const;
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder getEulerRotSeq() const;
                jint getNbStates() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType getRateType() const;
                void setAttBasis(const ::java::lang::String &) const;
                void setAttBasisID(const ::java::lang::String &) const;
                void setAttID(const ::java::lang::String &) const;
                void setAttPrevID(const ::java::lang::String &) const;
                void setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType &) const;
                void setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &) const;
                void setNbStates(jint) const;
                void setRateType(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType &) const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeStateHistoryMetadata);
              extern PyTypeObject *PY_TYPE(AttitudeStateHistoryMetadata);

              class t_AttitudeStateHistoryMetadata {
              public:
                PyObject_HEAD
                AttitudeStateHistoryMetadata object;
                static PyObject *wrap_Object(const AttitudeStateHistoryMetadata&);
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
