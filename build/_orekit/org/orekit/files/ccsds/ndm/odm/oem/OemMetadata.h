#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemMetadata_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                  mid_init$_44ed599e93e8a30c,
                  mid_getInterpolationDegree_55546ef6a647f39b,
                  mid_getInterpolationMethod_0f2522b3fe45d99f,
                  mid_getStartTime_c325492395d89b24,
                  mid_getStopTime_c325492395d89b24,
                  mid_getUseableStartTime_c325492395d89b24,
                  mid_getUseableStopTime_c325492395d89b24,
                  mid_setInterpolationDegree_44ed599e93e8a30c,
                  mid_setInterpolationMethod_da218530d7e28b54,
                  mid_setStartTime_02135a6ef25adb4b,
                  mid_setStopTime_02135a6ef25adb4b,
                  mid_setUseableStartTime_02135a6ef25adb4b,
                  mid_setUseableStopTime_02135a6ef25adb4b,
                  mid_validate_8ba9fe7a847cecad,
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
