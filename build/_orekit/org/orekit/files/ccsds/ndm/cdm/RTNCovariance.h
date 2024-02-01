#ifndef org_orekit_files_ccsds_ndm_cdm_RTNCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_RTNCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class RTNCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_getCdrgdrg_9981f74b2d109da6,
                mid_getCdrgn_9981f74b2d109da6,
                mid_getCdrgndot_9981f74b2d109da6,
                mid_getCdrgr_9981f74b2d109da6,
                mid_getCdrgrdot_9981f74b2d109da6,
                mid_getCdrgt_9981f74b2d109da6,
                mid_getCdrgtdot_9981f74b2d109da6,
                mid_getCndotn_9981f74b2d109da6,
                mid_getCndotndot_9981f74b2d109da6,
                mid_getCndotr_9981f74b2d109da6,
                mid_getCndotrdot_9981f74b2d109da6,
                mid_getCndott_9981f74b2d109da6,
                mid_getCndottdot_9981f74b2d109da6,
                mid_getCnn_9981f74b2d109da6,
                mid_getCnr_9981f74b2d109da6,
                mid_getCnt_9981f74b2d109da6,
                mid_getCrdotn_9981f74b2d109da6,
                mid_getCrdotr_9981f74b2d109da6,
                mid_getCrdotrdot_9981f74b2d109da6,
                mid_getCrdott_9981f74b2d109da6,
                mid_getCrr_9981f74b2d109da6,
                mid_getCsrpdrg_9981f74b2d109da6,
                mid_getCsrpn_9981f74b2d109da6,
                mid_getCsrpndot_9981f74b2d109da6,
                mid_getCsrpr_9981f74b2d109da6,
                mid_getCsrprdot_9981f74b2d109da6,
                mid_getCsrpsrp_9981f74b2d109da6,
                mid_getCsrpt_9981f74b2d109da6,
                mid_getCsrptdot_9981f74b2d109da6,
                mid_getCtdotn_9981f74b2d109da6,
                mid_getCtdotr_9981f74b2d109da6,
                mid_getCtdotrdot_9981f74b2d109da6,
                mid_getCtdott_9981f74b2d109da6,
                mid_getCtdottdot_9981f74b2d109da6,
                mid_getCthrdrg_9981f74b2d109da6,
                mid_getCthrn_9981f74b2d109da6,
                mid_getCthrndot_9981f74b2d109da6,
                mid_getCthrr_9981f74b2d109da6,
                mid_getCthrrdot_9981f74b2d109da6,
                mid_getCthrsrp_9981f74b2d109da6,
                mid_getCthrt_9981f74b2d109da6,
                mid_getCthrtdot_9981f74b2d109da6,
                mid_getCthrthr_9981f74b2d109da6,
                mid_getCtr_9981f74b2d109da6,
                mid_getCtt_9981f74b2d109da6,
                mid_getRTNCovarianceMatrix_b2eebabce70526d8,
                mid_setCdrgdrg_1ad26e8c8c0cd65b,
                mid_setCdrgn_1ad26e8c8c0cd65b,
                mid_setCdrgndot_1ad26e8c8c0cd65b,
                mid_setCdrgr_1ad26e8c8c0cd65b,
                mid_setCdrgrdot_1ad26e8c8c0cd65b,
                mid_setCdrgt_1ad26e8c8c0cd65b,
                mid_setCdrgtdot_1ad26e8c8c0cd65b,
                mid_setCndotn_1ad26e8c8c0cd65b,
                mid_setCndotndot_1ad26e8c8c0cd65b,
                mid_setCndotr_1ad26e8c8c0cd65b,
                mid_setCndotrdot_1ad26e8c8c0cd65b,
                mid_setCndott_1ad26e8c8c0cd65b,
                mid_setCndottdot_1ad26e8c8c0cd65b,
                mid_setCnn_1ad26e8c8c0cd65b,
                mid_setCnr_1ad26e8c8c0cd65b,
                mid_setCnt_1ad26e8c8c0cd65b,
                mid_setCovarianceMatrixEntry_e98d7b3e971b6087,
                mid_setCrdotn_1ad26e8c8c0cd65b,
                mid_setCrdotr_1ad26e8c8c0cd65b,
                mid_setCrdotrdot_1ad26e8c8c0cd65b,
                mid_setCrdott_1ad26e8c8c0cd65b,
                mid_setCrr_1ad26e8c8c0cd65b,
                mid_setCsrpdrg_1ad26e8c8c0cd65b,
                mid_setCsrpn_1ad26e8c8c0cd65b,
                mid_setCsrpndot_1ad26e8c8c0cd65b,
                mid_setCsrpr_1ad26e8c8c0cd65b,
                mid_setCsrprdot_1ad26e8c8c0cd65b,
                mid_setCsrpsrp_1ad26e8c8c0cd65b,
                mid_setCsrpt_1ad26e8c8c0cd65b,
                mid_setCsrptdot_1ad26e8c8c0cd65b,
                mid_setCtdotn_1ad26e8c8c0cd65b,
                mid_setCtdotr_1ad26e8c8c0cd65b,
                mid_setCtdotrdot_1ad26e8c8c0cd65b,
                mid_setCtdott_1ad26e8c8c0cd65b,
                mid_setCtdottdot_1ad26e8c8c0cd65b,
                mid_setCthrdrg_1ad26e8c8c0cd65b,
                mid_setCthrn_1ad26e8c8c0cd65b,
                mid_setCthrndot_1ad26e8c8c0cd65b,
                mid_setCthrr_1ad26e8c8c0cd65b,
                mid_setCthrrdot_1ad26e8c8c0cd65b,
                mid_setCthrsrp_1ad26e8c8c0cd65b,
                mid_setCthrt_1ad26e8c8c0cd65b,
                mid_setCthrtdot_1ad26e8c8c0cd65b,
                mid_setCthrthr_1ad26e8c8c0cd65b,
                mid_setCtr_1ad26e8c8c0cd65b,
                mid_setCtt_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RTNCovariance(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RTNCovariance(const RTNCovariance& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              RTNCovariance();

              jdouble getCdrgdrg() const;
              jdouble getCdrgn() const;
              jdouble getCdrgndot() const;
              jdouble getCdrgr() const;
              jdouble getCdrgrdot() const;
              jdouble getCdrgt() const;
              jdouble getCdrgtdot() const;
              jdouble getCndotn() const;
              jdouble getCndotndot() const;
              jdouble getCndotr() const;
              jdouble getCndotrdot() const;
              jdouble getCndott() const;
              jdouble getCndottdot() const;
              jdouble getCnn() const;
              jdouble getCnr() const;
              jdouble getCnt() const;
              jdouble getCrdotn() const;
              jdouble getCrdotr() const;
              jdouble getCrdotrdot() const;
              jdouble getCrdott() const;
              jdouble getCrr() const;
              jdouble getCsrpdrg() const;
              jdouble getCsrpn() const;
              jdouble getCsrpndot() const;
              jdouble getCsrpr() const;
              jdouble getCsrprdot() const;
              jdouble getCsrpsrp() const;
              jdouble getCsrpt() const;
              jdouble getCsrptdot() const;
              jdouble getCtdotn() const;
              jdouble getCtdotr() const;
              jdouble getCtdotrdot() const;
              jdouble getCtdott() const;
              jdouble getCtdottdot() const;
              jdouble getCthrdrg() const;
              jdouble getCthrn() const;
              jdouble getCthrndot() const;
              jdouble getCthrr() const;
              jdouble getCthrrdot() const;
              jdouble getCthrsrp() const;
              jdouble getCthrt() const;
              jdouble getCthrtdot() const;
              jdouble getCthrthr() const;
              jdouble getCtr() const;
              jdouble getCtt() const;
              ::org::hipparchus::linear::RealMatrix getRTNCovarianceMatrix() const;
              void setCdrgdrg(jdouble) const;
              void setCdrgn(jdouble) const;
              void setCdrgndot(jdouble) const;
              void setCdrgr(jdouble) const;
              void setCdrgrdot(jdouble) const;
              void setCdrgt(jdouble) const;
              void setCdrgtdot(jdouble) const;
              void setCndotn(jdouble) const;
              void setCndotndot(jdouble) const;
              void setCndotr(jdouble) const;
              void setCndotrdot(jdouble) const;
              void setCndott(jdouble) const;
              void setCndottdot(jdouble) const;
              void setCnn(jdouble) const;
              void setCnr(jdouble) const;
              void setCnt(jdouble) const;
              void setCovarianceMatrixEntry(jint, jint, jdouble) const;
              void setCrdotn(jdouble) const;
              void setCrdotr(jdouble) const;
              void setCrdotrdot(jdouble) const;
              void setCrdott(jdouble) const;
              void setCrr(jdouble) const;
              void setCsrpdrg(jdouble) const;
              void setCsrpn(jdouble) const;
              void setCsrpndot(jdouble) const;
              void setCsrpr(jdouble) const;
              void setCsrprdot(jdouble) const;
              void setCsrpsrp(jdouble) const;
              void setCsrpt(jdouble) const;
              void setCsrptdot(jdouble) const;
              void setCtdotn(jdouble) const;
              void setCtdotr(jdouble) const;
              void setCtdotrdot(jdouble) const;
              void setCtdott(jdouble) const;
              void setCtdottdot(jdouble) const;
              void setCthrdrg(jdouble) const;
              void setCthrn(jdouble) const;
              void setCthrndot(jdouble) const;
              void setCthrr(jdouble) const;
              void setCthrrdot(jdouble) const;
              void setCthrsrp(jdouble) const;
              void setCthrt(jdouble) const;
              void setCthrtdot(jdouble) const;
              void setCthrthr(jdouble) const;
              void setCtr(jdouble) const;
              void setCtt(jdouble) const;
              void validate(jdouble) const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(RTNCovariance);
            extern PyTypeObject *PY_TYPE(RTNCovariance);

            class t_RTNCovariance {
            public:
              PyObject_HEAD
              RTNCovariance object;
              static PyObject *wrap_Object(const RTNCovariance&);
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

#endif
