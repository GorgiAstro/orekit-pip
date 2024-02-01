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
                mid_init$_ff7cb6c242604316,
                mid_getActualOdSpan_9981f74b2d109da6,
                mid_getObsAvailable_d6ab429752e7c267,
                mid_getObsUsed_d6ab429752e7c267,
                mid_getOdEpoch_80e11148db499dda,
                mid_getRecommendedOdSpan_9981f74b2d109da6,
                mid_getResidualsAccepted_9981f74b2d109da6,
                mid_getTimeLastObsEnd_80e11148db499dda,
                mid_getTimeLastObsStart_80e11148db499dda,
                mid_getTracksAvailable_d6ab429752e7c267,
                mid_getTracksUsed_d6ab429752e7c267,
                mid_getWeightedRMS_9981f74b2d109da6,
                mid_setActualOdSpan_1ad26e8c8c0cd65b,
                mid_setObsAvailable_8fd427ab23829bf5,
                mid_setObsUsed_8fd427ab23829bf5,
                mid_setOdEpoch_8497861b879c83f7,
                mid_setRecommendedOdSpan_1ad26e8c8c0cd65b,
                mid_setResidualsAccepted_1ad26e8c8c0cd65b,
                mid_setTimeLastObsEnd_8497861b879c83f7,
                mid_setTimeLastObsStart_8497861b879c83f7,
                mid_setTracksAvailable_8fd427ab23829bf5,
                mid_setTracksUsed_8fd427ab23829bf5,
                mid_setWeightedRMS_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
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
