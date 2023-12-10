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
                mid_init$_0fa09c18fee449d5,
                mid_getCdrgdrg_dff5885c2c873297,
                mid_getCdrgn_dff5885c2c873297,
                mid_getCdrgndot_dff5885c2c873297,
                mid_getCdrgr_dff5885c2c873297,
                mid_getCdrgrdot_dff5885c2c873297,
                mid_getCdrgt_dff5885c2c873297,
                mid_getCdrgtdot_dff5885c2c873297,
                mid_getCndotn_dff5885c2c873297,
                mid_getCndotndot_dff5885c2c873297,
                mid_getCndotr_dff5885c2c873297,
                mid_getCndotrdot_dff5885c2c873297,
                mid_getCndott_dff5885c2c873297,
                mid_getCndottdot_dff5885c2c873297,
                mid_getCnn_dff5885c2c873297,
                mid_getCnr_dff5885c2c873297,
                mid_getCnt_dff5885c2c873297,
                mid_getCrdotn_dff5885c2c873297,
                mid_getCrdotr_dff5885c2c873297,
                mid_getCrdotrdot_dff5885c2c873297,
                mid_getCrdott_dff5885c2c873297,
                mid_getCrr_dff5885c2c873297,
                mid_getCsrpdrg_dff5885c2c873297,
                mid_getCsrpn_dff5885c2c873297,
                mid_getCsrpndot_dff5885c2c873297,
                mid_getCsrpr_dff5885c2c873297,
                mid_getCsrprdot_dff5885c2c873297,
                mid_getCsrpsrp_dff5885c2c873297,
                mid_getCsrpt_dff5885c2c873297,
                mid_getCsrptdot_dff5885c2c873297,
                mid_getCtdotn_dff5885c2c873297,
                mid_getCtdotr_dff5885c2c873297,
                mid_getCtdotrdot_dff5885c2c873297,
                mid_getCtdott_dff5885c2c873297,
                mid_getCtdottdot_dff5885c2c873297,
                mid_getCthrdrg_dff5885c2c873297,
                mid_getCthrn_dff5885c2c873297,
                mid_getCthrndot_dff5885c2c873297,
                mid_getCthrr_dff5885c2c873297,
                mid_getCthrrdot_dff5885c2c873297,
                mid_getCthrsrp_dff5885c2c873297,
                mid_getCthrt_dff5885c2c873297,
                mid_getCthrtdot_dff5885c2c873297,
                mid_getCthrthr_dff5885c2c873297,
                mid_getCtr_dff5885c2c873297,
                mid_getCtt_dff5885c2c873297,
                mid_getRTNCovarianceMatrix_688b496048ff947b,
                mid_setCdrgdrg_17db3a65980d3441,
                mid_setCdrgn_17db3a65980d3441,
                mid_setCdrgndot_17db3a65980d3441,
                mid_setCdrgr_17db3a65980d3441,
                mid_setCdrgrdot_17db3a65980d3441,
                mid_setCdrgt_17db3a65980d3441,
                mid_setCdrgtdot_17db3a65980d3441,
                mid_setCndotn_17db3a65980d3441,
                mid_setCndotndot_17db3a65980d3441,
                mid_setCndotr_17db3a65980d3441,
                mid_setCndotrdot_17db3a65980d3441,
                mid_setCndott_17db3a65980d3441,
                mid_setCndottdot_17db3a65980d3441,
                mid_setCnn_17db3a65980d3441,
                mid_setCnr_17db3a65980d3441,
                mid_setCnt_17db3a65980d3441,
                mid_setCovarianceMatrixEntry_1506189166690b5e,
                mid_setCrdotn_17db3a65980d3441,
                mid_setCrdotr_17db3a65980d3441,
                mid_setCrdotrdot_17db3a65980d3441,
                mid_setCrdott_17db3a65980d3441,
                mid_setCrr_17db3a65980d3441,
                mid_setCsrpdrg_17db3a65980d3441,
                mid_setCsrpn_17db3a65980d3441,
                mid_setCsrpndot_17db3a65980d3441,
                mid_setCsrpr_17db3a65980d3441,
                mid_setCsrprdot_17db3a65980d3441,
                mid_setCsrpsrp_17db3a65980d3441,
                mid_setCsrpt_17db3a65980d3441,
                mid_setCsrptdot_17db3a65980d3441,
                mid_setCtdotn_17db3a65980d3441,
                mid_setCtdotr_17db3a65980d3441,
                mid_setCtdotrdot_17db3a65980d3441,
                mid_setCtdott_17db3a65980d3441,
                mid_setCtdottdot_17db3a65980d3441,
                mid_setCthrdrg_17db3a65980d3441,
                mid_setCthrn_17db3a65980d3441,
                mid_setCthrndot_17db3a65980d3441,
                mid_setCthrr_17db3a65980d3441,
                mid_setCthrrdot_17db3a65980d3441,
                mid_setCthrsrp_17db3a65980d3441,
                mid_setCthrt_17db3a65980d3441,
                mid_setCthrtdot_17db3a65980d3441,
                mid_setCthrthr_17db3a65980d3441,
                mid_setCtr_17db3a65980d3441,
                mid_setCtt_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
