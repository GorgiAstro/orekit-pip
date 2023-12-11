#ifndef org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H

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

            class XYZCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_ed2afdb8506b9742,
                mid_getCdrgdrg_557b8123390d8d0c,
                mid_getCdrgx_557b8123390d8d0c,
                mid_getCdrgxdot_557b8123390d8d0c,
                mid_getCdrgy_557b8123390d8d0c,
                mid_getCdrgydot_557b8123390d8d0c,
                mid_getCdrgz_557b8123390d8d0c,
                mid_getCdrgzdot_557b8123390d8d0c,
                mid_getCsrpdrg_557b8123390d8d0c,
                mid_getCsrpsrp_557b8123390d8d0c,
                mid_getCsrpx_557b8123390d8d0c,
                mid_getCsrpxdot_557b8123390d8d0c,
                mid_getCsrpy_557b8123390d8d0c,
                mid_getCsrpydot_557b8123390d8d0c,
                mid_getCsrpz_557b8123390d8d0c,
                mid_getCsrpzdot_557b8123390d8d0c,
                mid_getCthrdrg_557b8123390d8d0c,
                mid_getCthrsrp_557b8123390d8d0c,
                mid_getCthrthr_557b8123390d8d0c,
                mid_getCthrx_557b8123390d8d0c,
                mid_getCthrxdot_557b8123390d8d0c,
                mid_getCthry_557b8123390d8d0c,
                mid_getCthrydot_557b8123390d8d0c,
                mid_getCthrz_557b8123390d8d0c,
                mid_getCthrzdot_557b8123390d8d0c,
                mid_getCxdotx_557b8123390d8d0c,
                mid_getCxdotxdot_557b8123390d8d0c,
                mid_getCxdoty_557b8123390d8d0c,
                mid_getCxdotz_557b8123390d8d0c,
                mid_getCxx_557b8123390d8d0c,
                mid_getCydotx_557b8123390d8d0c,
                mid_getCydotxdot_557b8123390d8d0c,
                mid_getCydoty_557b8123390d8d0c,
                mid_getCydotydot_557b8123390d8d0c,
                mid_getCydotz_557b8123390d8d0c,
                mid_getCyx_557b8123390d8d0c,
                mid_getCyy_557b8123390d8d0c,
                mid_getCzdotx_557b8123390d8d0c,
                mid_getCzdotxdot_557b8123390d8d0c,
                mid_getCzdoty_557b8123390d8d0c,
                mid_getCzdotydot_557b8123390d8d0c,
                mid_getCzdotz_557b8123390d8d0c,
                mid_getCzdotzdot_557b8123390d8d0c,
                mid_getCzx_557b8123390d8d0c,
                mid_getCzy_557b8123390d8d0c,
                mid_getCzz_557b8123390d8d0c,
                mid_getXYZCovarianceMatrix_70a207fcbc031df2,
                mid_isCovXYZset_89b302893bdbe1f1,
                mid_setCdrgdrg_10f281d777284cea,
                mid_setCdrgx_10f281d777284cea,
                mid_setCdrgxdot_10f281d777284cea,
                mid_setCdrgy_10f281d777284cea,
                mid_setCdrgydot_10f281d777284cea,
                mid_setCdrgz_10f281d777284cea,
                mid_setCdrgzdot_10f281d777284cea,
                mid_setCovarianceMatrixEntry_754312f3734d6e2f,
                mid_setCsrpdrg_10f281d777284cea,
                mid_setCsrpsrp_10f281d777284cea,
                mid_setCsrpx_10f281d777284cea,
                mid_setCsrpxdot_10f281d777284cea,
                mid_setCsrpy_10f281d777284cea,
                mid_setCsrpydot_10f281d777284cea,
                mid_setCsrpz_10f281d777284cea,
                mid_setCsrpzdot_10f281d777284cea,
                mid_setCthrdrg_10f281d777284cea,
                mid_setCthrsrp_10f281d777284cea,
                mid_setCthrthr_10f281d777284cea,
                mid_setCthrx_10f281d777284cea,
                mid_setCthrxdot_10f281d777284cea,
                mid_setCthry_10f281d777284cea,
                mid_setCthrydot_10f281d777284cea,
                mid_setCthrz_10f281d777284cea,
                mid_setCthrzdot_10f281d777284cea,
                mid_setCxdotx_10f281d777284cea,
                mid_setCxdotxdot_10f281d777284cea,
                mid_setCxdoty_10f281d777284cea,
                mid_setCxdotz_10f281d777284cea,
                mid_setCxx_10f281d777284cea,
                mid_setCydotx_10f281d777284cea,
                mid_setCydotxdot_10f281d777284cea,
                mid_setCydoty_10f281d777284cea,
                mid_setCydotydot_10f281d777284cea,
                mid_setCydotz_10f281d777284cea,
                mid_setCyx_10f281d777284cea,
                mid_setCyy_10f281d777284cea,
                mid_setCzdotx_10f281d777284cea,
                mid_setCzdotxdot_10f281d777284cea,
                mid_setCzdoty_10f281d777284cea,
                mid_setCzdotydot_10f281d777284cea,
                mid_setCzdotz_10f281d777284cea,
                mid_setCzdotzdot_10f281d777284cea,
                mid_setCzx_10f281d777284cea,
                mid_setCzy_10f281d777284cea,
                mid_setCzz_10f281d777284cea,
                mid_validate_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XYZCovariance(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XYZCovariance(const XYZCovariance& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              XYZCovariance(jboolean);

              jdouble getCdrgdrg() const;
              jdouble getCdrgx() const;
              jdouble getCdrgxdot() const;
              jdouble getCdrgy() const;
              jdouble getCdrgydot() const;
              jdouble getCdrgz() const;
              jdouble getCdrgzdot() const;
              jdouble getCsrpdrg() const;
              jdouble getCsrpsrp() const;
              jdouble getCsrpx() const;
              jdouble getCsrpxdot() const;
              jdouble getCsrpy() const;
              jdouble getCsrpydot() const;
              jdouble getCsrpz() const;
              jdouble getCsrpzdot() const;
              jdouble getCthrdrg() const;
              jdouble getCthrsrp() const;
              jdouble getCthrthr() const;
              jdouble getCthrx() const;
              jdouble getCthrxdot() const;
              jdouble getCthry() const;
              jdouble getCthrydot() const;
              jdouble getCthrz() const;
              jdouble getCthrzdot() const;
              jdouble getCxdotx() const;
              jdouble getCxdotxdot() const;
              jdouble getCxdoty() const;
              jdouble getCxdotz() const;
              jdouble getCxx() const;
              jdouble getCydotx() const;
              jdouble getCydotxdot() const;
              jdouble getCydoty() const;
              jdouble getCydotydot() const;
              jdouble getCydotz() const;
              jdouble getCyx() const;
              jdouble getCyy() const;
              jdouble getCzdotx() const;
              jdouble getCzdotxdot() const;
              jdouble getCzdoty() const;
              jdouble getCzdotydot() const;
              jdouble getCzdotz() const;
              jdouble getCzdotzdot() const;
              jdouble getCzx() const;
              jdouble getCzy() const;
              jdouble getCzz() const;
              ::org::hipparchus::linear::RealMatrix getXYZCovarianceMatrix() const;
              jboolean isCovXYZset() const;
              void setCdrgdrg(jdouble) const;
              void setCdrgx(jdouble) const;
              void setCdrgxdot(jdouble) const;
              void setCdrgy(jdouble) const;
              void setCdrgydot(jdouble) const;
              void setCdrgz(jdouble) const;
              void setCdrgzdot(jdouble) const;
              void setCovarianceMatrixEntry(jint, jint, jdouble) const;
              void setCsrpdrg(jdouble) const;
              void setCsrpsrp(jdouble) const;
              void setCsrpx(jdouble) const;
              void setCsrpxdot(jdouble) const;
              void setCsrpy(jdouble) const;
              void setCsrpydot(jdouble) const;
              void setCsrpz(jdouble) const;
              void setCsrpzdot(jdouble) const;
              void setCthrdrg(jdouble) const;
              void setCthrsrp(jdouble) const;
              void setCthrthr(jdouble) const;
              void setCthrx(jdouble) const;
              void setCthrxdot(jdouble) const;
              void setCthry(jdouble) const;
              void setCthrydot(jdouble) const;
              void setCthrz(jdouble) const;
              void setCthrzdot(jdouble) const;
              void setCxdotx(jdouble) const;
              void setCxdotxdot(jdouble) const;
              void setCxdoty(jdouble) const;
              void setCxdotz(jdouble) const;
              void setCxx(jdouble) const;
              void setCydotx(jdouble) const;
              void setCydotxdot(jdouble) const;
              void setCydoty(jdouble) const;
              void setCydotydot(jdouble) const;
              void setCydotz(jdouble) const;
              void setCyx(jdouble) const;
              void setCyy(jdouble) const;
              void setCzdotx(jdouble) const;
              void setCzdotxdot(jdouble) const;
              void setCzdoty(jdouble) const;
              void setCzdotydot(jdouble) const;
              void setCzdotz(jdouble) const;
              void setCzdotzdot(jdouble) const;
              void setCzx(jdouble) const;
              void setCzy(jdouble) const;
              void setCzz(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(XYZCovariance);
            extern PyTypeObject *PY_TYPE(XYZCovariance);

            class t_XYZCovariance {
            public:
              PyObject_HEAD
              XYZCovariance object;
              static PyObject *wrap_Object(const XYZCovariance&);
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
