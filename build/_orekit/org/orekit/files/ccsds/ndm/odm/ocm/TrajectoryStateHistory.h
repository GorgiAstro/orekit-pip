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
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
    }
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
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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
            namespace ocm {

              class TrajectoryStateHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_b5a783e2cfda63fd,
                  mid_getAvailableDerivatives_237181d932324188,
                  mid_getBody_940814a1dcab100a,
                  mid_getCoordinates_a6156df500549a58,
                  mid_getFrame_c8fe21bcdac65bf6,
                  mid_getInterpolationSamples_f2f64475e4580546,
                  mid_getMetadata_dfa7788abc97c95b,
                  mid_getMu_456d9a2f64d6b28d,
                  mid_getStart_aaa854c403487cf3,
                  mid_getStop_aaa854c403487cf3,
                  mid_getTrajectoryStates_a6156df500549a58,
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
