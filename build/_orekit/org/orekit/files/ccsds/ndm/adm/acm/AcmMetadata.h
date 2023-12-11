#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H

#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"

namespace org {
  namespace orekit {
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
    namespace data {
      class DataContext;
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
          namespace adm {
            namespace acm {

              class AcmMetadata : public ::org::orekit::files::ccsds::ndm::adm::AdmMetadata {
               public:
                enum {
                  mid_init$_23625b258f7a7479,
                  mid_getAcmDataElements_0d9551367f7ecdef,
                  mid_getCatalogName_3cffd47377eca18a,
                  mid_getEpochT0_7a97f7e149e79afb,
                  mid_getInternationalDesignator_3cffd47377eca18a,
                  mid_getNextLeapEpoch_7a97f7e149e79afb,
                  mid_getNextLeapTaimutc_557b8123390d8d0c,
                  mid_getObjectDesignator_3cffd47377eca18a,
                  mid_getOdmMessageLink_3cffd47377eca18a,
                  mid_getOriginatorAddress_3cffd47377eca18a,
                  mid_getOriginatorEmail_3cffd47377eca18a,
                  mid_getOriginatorPOC_3cffd47377eca18a,
                  mid_getOriginatorPhone_3cffd47377eca18a,
                  mid_getOriginatorPosition_3cffd47377eca18a,
                  mid_getStartTime_7a97f7e149e79afb,
                  mid_getStopTime_7a97f7e149e79afb,
                  mid_getTaimutcT0_557b8123390d8d0c,
                  mid_setAcmDataElements_4ccaedadb068bdeb,
                  mid_setCatalogName_f5ffdf29129ef90a,
                  mid_setEpochT0_20affcbd28542333,
                  mid_setInternationalDesignator_f5ffdf29129ef90a,
                  mid_setNextLeapEpoch_20affcbd28542333,
                  mid_setNextLeapTaimutc_10f281d777284cea,
                  mid_setObjectDesignator_f5ffdf29129ef90a,
                  mid_setOdmMessageLink_f5ffdf29129ef90a,
                  mid_setOriginatorAddress_f5ffdf29129ef90a,
                  mid_setOriginatorEmail_f5ffdf29129ef90a,
                  mid_setOriginatorPOC_f5ffdf29129ef90a,
                  mid_setOriginatorPhone_f5ffdf29129ef90a,
                  mid_setOriginatorPosition_f5ffdf29129ef90a,
                  mid_setStartTime_20affcbd28542333,
                  mid_setStopTime_20affcbd28542333,
                  mid_setTaimutcT0_10f281d777284cea,
                  mid_validate_10f281d777284cea,
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
