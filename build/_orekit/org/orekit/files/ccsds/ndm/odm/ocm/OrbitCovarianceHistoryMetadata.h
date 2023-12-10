#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H

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
        namespace definitions {
          class FrameFacade;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
              class Ordering;
            }
          }
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
                  mid_init$_e82d68cd9f886886,
                  mid_getCovBasis_0090f7797e403f43,
                  mid_getCovBasisID_0090f7797e403f43,
                  mid_getCovConfidence_456d9a2f64d6b28d,
                  mid_getCovFrameEpoch_aaa854c403487cf3,
                  mid_getCovID_0090f7797e403f43,
                  mid_getCovNextID_0090f7797e403f43,
                  mid_getCovOrdering_0795193bf31f41de,
                  mid_getCovPrevID_0090f7797e403f43,
                  mid_getCovReferenceFrame_aa70fdb14ae9305f,
                  mid_getCovScaleMax_456d9a2f64d6b28d,
                  mid_getCovScaleMin_456d9a2f64d6b28d,
                  mid_getCovType_89f4b16f0349faa4,
                  mid_getCovUnits_a6156df500549a58,
                  mid_setCovBasis_e939c6558ae8d313,
                  mid_setCovBasisID_e939c6558ae8d313,
                  mid_setCovConfidence_77e0f9a1f260e2e5,
                  mid_setCovFrameEpoch_e82d68cd9f886886,
                  mid_setCovID_e939c6558ae8d313,
                  mid_setCovNextID_e939c6558ae8d313,
                  mid_setCovOrdering_ba8d0ff77b3d7507,
                  mid_setCovPrevID_e939c6558ae8d313,
                  mid_setCovReferenceFrame_a455f3ff24eb0b47,
                  mid_setCovScaleMax_77e0f9a1f260e2e5,
                  mid_setCovScaleMin_77e0f9a1f260e2e5,
                  mid_setCovType_871e4887d93fc936,
                  mid_setCovUnits_65de9727799c5641,
                  mid_validate_77e0f9a1f260e2e5,
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
