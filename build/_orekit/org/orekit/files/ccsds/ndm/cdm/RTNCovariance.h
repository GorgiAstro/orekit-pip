#ifndef org_orekit_files_ccsds_ndm_cdm_RTNCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_RTNCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
                mid_init$_0640e6acf969ed28,
                mid_getCdrgdrg_557b8123390d8d0c,
                mid_getCdrgn_557b8123390d8d0c,
                mid_getCdrgndot_557b8123390d8d0c,
                mid_getCdrgr_557b8123390d8d0c,
                mid_getCdrgrdot_557b8123390d8d0c,
                mid_getCdrgt_557b8123390d8d0c,
                mid_getCdrgtdot_557b8123390d8d0c,
                mid_getCndotn_557b8123390d8d0c,
                mid_getCndotndot_557b8123390d8d0c,
                mid_getCndotr_557b8123390d8d0c,
                mid_getCndotrdot_557b8123390d8d0c,
                mid_getCndott_557b8123390d8d0c,
                mid_getCndottdot_557b8123390d8d0c,
                mid_getCnn_557b8123390d8d0c,
                mid_getCnr_557b8123390d8d0c,
                mid_getCnt_557b8123390d8d0c,
                mid_getCrdotn_557b8123390d8d0c,
                mid_getCrdotr_557b8123390d8d0c,
                mid_getCrdotrdot_557b8123390d8d0c,
                mid_getCrdott_557b8123390d8d0c,
                mid_getCrr_557b8123390d8d0c,
                mid_getCsrpdrg_557b8123390d8d0c,
                mid_getCsrpn_557b8123390d8d0c,
                mid_getCsrpndot_557b8123390d8d0c,
                mid_getCsrpr_557b8123390d8d0c,
                mid_getCsrprdot_557b8123390d8d0c,
                mid_getCsrpsrp_557b8123390d8d0c,
                mid_getCsrpt_557b8123390d8d0c,
                mid_getCsrptdot_557b8123390d8d0c,
                mid_getCtdotn_557b8123390d8d0c,
                mid_getCtdotr_557b8123390d8d0c,
                mid_getCtdotrdot_557b8123390d8d0c,
                mid_getCtdott_557b8123390d8d0c,
                mid_getCtdottdot_557b8123390d8d0c,
                mid_getCthrdrg_557b8123390d8d0c,
                mid_getCthrn_557b8123390d8d0c,
                mid_getCthrndot_557b8123390d8d0c,
                mid_getCthrr_557b8123390d8d0c,
                mid_getCthrrdot_557b8123390d8d0c,
                mid_getCthrsrp_557b8123390d8d0c,
                mid_getCthrt_557b8123390d8d0c,
                mid_getCthrtdot_557b8123390d8d0c,
                mid_getCthrthr_557b8123390d8d0c,
                mid_getCtr_557b8123390d8d0c,
                mid_getCtt_557b8123390d8d0c,
                mid_getRTNCovarianceMatrix_70a207fcbc031df2,
                mid_setCdrgdrg_10f281d777284cea,
                mid_setCdrgn_10f281d777284cea,
                mid_setCdrgndot_10f281d777284cea,
                mid_setCdrgr_10f281d777284cea,
                mid_setCdrgrdot_10f281d777284cea,
                mid_setCdrgt_10f281d777284cea,
                mid_setCdrgtdot_10f281d777284cea,
                mid_setCndotn_10f281d777284cea,
                mid_setCndotndot_10f281d777284cea,
                mid_setCndotr_10f281d777284cea,
                mid_setCndotrdot_10f281d777284cea,
                mid_setCndott_10f281d777284cea,
                mid_setCndottdot_10f281d777284cea,
                mid_setCnn_10f281d777284cea,
                mid_setCnr_10f281d777284cea,
                mid_setCnt_10f281d777284cea,
                mid_setCovarianceMatrixEntry_754312f3734d6e2f,
                mid_setCrdotn_10f281d777284cea,
                mid_setCrdotr_10f281d777284cea,
                mid_setCrdotrdot_10f281d777284cea,
                mid_setCrdott_10f281d777284cea,
                mid_setCrr_10f281d777284cea,
                mid_setCsrpdrg_10f281d777284cea,
                mid_setCsrpn_10f281d777284cea,
                mid_setCsrpndot_10f281d777284cea,
                mid_setCsrpr_10f281d777284cea,
                mid_setCsrprdot_10f281d777284cea,
                mid_setCsrpsrp_10f281d777284cea,
                mid_setCsrpt_10f281d777284cea,
                mid_setCsrptdot_10f281d777284cea,
                mid_setCtdotn_10f281d777284cea,
                mid_setCtdotr_10f281d777284cea,
                mid_setCtdotrdot_10f281d777284cea,
                mid_setCtdott_10f281d777284cea,
                mid_setCtdottdot_10f281d777284cea,
                mid_setCthrdrg_10f281d777284cea,
                mid_setCthrn_10f281d777284cea,
                mid_setCthrndot_10f281d777284cea,
                mid_setCthrr_10f281d777284cea,
                mid_setCthrrdot_10f281d777284cea,
                mid_setCthrsrp_10f281d777284cea,
                mid_setCthrt_10f281d777284cea,
                mid_setCthrtdot_10f281d777284cea,
                mid_setCthrthr_10f281d777284cea,
                mid_setCtr_10f281d777284cea,
                mid_setCtt_10f281d777284cea,
                mid_validate_10f281d777284cea,
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
