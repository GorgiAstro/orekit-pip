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
                  mid_init$_fe20320dccf187ae,
                  mid_getAcmDataElements_e62d3bb06d56d7e3,
                  mid_getCatalogName_1c1fa1e935d6cdcf,
                  mid_getEpochT0_c325492395d89b24,
                  mid_getInternationalDesignator_1c1fa1e935d6cdcf,
                  mid_getNextLeapEpoch_c325492395d89b24,
                  mid_getNextLeapTaimutc_b74f83833fdad017,
                  mid_getObjectDesignator_1c1fa1e935d6cdcf,
                  mid_getOdmMessageLink_1c1fa1e935d6cdcf,
                  mid_getOriginatorAddress_1c1fa1e935d6cdcf,
                  mid_getOriginatorEmail_1c1fa1e935d6cdcf,
                  mid_getOriginatorPOC_1c1fa1e935d6cdcf,
                  mid_getOriginatorPhone_1c1fa1e935d6cdcf,
                  mid_getOriginatorPosition_1c1fa1e935d6cdcf,
                  mid_getStartTime_c325492395d89b24,
                  mid_getStopTime_c325492395d89b24,
                  mid_getTaimutcT0_b74f83833fdad017,
                  mid_setAcmDataElements_0e7c3032c7c93ed3,
                  mid_setCatalogName_734b91ac30d5f9b4,
                  mid_setEpochT0_02135a6ef25adb4b,
                  mid_setInternationalDesignator_734b91ac30d5f9b4,
                  mid_setNextLeapEpoch_02135a6ef25adb4b,
                  mid_setNextLeapTaimutc_8ba9fe7a847cecad,
                  mid_setObjectDesignator_734b91ac30d5f9b4,
                  mid_setOdmMessageLink_734b91ac30d5f9b4,
                  mid_setOriginatorAddress_734b91ac30d5f9b4,
                  mid_setOriginatorEmail_734b91ac30d5f9b4,
                  mid_setOriginatorPOC_734b91ac30d5f9b4,
                  mid_setOriginatorPhone_734b91ac30d5f9b4,
                  mid_setOriginatorPosition_734b91ac30d5f9b4,
                  mid_setStartTime_02135a6ef25adb4b,
                  mid_setStopTime_02135a6ef25adb4b,
                  mid_setTaimutcT0_8ba9fe7a847cecad,
                  mid_validate_8ba9fe7a847cecad,
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
