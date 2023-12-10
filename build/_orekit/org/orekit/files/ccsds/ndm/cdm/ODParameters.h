#ifndef org_orekit_files_ccsds_ndm_cdm_ODParameters_H
#define org_orekit_files_ccsds_ndm_cdm_ODParameters_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
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
          namespace cdm {

            class ODParameters : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getActualOdSpan_456d9a2f64d6b28d,
                mid_getObsAvailable_f2f64475e4580546,
                mid_getObsUsed_f2f64475e4580546,
                mid_getOdEpoch_aaa854c403487cf3,
                mid_getRecommendedOdSpan_456d9a2f64d6b28d,
                mid_getResidualsAccepted_456d9a2f64d6b28d,
                mid_getTimeLastObsEnd_aaa854c403487cf3,
                mid_getTimeLastObsStart_aaa854c403487cf3,
                mid_getTracksAvailable_f2f64475e4580546,
                mid_getTracksUsed_f2f64475e4580546,
                mid_getWeightedRMS_456d9a2f64d6b28d,
                mid_setActualOdSpan_77e0f9a1f260e2e5,
                mid_setObsAvailable_0a2a1ac2721c0336,
                mid_setObsUsed_0a2a1ac2721c0336,
                mid_setOdEpoch_e82d68cd9f886886,
                mid_setRecommendedOdSpan_77e0f9a1f260e2e5,
                mid_setResidualsAccepted_77e0f9a1f260e2e5,
                mid_setTimeLastObsEnd_e82d68cd9f886886,
                mid_setTimeLastObsStart_e82d68cd9f886886,
                mid_setTracksAvailable_0a2a1ac2721c0336,
                mid_setTracksUsed_0a2a1ac2721c0336,
                mid_setWeightedRMS_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
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
