#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemSegment_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemSegment_H

#include "org/orekit/files/ccsds/section/Segment.h"

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
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
          namespace adm {
            namespace aem {

              class AemSegment : public ::org::orekit::files::ccsds::section::Segment {
               public:
                enum {
                  mid_init$_93672d3934b0f497,
                  mid_getAngularCoordinates_d751c1a57012b438,
                  mid_getAttitudeProvider_228bb29d53a1472e,
                  mid_getAvailableDerivatives_410860c8cd87dc25,
                  mid_getInterpolationMethod_d2c8eb4129821f0e,
                  mid_getInterpolationSamples_d6ab429752e7c267,
                  mid_getReferenceFrame_cb151471db4570f0,
                  mid_getStart_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
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
