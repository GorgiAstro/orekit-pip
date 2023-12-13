#ifndef org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H

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

            class XYZCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_fcb96c98de6fad04,
                mid_getCdrgdrg_b74f83833fdad017,
                mid_getCdrgx_b74f83833fdad017,
                mid_getCdrgxdot_b74f83833fdad017,
                mid_getCdrgy_b74f83833fdad017,
                mid_getCdrgydot_b74f83833fdad017,
                mid_getCdrgz_b74f83833fdad017,
                mid_getCdrgzdot_b74f83833fdad017,
                mid_getCsrpdrg_b74f83833fdad017,
                mid_getCsrpsrp_b74f83833fdad017,
                mid_getCsrpx_b74f83833fdad017,
                mid_getCsrpxdot_b74f83833fdad017,
                mid_getCsrpy_b74f83833fdad017,
                mid_getCsrpydot_b74f83833fdad017,
                mid_getCsrpz_b74f83833fdad017,
                mid_getCsrpzdot_b74f83833fdad017,
                mid_getCthrdrg_b74f83833fdad017,
                mid_getCthrsrp_b74f83833fdad017,
                mid_getCthrthr_b74f83833fdad017,
                mid_getCthrx_b74f83833fdad017,
                mid_getCthrxdot_b74f83833fdad017,
                mid_getCthry_b74f83833fdad017,
                mid_getCthrydot_b74f83833fdad017,
                mid_getCthrz_b74f83833fdad017,
                mid_getCthrzdot_b74f83833fdad017,
                mid_getCxdotx_b74f83833fdad017,
                mid_getCxdotxdot_b74f83833fdad017,
                mid_getCxdoty_b74f83833fdad017,
                mid_getCxdotz_b74f83833fdad017,
                mid_getCxx_b74f83833fdad017,
                mid_getCydotx_b74f83833fdad017,
                mid_getCydotxdot_b74f83833fdad017,
                mid_getCydoty_b74f83833fdad017,
                mid_getCydotydot_b74f83833fdad017,
                mid_getCydotz_b74f83833fdad017,
                mid_getCyx_b74f83833fdad017,
                mid_getCyy_b74f83833fdad017,
                mid_getCzdotx_b74f83833fdad017,
                mid_getCzdotxdot_b74f83833fdad017,
                mid_getCzdoty_b74f83833fdad017,
                mid_getCzdotydot_b74f83833fdad017,
                mid_getCzdotz_b74f83833fdad017,
                mid_getCzdotzdot_b74f83833fdad017,
                mid_getCzx_b74f83833fdad017,
                mid_getCzy_b74f83833fdad017,
                mid_getCzz_b74f83833fdad017,
                mid_getXYZCovarianceMatrix_f77d745f2128c391,
                mid_isCovXYZset_9ab94ac1dc23b105,
                mid_setCdrgdrg_8ba9fe7a847cecad,
                mid_setCdrgx_8ba9fe7a847cecad,
                mid_setCdrgxdot_8ba9fe7a847cecad,
                mid_setCdrgy_8ba9fe7a847cecad,
                mid_setCdrgydot_8ba9fe7a847cecad,
                mid_setCdrgz_8ba9fe7a847cecad,
                mid_setCdrgzdot_8ba9fe7a847cecad,
                mid_setCovarianceMatrixEntry_94fe8d9ffeb50676,
                mid_setCsrpdrg_8ba9fe7a847cecad,
                mid_setCsrpsrp_8ba9fe7a847cecad,
                mid_setCsrpx_8ba9fe7a847cecad,
                mid_setCsrpxdot_8ba9fe7a847cecad,
                mid_setCsrpy_8ba9fe7a847cecad,
                mid_setCsrpydot_8ba9fe7a847cecad,
                mid_setCsrpz_8ba9fe7a847cecad,
                mid_setCsrpzdot_8ba9fe7a847cecad,
                mid_setCthrdrg_8ba9fe7a847cecad,
                mid_setCthrsrp_8ba9fe7a847cecad,
                mid_setCthrthr_8ba9fe7a847cecad,
                mid_setCthrx_8ba9fe7a847cecad,
                mid_setCthrxdot_8ba9fe7a847cecad,
                mid_setCthry_8ba9fe7a847cecad,
                mid_setCthrydot_8ba9fe7a847cecad,
                mid_setCthrz_8ba9fe7a847cecad,
                mid_setCthrzdot_8ba9fe7a847cecad,
                mid_setCxdotx_8ba9fe7a847cecad,
                mid_setCxdotxdot_8ba9fe7a847cecad,
                mid_setCxdoty_8ba9fe7a847cecad,
                mid_setCxdotz_8ba9fe7a847cecad,
                mid_setCxx_8ba9fe7a847cecad,
                mid_setCydotx_8ba9fe7a847cecad,
                mid_setCydotxdot_8ba9fe7a847cecad,
                mid_setCydoty_8ba9fe7a847cecad,
                mid_setCydotydot_8ba9fe7a847cecad,
                mid_setCydotz_8ba9fe7a847cecad,
                mid_setCyx_8ba9fe7a847cecad,
                mid_setCyy_8ba9fe7a847cecad,
                mid_setCzdotx_8ba9fe7a847cecad,
                mid_setCzdotxdot_8ba9fe7a847cecad,
                mid_setCzdoty_8ba9fe7a847cecad,
                mid_setCzdotydot_8ba9fe7a847cecad,
                mid_setCzdotz_8ba9fe7a847cecad,
                mid_setCzdotzdot_8ba9fe7a847cecad,
                mid_setCzx_8ba9fe7a847cecad,
                mid_setCzy_8ba9fe7a847cecad,
                mid_setCzz_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
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
