#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemSegment_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemSegment_H

#include "org/orekit/files/ccsds/section/Segment.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemMetadata;
              class AemData;
            }
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class AemSegment : public ::org::orekit::files::ccsds::section::Segment {
               public:
                enum {
                  mid_init$_449d7e5cfd695677,
                  mid_getAngularCoordinates_0d9551367f7ecdef,
                  mid_getAttitudeProvider_b44a04493534d299,
                  mid_getAvailableDerivatives_c2e9b2b1c0db39b3,
                  mid_getInterpolationMethod_3cffd47377eca18a,
                  mid_getInterpolationSamples_412668abc8d889e9,
                  mid_getReferenceFrame_6c9bc0a928c56d4e,
                  mid_getStart_7a97f7e149e79afb,
                  mid_getStop_7a97f7e149e79afb,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemSegment(jobject obj) : ::org::orekit::files::ccsds::section::Segment(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemSegment(const AemSegment& obj) : ::org::orekit::files::ccsds::section::Segment(obj) {}

                AemSegment(const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata &, const ::org::orekit::files::ccsds::ndm::adm::aem::AemData &);

                ::java::util::List getAngularCoordinates() const;
                ::org::orekit::attitudes::BoundedAttitudeProvider getAttitudeProvider() const;
                ::org::orekit::utils::AngularDerivativesFilter getAvailableDerivatives() const;
                ::java::lang::String getInterpolationMethod() const;
                jint getInterpolationSamples() const;
                ::org::orekit::frames::Frame getReferenceFrame() const;
                ::org::orekit::time::AbsoluteDate getStart() const;
                ::org::orekit::time::AbsoluteDate getStop() const;
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
          namespace adm {
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemSegment);
              extern PyTypeObject *PY_TYPE(AemSegment);

              class t_AemSegment {
              public:
                PyObject_HEAD
                AemSegment object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_AemSegment *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AemSegment&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AemSegment&, PyTypeObject *, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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
