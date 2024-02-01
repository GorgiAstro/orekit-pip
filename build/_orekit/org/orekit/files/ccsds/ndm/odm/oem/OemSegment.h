#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemSegment_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemSegment_H

#include "org/orekit/files/ccsds/section/Segment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemMetadata;
              class OemData;
            }
            class CartesianCovariance;
          }
        }
      }
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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

              class OemSegment : public ::org::orekit::files::ccsds::section::Segment {
               public:
                enum {
                  mid_init$_b6f57e51ec8f5dae,
                  mid_getAvailableDerivatives_b9dfc27d8c56b5de,
                  mid_getCoordinates_d751c1a57012b438,
                  mid_getCovarianceMatrices_d751c1a57012b438,
                  mid_getFrame_cb151471db4570f0,
                  mid_getInertialFrame_cb151471db4570f0,
                  mid_getInterpolationSamples_d6ab429752e7c267,
                  mid_getMu_9981f74b2d109da6,
                  mid_getStart_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OemSegment(jobject obj) : ::org::orekit::files::ccsds::section::Segment(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemSegment(const OemSegment& obj) : ::org::orekit::files::ccsds::section::Segment(obj) {}

                OemSegment(const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemData &, jdouble);

                ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
                ::java::util::List getCoordinates() const;
                ::java::util::List getCovarianceMatrices() const;
                ::org::orekit::frames::Frame getFrame() const;
                ::org::orekit::frames::Frame getInertialFrame() const;
                jint getInterpolationSamples() const;
                jdouble getMu() const;
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
          namespace odm {
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(OemSegment);
              extern PyTypeObject *PY_TYPE(OemSegment);

              class t_OemSegment {
              public:
                PyObject_HEAD
                OemSegment object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_OemSegment *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OemSegment&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OemSegment&, PyTypeObject *, PyTypeObject *);
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
