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
              class AttitudeElementsType;
              class RateElementsType;
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
                  mid_init$_7ae3461a92a43152,
                  mid_getAttBasis_0090f7797e403f43,
                  mid_getAttBasisID_0090f7797e403f43,
                  mid_getAttID_0090f7797e403f43,
                  mid_getAttPrevID_0090f7797e403f43,
                  mid_getAttitudeType_ec3c84a694477494,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getEulerRotSeq_425debac8563c8f4,
                  mid_getNbStates_f2f64475e4580546,
                  mid_getRateType_6a98691d179a0a11,
                  mid_setAttBasis_e939c6558ae8d313,
                  mid_setAttBasisID_e939c6558ae8d313,
                  mid_setAttID_e939c6558ae8d313,
                  mid_setAttPrevID_e939c6558ae8d313,
                  mid_setAttitudeType_3a0e4c42559abb2e,
                  mid_setEulerRotSeq_3c290f1c2c08ff0e,
                  mid_setNbStates_0a2a1ac2721c0336,
                  mid_setRateType_153f0895a658f894,
                  mid_validate_77e0f9a1f260e2e5,
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
