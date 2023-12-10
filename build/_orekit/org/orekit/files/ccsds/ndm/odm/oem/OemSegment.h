#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemSegment_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemSegment_H

#include "org/orekit/files/ccsds/section/Segment.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace files {
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemData;
              class OemMetadata;
            }
            class CartesianCovariance;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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

              class OemSegment : public ::org::orekit::files::ccsds::section::Segment {
               public:
                enum {
                  mid_init$_b2fa6049a1a0a856,
                  mid_getAvailableDerivatives_16e9a7b5414faf2d,
                  mid_getCoordinates_2afa36052df4765d,
                  mid_getCovarianceMatrices_2afa36052df4765d,
                  mid_getFrame_b86f9f61d97a7244,
                  mid_getInertialFrame_b86f9f61d97a7244,
                  mid_getInterpolationSamples_570ce0828f81a2c1,
                  mid_getMu_dff5885c2c873297,
                  mid_getStart_85703d13e302437e,
                  mid_getStop_85703d13e302437e,
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
