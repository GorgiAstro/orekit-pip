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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getActualOdSpan_b74f83833fdad017,
                mid_getObsAvailable_55546ef6a647f39b,
                mid_getObsUsed_55546ef6a647f39b,
                mid_getOdEpoch_c325492395d89b24,
                mid_getRecommendedOdSpan_b74f83833fdad017,
                mid_getResidualsAccepted_b74f83833fdad017,
                mid_getTimeLastObsEnd_c325492395d89b24,
                mid_getTimeLastObsStart_c325492395d89b24,
                mid_getTracksAvailable_55546ef6a647f39b,
                mid_getTracksUsed_55546ef6a647f39b,
                mid_getWeightedRMS_b74f83833fdad017,
                mid_setActualOdSpan_8ba9fe7a847cecad,
                mid_setObsAvailable_44ed599e93e8a30c,
                mid_setObsUsed_44ed599e93e8a30c,
                mid_setOdEpoch_02135a6ef25adb4b,
                mid_setRecommendedOdSpan_8ba9fe7a847cecad,
                mid_setResidualsAccepted_8ba9fe7a847cecad,
                mid_setTimeLastObsEnd_02135a6ef25adb4b,
                mid_setTimeLastObsStart_02135a6ef25adb4b,
                mid_setTracksAvailable_44ed599e93e8a30c,
                mid_setTracksUsed_44ed599e93e8a30c,
                mid_setWeightedRMS_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
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
