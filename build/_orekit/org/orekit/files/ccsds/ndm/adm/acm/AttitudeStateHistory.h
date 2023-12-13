#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeStateHistoryMetadata;
              class AttitudeState;
            }
          }
        }
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace frames {
      class Frame;
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
            namespace acm {

              class AttitudeStateHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e50dbd2c00143db4,
                  mid_getAngularCoordinates_e62d3bb06d56d7e3,
                  mid_getAttitudeProvider_fcce29ba1cf2a05e,
                  mid_getAttitudeStates_e62d3bb06d56d7e3,
                  mid_getAvailableDerivatives_33d67d456ec94a0c,
                  mid_getInterpolationMethod_1c1fa1e935d6cdcf,
                  mid_getInterpolationSamples_55546ef6a647f39b,
                  mid_getMetadata_131acac04ad2d884,
                  mid_getReferenceFrame_2c51111cc6894ba1,
                  mid_getStart_c325492395d89b24,
                  mid_getStop_c325492395d89b24,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeStateHistory(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeStateHistory(const AttitudeStateHistory& obj) : ::java::lang::Object(obj) {}

                AttitudeStateHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata &, const ::java::util::List &);

                ::java::util::List getAngularCoordinates() const;
                ::org::orekit::attitudes::BoundedAttitudeProvider getAttitudeProvider() const;
                ::java::util::List getAttitudeStates() const;
                ::org::orekit::utils::AngularDerivativesFilter getAvailableDerivatives() const;
                ::java::lang::String getInterpolationMethod() const;
                jint getInterpolationSamples() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata getMetadata() const;
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeStateHistory);
              extern PyTypeObject *PY_TYPE(AttitudeStateHistory);

              class t_AttitudeStateHistory {
              public:
                PyObject_HEAD
                AttitudeStateHistory object;
                static PyObject *wrap_Object(const AttitudeStateHistory&);
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
