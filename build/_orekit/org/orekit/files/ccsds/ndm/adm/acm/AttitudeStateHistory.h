#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeState;
              class AttitudeStateHistoryMetadata;
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
            namespace acm {

              class AttitudeStateHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_8edb46527ed0b2b8,
                  mid_getAngularCoordinates_d751c1a57012b438,
                  mid_getAttitudeProvider_228bb29d53a1472e,
                  mid_getAttitudeStates_d751c1a57012b438,
                  mid_getAvailableDerivatives_410860c8cd87dc25,
                  mid_getInterpolationMethod_d2c8eb4129821f0e,
                  mid_getInterpolationSamples_d6ab429752e7c267,
                  mid_getMetadata_6c72d39c3faaf030,
                  mid_getReferenceFrame_cb151471db4570f0,
                  mid_getStart_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
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
