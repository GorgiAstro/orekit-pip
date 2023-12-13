#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitDetermination_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitDetermination_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OdMethodFacade;
        }
      }
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

              class OrbitDetermination : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getActualOdSpan_b74f83833fdad017,
                  mid_getConfidence_b74f83833fdad017,
                  mid_getConsiderN_55546ef6a647f39b,
                  mid_getConsiderParameters_e62d3bb06d56d7e3,
                  mid_getDataTypes_e62d3bb06d56d7e3,
                  mid_getEpoch_c325492395d89b24,
                  mid_getEpochEigenInt_b74f83833fdad017,
                  mid_getEpochEigenMaj_b74f83833fdad017,
                  mid_getEpochEigenMin_b74f83833fdad017,
                  mid_getGdop_b74f83833fdad017,
                  mid_getId_1c1fa1e935d6cdcf,
                  mid_getMaxPredictedEigenMaj_b74f83833fdad017,
                  mid_getMaximumObsGap_b74f83833fdad017,
                  mid_getMethod_aef044bb3e906fce,
                  mid_getMinPredictedEigenMin_b74f83833fdad017,
                  mid_getObsAvailable_55546ef6a647f39b,
                  mid_getObsUsed_55546ef6a647f39b,
                  mid_getPrevId_1c1fa1e935d6cdcf,
                  mid_getRecommendedOdSpan_b74f83833fdad017,
                  mid_getSedr_b74f83833fdad017,
                  mid_getSensors_e62d3bb06d56d7e3,
                  mid_getSensorsN_55546ef6a647f39b,
                  mid_getSolveN_55546ef6a647f39b,
                  mid_getSolveStates_e62d3bb06d56d7e3,
                  mid_getTimeSinceFirstObservation_b74f83833fdad017,
                  mid_getTimeSinceLastObservation_b74f83833fdad017,
                  mid_getTracksAvailable_55546ef6a647f39b,
                  mid_getTracksUsed_55546ef6a647f39b,
                  mid_getWeightedRms_b74f83833fdad017,
                  mid_setActualOdSpan_8ba9fe7a847cecad,
                  mid_setConfidence_8ba9fe7a847cecad,
                  mid_setConsiderN_44ed599e93e8a30c,
                  mid_setConsiderParameters_0e7c3032c7c93ed3,
                  mid_setDataTypes_0e7c3032c7c93ed3,
                  mid_setEpoch_02135a6ef25adb4b,
                  mid_setEpochEigenInt_8ba9fe7a847cecad,
                  mid_setEpochEigenMaj_8ba9fe7a847cecad,
                  mid_setEpochEigenMin_8ba9fe7a847cecad,
                  mid_setGdop_8ba9fe7a847cecad,
                  mid_setId_734b91ac30d5f9b4,
                  mid_setMaxPredictedEigenMaj_8ba9fe7a847cecad,
                  mid_setMaximumObsGap_8ba9fe7a847cecad,
                  mid_setMethod_7ad1dbbf5ca0e1f0,
                  mid_setMinPredictedEigenMin_8ba9fe7a847cecad,
                  mid_setObsAvailable_44ed599e93e8a30c,
                  mid_setObsUsed_44ed599e93e8a30c,
                  mid_setPrevId_734b91ac30d5f9b4,
                  mid_setRecommendedOdSpan_8ba9fe7a847cecad,
                  mid_setSedr_8ba9fe7a847cecad,
                  mid_setSensors_0e7c3032c7c93ed3,
                  mid_setSensorsN_44ed599e93e8a30c,
                  mid_setSolveN_44ed599e93e8a30c,
                  mid_setSolveStates_0e7c3032c7c93ed3,
                  mid_setTimeSinceFirstObservation_8ba9fe7a847cecad,
                  mid_setTimeSinceLastObservation_8ba9fe7a847cecad,
                  mid_setTracksAvailable_44ed599e93e8a30c,
                  mid_setTracksUsed_44ed599e93e8a30c,
                  mid_setWeightedRms_8ba9fe7a847cecad,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitDetermination(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitDetermination(const OrbitDetermination& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                OrbitDetermination();

                jdouble getActualOdSpan() const;
                jdouble getConfidence() const;
                jint getConsiderN() const;
                ::java::util::List getConsiderParameters() const;
                ::java::util::List getDataTypes() const;
                ::org::orekit::time::AbsoluteDate getEpoch() const;
                jdouble getEpochEigenInt() const;
                jdouble getEpochEigenMaj() const;
                jdouble getEpochEigenMin() const;
                jdouble getGdop() const;
                ::java::lang::String getId() const;
                jdouble getMaxPredictedEigenMaj() const;
                jdouble getMaximumObsGap() const;
                ::org::orekit::files::ccsds::definitions::OdMethodFacade getMethod() const;
                jdouble getMinPredictedEigenMin() const;
                jint getObsAvailable() const;
                jint getObsUsed() const;
                ::java::lang::String getPrevId() const;
                jdouble getRecommendedOdSpan() const;
                jdouble getSedr() const;
                ::java::util::List getSensors() const;
                jint getSensorsN() const;
                jint getSolveN() const;
                ::java::util::List getSolveStates() const;
                jdouble getTimeSinceFirstObservation() const;
                jdouble getTimeSinceLastObservation() const;
                jint getTracksAvailable() const;
                jint getTracksUsed() const;
                jdouble getWeightedRms() const;
                void setActualOdSpan(jdouble) const;
                void setConfidence(jdouble) const;
                void setConsiderN(jint) const;
                void setConsiderParameters(const ::java::util::List &) const;
                void setDataTypes(const ::java::util::List &) const;
                void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setEpochEigenInt(jdouble) const;
                void setEpochEigenMaj(jdouble) const;
                void setEpochEigenMin(jdouble) const;
                void setGdop(jdouble) const;
                void setId(const ::java::lang::String &) const;
                void setMaxPredictedEigenMaj(jdouble) const;
                void setMaximumObsGap(jdouble) const;
                void setMethod(const ::org::orekit::files::ccsds::definitions::OdMethodFacade &) const;
                void setMinPredictedEigenMin(jdouble) const;
                void setObsAvailable(jint) const;
                void setObsUsed(jint) const;
                void setPrevId(const ::java::lang::String &) const;
                void setRecommendedOdSpan(jdouble) const;
                void setSedr(jdouble) const;
                void setSensors(const ::java::util::List &) const;
                void setSensorsN(jint) const;
                void setSolveN(jint) const;
                void setSolveStates(const ::java::util::List &) const;
                void setTimeSinceFirstObservation(jdouble) const;
                void setTimeSinceLastObservation(jdouble) const;
                void setTracksAvailable(jint) const;
                void setTracksUsed(jint) const;
                void setWeightedRms(jdouble) const;
                void validate(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(OrbitDetermination);
              extern PyTypeObject *PY_TYPE(OrbitDetermination);

              class t_OrbitDetermination {
              public:
                PyObject_HEAD
                OrbitDetermination object;
                static PyObject *wrap_Object(const OrbitDetermination&);
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
