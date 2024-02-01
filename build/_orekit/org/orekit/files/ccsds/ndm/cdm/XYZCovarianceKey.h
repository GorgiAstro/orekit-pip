#ifndef org_orekit_files_ccsds_ndm_cdm_XYZCovarianceKey_H
#define org_orekit_files_ccsds_ndm_cdm_XYZCovarianceKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class XYZCovariance;
            class XYZCovarianceKey;
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
      }
    }
  }
}
namespace java {
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
          namespace cdm {

            class XYZCovarianceKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_a87bb454dde4bd0c,
                mid_valueOf_43054325e87a84d7,
                mid_values_06cd62e0ea3f3c49,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XYZCovarianceKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XYZCovarianceKey(const XYZCovarianceKey& obj) : ::java::lang::Enum(obj) {}

              static XYZCovarianceKey *CDRG_DRG;
              static XYZCovarianceKey *CDRG_X;
              static XYZCovarianceKey *CDRG_XDOT;
              static XYZCovarianceKey *CDRG_Y;
              static XYZCovarianceKey *CDRG_YDOT;
              static XYZCovarianceKey *CDRG_Z;
              static XYZCovarianceKey *CDRG_ZDOT;
              static XYZCovarianceKey *COMMENT;
              static XYZCovarianceKey *CSRP_DRG;
              static XYZCovarianceKey *CSRP_SRP;
              static XYZCovarianceKey *CSRP_X;
              static XYZCovarianceKey *CSRP_XDOT;
              static XYZCovarianceKey *CSRP_Y;
              static XYZCovarianceKey *CSRP_YDOT;
              static XYZCovarianceKey *CSRP_Z;
              static XYZCovarianceKey *CSRP_ZDOT;
              static XYZCovarianceKey *CTHR_DRG;
              static XYZCovarianceKey *CTHR_SRP;
              static XYZCovarianceKey *CTHR_THR;
              static XYZCovarianceKey *CTHR_X;
              static XYZCovarianceKey *CTHR_XDOT;
              static XYZCovarianceKey *CTHR_Y;
              static XYZCovarianceKey *CTHR_YDOT;
              static XYZCovarianceKey *CTHR_Z;
              static XYZCovarianceKey *CTHR_ZDOT;
              static XYZCovarianceKey *CXDOT_X;
              static XYZCovarianceKey *CXDOT_XDOT;
              static XYZCovarianceKey *CXDOT_Y;
              static XYZCovarianceKey *CXDOT_Z;
              static XYZCovarianceKey *CX_X;
              static XYZCovarianceKey *CYDOT_X;
              static XYZCovarianceKey *CYDOT_XDOT;
              static XYZCovarianceKey *CYDOT_Y;
              static XYZCovarianceKey *CYDOT_YDOT;
              static XYZCovarianceKey *CYDOT_Z;
              static XYZCovarianceKey *CY_X;
              static XYZCovarianceKey *CY_Y;
              static XYZCovarianceKey *CZDOT_X;
              static XYZCovarianceKey *CZDOT_XDOT;
              static XYZCovarianceKey *CZDOT_Y;
              static XYZCovarianceKey *CZDOT_YDOT;
              static XYZCovarianceKey *CZDOT_Z;
              static XYZCovarianceKey *CZDOT_ZDOT;
              static XYZCovarianceKey *CZ_X;
              static XYZCovarianceKey *CZ_Y;
              static XYZCovarianceKey *CZ_Z;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance &) const;
              static XYZCovarianceKey valueOf(const ::java::lang::String &);
              static JArray< XYZCovarianceKey > values();
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
            extern PyType_Def PY_TYPE_DEF(XYZCovarianceKey);
            extern PyTypeObject *PY_TYPE(XYZCovarianceKey);

            class t_XYZCovarianceKey {
            public:
              PyObject_HEAD
              XYZCovarianceKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_XYZCovarianceKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const XYZCovarianceKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const XYZCovarianceKey&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
