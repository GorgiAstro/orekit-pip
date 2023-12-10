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
                  mid_init$_0fa09c18fee449d5,
                  mid_getAttBasis_11b109bd155ca898,
                  mid_getAttBasisID_11b109bd155ca898,
                  mid_getAttID_11b109bd155ca898,
                  mid_getAttPrevID_11b109bd155ca898,
                  mid_getAttitudeType_f08064c40442c84b,
                  mid_getEndpoints_35bd4909c56b6915,
                  mid_getEulerRotSeq_5aea028785008a06,
                  mid_getNbStates_570ce0828f81a2c1,
                  mid_getRateType_f2358484d07d6202,
                  mid_setAttBasis_d0bc48d5b00dc40c,
                  mid_setAttBasisID_d0bc48d5b00dc40c,
                  mid_setAttID_d0bc48d5b00dc40c,
                  mid_setAttPrevID_d0bc48d5b00dc40c,
                  mid_setAttitudeType_4299529dacf75fa7,
                  mid_setEulerRotSeq_a908138988eb2a50,
                  mid_setNbStates_99803b0791f320ff,
                  mid_setRateType_819c66db610b1575,
                  mid_validate_17db3a65980d3441,
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
