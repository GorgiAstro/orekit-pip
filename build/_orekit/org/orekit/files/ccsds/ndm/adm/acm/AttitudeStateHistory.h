#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace frames {
      class Frame;
    }
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
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
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
                  mid_init$_be98a943865cb07a,
                  mid_getAngularCoordinates_a6156df500549a58,
                  mid_getAttitudeProvider_05a2839e8fecde67,
                  mid_getAttitudeStates_a6156df500549a58,
                  mid_getAvailableDerivatives_c14c1c09874639c8,
                  mid_getInterpolationMethod_0090f7797e403f43,
                  mid_getInterpolationSamples_f2f64475e4580546,
                  mid_getMetadata_3ed6d67cff982ef3,
                  mid_getReferenceFrame_c8fe21bcdac65bf6,
                  mid_getStart_aaa854c403487cf3,
                  mid_getStop_aaa854c403487cf3,
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
