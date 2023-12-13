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
    namespace utils {
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
    }
    namespace files {
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
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
                  mid_init$_f12f30967885016d,
                  mid_getAvailableDerivatives_63bfdcc4b7a0536c,
                  mid_getCoordinates_e62d3bb06d56d7e3,
                  mid_getCovarianceMatrices_e62d3bb06d56d7e3,
                  mid_getFrame_2c51111cc6894ba1,
                  mid_getInertialFrame_2c51111cc6894ba1,
                  mid_getInterpolationSamples_55546ef6a647f39b,
                  mid_getMu_b74f83833fdad017,
                  mid_getStart_c325492395d89b24,
                  mid_getStop_c325492395d89b24,
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
