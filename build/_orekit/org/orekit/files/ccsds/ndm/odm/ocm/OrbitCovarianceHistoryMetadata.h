#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
              class Ordering;
            }
          }
        }
        namespace definitions {
          class FrameFacade;
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace time {
      class AbsoluteDate;
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
          namespace odm {
            namespace ocm {

              class OrbitCovarianceHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_02135a6ef25adb4b,
                  mid_getCovBasis_1c1fa1e935d6cdcf,
                  mid_getCovBasisID_1c1fa1e935d6cdcf,
                  mid_getCovConfidence_b74f83833fdad017,
                  mid_getCovFrameEpoch_c325492395d89b24,
                  mid_getCovID_1c1fa1e935d6cdcf,
                  mid_getCovNextID_1c1fa1e935d6cdcf,
                  mid_getCovOrdering_3965a9392133c403,
                  mid_getCovPrevID_1c1fa1e935d6cdcf,
                  mid_getCovReferenceFrame_69d8be1b6b0a1a94,
                  mid_getCovScaleMax_b74f83833fdad017,
                  mid_getCovScaleMin_b74f83833fdad017,
                  mid_getCovType_4eb559a63ad8d46d,
                  mid_getCovUnits_e62d3bb06d56d7e3,
                  mid_setCovBasis_734b91ac30d5f9b4,
                  mid_setCovBasisID_734b91ac30d5f9b4,
                  mid_setCovConfidence_8ba9fe7a847cecad,
                  mid_setCovFrameEpoch_02135a6ef25adb4b,
                  mid_setCovID_734b91ac30d5f9b4,
                  mid_setCovNextID_734b91ac30d5f9b4,
                  mid_setCovOrdering_50c4ba031b2387f4,
                  mid_setCovPrevID_734b91ac30d5f9b4,
                  mid_setCovReferenceFrame_4755133c5c4c59be,
                  mid_setCovScaleMax_8ba9fe7a847cecad,
                  mid_setCovScaleMin_8ba9fe7a847cecad,
                  mid_setCovType_c891909ddae6c021,
                  mid_setCovUnits_0e7c3032c7c93ed3,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitCovarianceHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitCovarianceHistoryMetadata(const OrbitCovarianceHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate &);

                ::java::lang::String getCovBasis() const;
                ::java::lang::String getCovBasisID() const;
                jdouble getCovConfidence() const;
                ::org::orekit::time::AbsoluteDate getCovFrameEpoch() const;
                ::java::lang::String getCovID() const;
                ::java::lang::String getCovNextID() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering getCovOrdering() const;
                ::java::lang::String getCovPrevID() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getCovReferenceFrame() const;
                jdouble getCovScaleMax() const;
                jdouble getCovScaleMin() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType getCovType() const;
                ::java::util::List getCovUnits() const;
                void setCovBasis(const ::java::lang::String &) const;
                void setCovBasisID(const ::java::lang::String &) const;
                void setCovConfidence(jdouble) const;
                void setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setCovID(const ::java::lang::String &) const;
                void setCovNextID(const ::java::lang::String &) const;
                void setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering &) const;
                void setCovPrevID(const ::java::lang::String &) const;
                void setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setCovScaleMax(jdouble) const;
                void setCovScaleMin(jdouble) const;
                void setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType &) const;
                void setCovUnits(const ::java::util::List &) const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitCovarianceHistoryMetadata);
              extern PyTypeObject *PY_TYPE(OrbitCovarianceHistoryMetadata);

              class t_OrbitCovarianceHistoryMetadata {
              public:
                PyObject_HEAD
                OrbitCovarianceHistoryMetadata object;
                static PyObject *wrap_Object(const OrbitCovarianceHistoryMetadata&);
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
