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
                  mid_init$_0640e6acf969ed28,
                  mid_getAttBasis_3cffd47377eca18a,
                  mid_getAttBasisID_3cffd47377eca18a,
                  mid_getAttID_3cffd47377eca18a,
                  mid_getAttPrevID_3cffd47377eca18a,
                  mid_getAttitudeType_5db4fed82a3253b8,
                  mid_getEndpoints_c66f753ddee38944,
                  mid_getEulerRotSeq_cd8353278e08930b,
                  mid_getNbStates_412668abc8d889e9,
                  mid_getRateType_232ed199566358d9,
                  mid_setAttBasis_f5ffdf29129ef90a,
                  mid_setAttBasisID_f5ffdf29129ef90a,
                  mid_setAttID_f5ffdf29129ef90a,
                  mid_setAttPrevID_f5ffdf29129ef90a,
                  mid_setAttitudeType_a785d3c67d2cf110,
                  mid_setEulerRotSeq_8b9f97be929dfd52,
                  mid_setNbStates_a3da1a935cb37f7b,
                  mid_setRateType_2a73a81936748923,
                  mid_validate_10f281d777284cea,
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
