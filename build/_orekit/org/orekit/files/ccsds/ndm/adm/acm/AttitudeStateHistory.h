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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
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
                  mid_init$_83dfe7ef1f8f7703,
                  mid_getAngularCoordinates_0d9551367f7ecdef,
                  mid_getAttitudeProvider_b44a04493534d299,
                  mid_getAttitudeStates_0d9551367f7ecdef,
                  mid_getAvailableDerivatives_c2e9b2b1c0db39b3,
                  mid_getInterpolationMethod_3cffd47377eca18a,
                  mid_getInterpolationSamples_412668abc8d889e9,
                  mid_getMetadata_81be42d28961bd53,
                  mid_getReferenceFrame_6c9bc0a928c56d4e,
                  mid_getStart_7a97f7e149e79afb,
                  mid_getStop_7a97f7e149e79afb,
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
