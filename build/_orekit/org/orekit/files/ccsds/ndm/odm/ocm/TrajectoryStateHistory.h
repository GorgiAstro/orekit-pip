#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistory_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistory_H

#include "java/lang/Object.h"

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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class TrajectoryStateHistoryMetadata;
              class TrajectoryState;
            }
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
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
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
            namespace ocm {

              class TrajectoryStateHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d3c76af6cc69a178,
                  mid_getAvailableDerivatives_b9dfc27d8c56b5de,
                  mid_getBody_dc8275c31111ad9c,
                  mid_getCoordinates_d751c1a57012b438,
                  mid_getFrame_cb151471db4570f0,
                  mid_getInterpolationSamples_d6ab429752e7c267,
                  mid_getMetadata_10c9e19b4b3f8d44,
                  mid_getMu_9981f74b2d109da6,
                  mid_getStart_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
                  mid_getTrajectoryStates_d751c1a57012b438,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TrajectoryStateHistory(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TrajectoryStateHistory(const TrajectoryStateHistory& obj) : ::java::lang::Object(obj) {}

                TrajectoryStateHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata &, const ::java::util::List &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

                ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
                ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
                ::java::util::List getCoordinates() const;
                ::org::orekit::frames::Frame getFrame() const;
                jint getInterpolationSamples() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata getMetadata() const;
                jdouble getMu() const;
                ::org::orekit::time::AbsoluteDate getStart() const;
                ::org::orekit::time::AbsoluteDate getStop() const;
                ::java::util::List getTrajectoryStates() const;
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
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(TrajectoryStateHistory);
              extern PyTypeObject *PY_TYPE(TrajectoryStateHistory);

              class t_TrajectoryStateHistory {
              public:
                PyObject_HEAD
                TrajectoryStateHistory object;
                static PyObject *wrap_Object(const TrajectoryStateHistory&);
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
