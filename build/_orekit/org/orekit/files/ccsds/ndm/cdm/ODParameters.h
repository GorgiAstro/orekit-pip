#ifndef org_orekit_files_ccsds_ndm_cdm_ODParameters_H
#define org_orekit_files_ccsds_ndm_cdm_ODParameters_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
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
          namespace cdm {

            class ODParameters : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getActualOdSpan_557b8123390d8d0c,
                mid_getObsAvailable_412668abc8d889e9,
                mid_getObsUsed_412668abc8d889e9,
                mid_getOdEpoch_7a97f7e149e79afb,
                mid_getRecommendedOdSpan_557b8123390d8d0c,
                mid_getResidualsAccepted_557b8123390d8d0c,
                mid_getTimeLastObsEnd_7a97f7e149e79afb,
                mid_getTimeLastObsStart_7a97f7e149e79afb,
                mid_getTracksAvailable_412668abc8d889e9,
                mid_getTracksUsed_412668abc8d889e9,
                mid_getWeightedRMS_557b8123390d8d0c,
                mid_setActualOdSpan_10f281d777284cea,
                mid_setObsAvailable_a3da1a935cb37f7b,
                mid_setObsUsed_a3da1a935cb37f7b,
                mid_setOdEpoch_20affcbd28542333,
                mid_setRecommendedOdSpan_10f281d777284cea,
                mid_setResidualsAccepted_10f281d777284cea,
                mid_setTimeLastObsEnd_20affcbd28542333,
                mid_setTimeLastObsStart_20affcbd28542333,
                mid_setTracksAvailable_a3da1a935cb37f7b,
                mid_setTracksUsed_a3da1a935cb37f7b,
                mid_setWeightedRMS_10f281d777284cea,
                mid_validate_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ODParameters(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ODParameters(const ODParameters& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              ODParameters();

              jdouble getActualOdSpan() const;
              jint getObsAvailable() const;
              jint getObsUsed() const;
              ::org::orekit::time::AbsoluteDate getOdEpoch() const;
              jdouble getRecommendedOdSpan() const;
              jdouble getResidualsAccepted() const;
              ::org::orekit::time::AbsoluteDate getTimeLastObsEnd() const;
              ::org::orekit::time::AbsoluteDate getTimeLastObsStart() const;
              jint getTracksAvailable() const;
              jint getTracksUsed() const;
              jdouble getWeightedRMS() const;
              void setActualOdSpan(jdouble) const;
              void setObsAvailable(jint) const;
              void setObsUsed(jint) const;
              void setOdEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setRecommendedOdSpan(jdouble) const;
              void setResidualsAccepted(jdouble) const;
              void setTimeLastObsEnd(const ::org::orekit::time::AbsoluteDate &) const;
              void setTimeLastObsStart(const ::org::orekit::time::AbsoluteDate &) const;
              void setTracksAvailable(jint) const;
              void setTracksUsed(jint) const;
              void setWeightedRMS(jdouble) const;
              void validate(jdouble) const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(ODParameters);
            extern PyTypeObject *PY_TYPE(ODParameters);

            class t_ODParameters {
            public:
              PyObject_HEAD
              ODParameters object;
              static PyObject *wrap_Object(const ODParameters&);
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

#endif
