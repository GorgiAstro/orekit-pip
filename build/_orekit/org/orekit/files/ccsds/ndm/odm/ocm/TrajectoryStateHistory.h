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
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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
                  mid_init$_1a4c23d6f5282fcc,
                  mid_getAvailableDerivatives_16e9a7b5414faf2d,
                  mid_getBody_000d48aad6c74b0a,
                  mid_getCoordinates_2afa36052df4765d,
                  mid_getFrame_b86f9f61d97a7244,
                  mid_getInterpolationSamples_570ce0828f81a2c1,
                  mid_getMetadata_1fe510d4fbfbe0c9,
                  mid_getMu_dff5885c2c873297,
                  mid_getStart_85703d13e302437e,
                  mid_getStop_85703d13e302437e,
                  mid_getTrajectoryStates_2afa36052df4765d,
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
