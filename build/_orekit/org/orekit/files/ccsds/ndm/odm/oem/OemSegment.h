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
    namespace frames {
      class Frame;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
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
                  mid_init$_a6673f64aad509d7,
                  mid_getAvailableDerivatives_237181d932324188,
                  mid_getCoordinates_a6156df500549a58,
                  mid_getCovarianceMatrices_a6156df500549a58,
                  mid_getFrame_c8fe21bcdac65bf6,
                  mid_getInertialFrame_c8fe21bcdac65bf6,
                  mid_getInterpolationSamples_f2f64475e4580546,
                  mid_getMu_456d9a2f64d6b28d,
                  mid_getStart_aaa854c403487cf3,
                  mid_getStop_aaa854c403487cf3,
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
