#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
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
            namespace acm {

              class AttitudeStateHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_2e00775434693e55,
                  mid_getAngularCoordinates_2afa36052df4765d,
                  mid_getAttitudeProvider_f95b60a986adb964,
                  mid_getAttitudeStates_2afa36052df4765d,
                  mid_getAvailableDerivatives_3d53ef1ca7ad5f8c,
                  mid_getInterpolationMethod_11b109bd155ca898,
                  mid_getInterpolationSamples_570ce0828f81a2c1,
                  mid_getMetadata_003106faaf77d27d,
                  mid_getReferenceFrame_b86f9f61d97a7244,
                  mid_getStart_85703d13e302437e,
                  mid_getStop_85703d13e302437e,
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
