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
              class AemData;
              class AemMetadata;
            }
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
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
                  mid_init$_8c9ac597189a8a73,
                  mid_getAngularCoordinates_2afa36052df4765d,
                  mid_getAttitudeProvider_f95b60a986adb964,
                  mid_getAvailableDerivatives_3d53ef1ca7ad5f8c,
                  mid_getInterpolationMethod_11b109bd155ca898,
                  mid_getInterpolationSamples_570ce0828f81a2c1,
                  mid_getReferenceFrame_b86f9f61d97a7244,
                  mid_getStart_85703d13e302437e,
                  mid_getStop_85703d13e302437e,
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
