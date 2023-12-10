#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H

#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"

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
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AcmElements;
            }
          }
        }
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
          namespace adm {
            namespace acm {

              class AcmMetadata : public ::org::orekit::files::ccsds::ndm::adm::AdmMetadata {
               public:
                enum {
                  mid_init$_959fe257032a39c0,
                  mid_getAcmDataElements_a6156df500549a58,
                  mid_getCatalogName_0090f7797e403f43,
                  mid_getEpochT0_aaa854c403487cf3,
                  mid_getInternationalDesignator_0090f7797e403f43,
                  mid_getNextLeapEpoch_aaa854c403487cf3,
                  mid_getNextLeapTaimutc_456d9a2f64d6b28d,
                  mid_getObjectDesignator_0090f7797e403f43,
                  mid_getOdmMessageLink_0090f7797e403f43,
                  mid_getOriginatorAddress_0090f7797e403f43,
                  mid_getOriginatorEmail_0090f7797e403f43,
                  mid_getOriginatorPOC_0090f7797e403f43,
                  mid_getOriginatorPhone_0090f7797e403f43,
                  mid_getOriginatorPosition_0090f7797e403f43,
                  mid_getStartTime_aaa854c403487cf3,
                  mid_getStopTime_aaa854c403487cf3,
                  mid_getTaimutcT0_456d9a2f64d6b28d,
                  mid_setAcmDataElements_65de9727799c5641,
                  mid_setCatalogName_e939c6558ae8d313,
                  mid_setEpochT0_e82d68cd9f886886,
                  mid_setInternationalDesignator_e939c6558ae8d313,
                  mid_setNextLeapEpoch_e82d68cd9f886886,
                  mid_setNextLeapTaimutc_77e0f9a1f260e2e5,
                  mid_setObjectDesignator_e939c6558ae8d313,
                  mid_setOdmMessageLink_e939c6558ae8d313,
                  mid_setOriginatorAddress_e939c6558ae8d313,
                  mid_setOriginatorEmail_e939c6558ae8d313,
                  mid_setOriginatorPOC_e939c6558ae8d313,
                  mid_setOriginatorPhone_e939c6558ae8d313,
                  mid_setOriginatorPosition_e939c6558ae8d313,
                  mid_setStartTime_e82d68cd9f886886,
                  mid_setStopTime_e82d68cd9f886886,
                  mid_setTaimutcT0_77e0f9a1f260e2e5,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmMetadata(const AcmMetadata& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(obj) {}

                AcmMetadata(const ::org::orekit::data::DataContext &);

                ::java::util::List getAcmDataElements() const;
                ::java::lang::String getCatalogName() const;
                ::org::orekit::time::AbsoluteDate getEpochT0() const;
                ::java::lang::String getInternationalDesignator() const;
                ::org::orekit::time::AbsoluteDate getNextLeapEpoch() const;
                jdouble getNextLeapTaimutc() const;
                ::java::lang::String getObjectDesignator() const;
                ::java::lang::String getOdmMessageLink() const;
                ::java::lang::String getOriginatorAddress() const;
                ::java::lang::String getOriginatorEmail() const;
                ::java::lang::String getOriginatorPOC() const;
                ::java::lang::String getOriginatorPhone() const;
                ::java::lang::String getOriginatorPosition() const;
                ::org::orekit::time::AbsoluteDate getStartTime() const;
                ::org::orekit::time::AbsoluteDate getStopTime() const;
                jdouble getTaimutcT0() const;
                void setAcmDataElements(const ::java::util::List &) const;
                void setCatalogName(const ::java::lang::String &) const;
                void setEpochT0(const ::org::orekit::time::AbsoluteDate &) const;
                void setInternationalDesignator(const ::java::lang::String &) const;
                void setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setNextLeapTaimutc(jdouble) const;
                void setObjectDesignator(const ::java::lang::String &) const;
                void setOdmMessageLink(const ::java::lang::String &) const;
                void setOriginatorAddress(const ::java::lang::String &) const;
                void setOriginatorEmail(const ::java::lang::String &) const;
                void setOriginatorPOC(const ::java::lang::String &) const;
                void setOriginatorPhone(const ::java::lang::String &) const;
                void setOriginatorPosition(const ::java::lang::String &) const;
                void setStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setStopTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setTaimutcT0(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(AcmMetadata);
              extern PyTypeObject *PY_TYPE(AcmMetadata);

              class t_AcmMetadata {
              public:
                PyObject_HEAD
                AcmMetadata object;
                static PyObject *wrap_Object(const AcmMetadata&);
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
