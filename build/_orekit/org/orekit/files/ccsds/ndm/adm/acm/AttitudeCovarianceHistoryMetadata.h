#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeCovarianceType;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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

              class AttitudeCovarianceHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getCovBasis_1c1fa1e935d6cdcf,
                  mid_getCovBasisID_1c1fa1e935d6cdcf,
                  mid_getCovID_1c1fa1e935d6cdcf,
                  mid_getCovPrevID_1c1fa1e935d6cdcf,
                  mid_getCovReferenceFrame_69d8be1b6b0a1a94,
                  mid_getCovType_49fb04b3e4992396,
                  mid_setCovBasis_734b91ac30d5f9b4,
                  mid_setCovBasisID_734b91ac30d5f9b4,
                  mid_setCovID_734b91ac30d5f9b4,
                  mid_setCovPrevID_734b91ac30d5f9b4,
                  mid_setCovReferenceFrame_4755133c5c4c59be,
                  mid_setCovType_8563e2f42c19e56b,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeCovarianceHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeCovarianceHistoryMetadata(const AttitudeCovarianceHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudeCovarianceHistoryMetadata();

                ::java::lang::String getCovBasis() const;
                ::java::lang::String getCovBasisID() const;
                ::java::lang::String getCovID() const;
                ::java::lang::String getCovPrevID() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getCovReferenceFrame() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType getCovType() const;
                void setCovBasis(const ::java::lang::String &) const;
                void setCovBasisID(const ::java::lang::String &) const;
                void setCovID(const ::java::lang::String &) const;
                void setCovPrevID(const ::java::lang::String &) const;
                void setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType &) const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata);
              extern PyTypeObject *PY_TYPE(AttitudeCovarianceHistoryMetadata);

              class t_AttitudeCovarianceHistoryMetadata {
              public:
                PyObject_HEAD
                AttitudeCovarianceHistoryMetadata object;
                static PyObject *wrap_Object(const AttitudeCovarianceHistoryMetadata&);
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
