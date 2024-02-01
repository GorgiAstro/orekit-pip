#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemMetadata_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
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
                  mid_init$_8fd427ab23829bf5,
                  mid_getInterpolationDegree_d6ab429752e7c267,
                  mid_getInterpolationMethod_5c787fe19a1e0bf9,
                  mid_getStartTime_80e11148db499dda,
                  mid_getStopTime_80e11148db499dda,
                  mid_getUseableStartTime_80e11148db499dda,
                  mid_getUseableStopTime_80e11148db499dda,
                  mid_setInterpolationDegree_8fd427ab23829bf5,
                  mid_setInterpolationMethod_373a113be1fa06ae,
                  mid_setStartTime_8497861b879c83f7,
                  mid_setStopTime_8497861b879c83f7,
                  mid_setUseableStartTime_8497861b879c83f7,
                  mid_setUseableStopTime_8497861b879c83f7,
                  mid_validate_1ad26e8c8c0cd65b,
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
