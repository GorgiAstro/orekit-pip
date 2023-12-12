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
                  mid_init$_a3da1a935cb37f7b,
                  mid_getInterpolationDegree_412668abc8d889e9,
                  mid_getInterpolationMethod_8efb284b7b2c86d2,
                  mid_getStartTime_7a97f7e149e79afb,
                  mid_getStopTime_7a97f7e149e79afb,
                  mid_getUseableStartTime_7a97f7e149e79afb,
                  mid_getUseableStopTime_7a97f7e149e79afb,
                  mid_setInterpolationDegree_a3da1a935cb37f7b,
                  mid_setInterpolationMethod_db5b325923fed9a5,
                  mid_setStartTime_20affcbd28542333,
                  mid_setStopTime_20affcbd28542333,
                  mid_setUseableStartTime_20affcbd28542333,
                  mid_setUseableStopTime_20affcbd28542333,
                  mid_validate_10f281d777284cea,
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
