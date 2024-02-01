#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
              class RateElementsType;
              class AttitudeElementsType;
            }
            class AttitudeEndpoints;
          }
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
                  mid_init$_ff7cb6c242604316,
                  mid_getAttBasis_d2c8eb4129821f0e,
                  mid_getAttBasisID_d2c8eb4129821f0e,
                  mid_getAttID_d2c8eb4129821f0e,
                  mid_getAttPrevID_d2c8eb4129821f0e,
                  mid_getAttitudeType_8cc80fd874f53bfc,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getEulerRotSeq_503d51f00fe64860,
                  mid_getNbStates_d6ab429752e7c267,
                  mid_getRateType_29a8b143d426bd15,
                  mid_setAttBasis_105e1eadb709d9ac,
                  mid_setAttBasisID_105e1eadb709d9ac,
                  mid_setAttID_105e1eadb709d9ac,
                  mid_setAttPrevID_105e1eadb709d9ac,
                  mid_setAttitudeType_c9e4b2c8c6496634,
                  mid_setEulerRotSeq_d6989ad0241efe2c,
                  mid_setNbStates_8fd427ab23829bf5,
                  mid_setRateType_60a107afe829430c,
                  mid_validate_1ad26e8c8c0cd65b,
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
