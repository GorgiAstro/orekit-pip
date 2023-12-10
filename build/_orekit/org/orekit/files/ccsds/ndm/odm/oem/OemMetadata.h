#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemMetadata_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class InterpolationMethod;
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
          namespace odm {
            namespace oem {

              class OemMetadata : public ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata {
               public:
                enum {
                  mid_init$_99803b0791f320ff,
                  mid_getInterpolationDegree_570ce0828f81a2c1,
                  mid_getInterpolationMethod_94ea91241555a59e,
                  mid_getStartTime_85703d13e302437e,
                  mid_getStopTime_85703d13e302437e,
                  mid_getUseableStartTime_85703d13e302437e,
                  mid_getUseableStopTime_85703d13e302437e,
                  mid_setInterpolationDegree_99803b0791f320ff,
                  mid_setInterpolationMethod_f05dcf712ccb2c7b,
                  mid_setStartTime_600a2a61652bc473,
                  mid_setStopTime_600a2a61652bc473,
                  mid_setUseableStartTime_600a2a61652bc473,
                  mid_setUseableStopTime_600a2a61652bc473,
                  mid_validate_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OemMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemMetadata(const OemMetadata& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(obj) {}

                OemMetadata(jint);

                jint getInterpolationDegree() const;
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod getInterpolationMethod() const;
                ::org::orekit::time::AbsoluteDate getStartTime() const;
                ::org::orekit::time::AbsoluteDate getStopTime() const;
                ::org::orekit::time::AbsoluteDate getUseableStartTime() const;
                ::org::orekit::time::AbsoluteDate getUseableStopTime() const;
                void setInterpolationDegree(jint) const;
                void setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod &) const;
                void setStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setStopTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setUseableStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setUseableStopTime(const ::org::orekit::time::AbsoluteDate &) const;
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
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(OemMetadata);
              extern PyTypeObject *PY_TYPE(OemMetadata);

              class t_OemMetadata {
              public:
                PyObject_HEAD
                OemMetadata object;
                static PyObject *wrap_Object(const OemMetadata&);
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
