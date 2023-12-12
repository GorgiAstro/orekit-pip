#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistory_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
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
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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
            namespace ocm {

              class TrajectoryStateHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_8aabf9afabae729c,
                  mid_getAvailableDerivatives_6c4898d6ec0c3837,
                  mid_getBody_0c55bd1adf955c4c,
                  mid_getCoordinates_0d9551367f7ecdef,
                  mid_getFrame_6c9bc0a928c56d4e,
                  mid_getInterpolationSamples_412668abc8d889e9,
                  mid_getMetadata_1911a405d6451e8c,
                  mid_getMu_557b8123390d8d0c,
                  mid_getStart_7a97f7e149e79afb,
                  mid_getStop_7a97f7e149e79afb,
                  mid_getTrajectoryStates_0d9551367f7ecdef,
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
