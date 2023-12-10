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
                mid_init$_0fa09c18fee449d5,
                mid_getActualOdSpan_dff5885c2c873297,
                mid_getObsAvailable_570ce0828f81a2c1,
                mid_getObsUsed_570ce0828f81a2c1,
                mid_getOdEpoch_85703d13e302437e,
                mid_getRecommendedOdSpan_dff5885c2c873297,
                mid_getResidualsAccepted_dff5885c2c873297,
                mid_getTimeLastObsEnd_85703d13e302437e,
                mid_getTimeLastObsStart_85703d13e302437e,
                mid_getTracksAvailable_570ce0828f81a2c1,
                mid_getTracksUsed_570ce0828f81a2c1,
                mid_getWeightedRMS_dff5885c2c873297,
                mid_setActualOdSpan_17db3a65980d3441,
                mid_setObsAvailable_99803b0791f320ff,
                mid_setObsUsed_99803b0791f320ff,
                mid_setOdEpoch_600a2a61652bc473,
                mid_setRecommendedOdSpan_17db3a65980d3441,
                mid_setResidualsAccepted_17db3a65980d3441,
                mid_setTimeLastObsEnd_600a2a61652bc473,
                mid_setTimeLastObsStart_600a2a61652bc473,
                mid_setTracksAvailable_99803b0791f320ff,
                mid_setTracksUsed_99803b0791f320ff,
                mid_setWeightedRMS_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
