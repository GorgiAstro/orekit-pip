#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistory_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistory_H

#include "java/lang/Object.h"

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
    namespace utils {
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
                  mid_init$_c790d28536d77682,
                  mid_getAvailableDerivatives_63bfdcc4b7a0536c,
                  mid_getBody_dd5c4288aa5a3dd8,
                  mid_getCoordinates_e62d3bb06d56d7e3,
                  mid_getFrame_2c51111cc6894ba1,
                  mid_getInterpolationSamples_55546ef6a647f39b,
                  mid_getMetadata_81764a8f1cf7116d,
                  mid_getMu_b74f83833fdad017,
                  mid_getStart_c325492395d89b24,
                  mid_getStop_c325492395d89b24,
                  mid_getTrajectoryStates_e62d3bb06d56d7e3,
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
