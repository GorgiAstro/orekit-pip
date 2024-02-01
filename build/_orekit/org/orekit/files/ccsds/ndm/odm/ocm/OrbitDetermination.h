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
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OdMethodFacade;
        }
      }
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
                  mid_init$_ff7cb6c242604316,
                  mid_getActualOdSpan_9981f74b2d109da6,
                  mid_getConfidence_9981f74b2d109da6,
                  mid_getConsiderN_d6ab429752e7c267,
                  mid_getConsiderParameters_d751c1a57012b438,
                  mid_getDataTypes_d751c1a57012b438,
                  mid_getEpoch_80e11148db499dda,
                  mid_getEpochEigenInt_9981f74b2d109da6,
                  mid_getEpochEigenMaj_9981f74b2d109da6,
                  mid_getEpochEigenMin_9981f74b2d109da6,
                  mid_getGdop_9981f74b2d109da6,
                  mid_getId_d2c8eb4129821f0e,
                  mid_getMaxPredictedEigenMaj_9981f74b2d109da6,
                  mid_getMaximumObsGap_9981f74b2d109da6,
                  mid_getMethod_fe70e48f0b8fd382,
                  mid_getMinPredictedEigenMin_9981f74b2d109da6,
                  mid_getObsAvailable_d6ab429752e7c267,
                  mid_getObsUsed_d6ab429752e7c267,
                  mid_getPrevId_d2c8eb4129821f0e,
                  mid_getRecommendedOdSpan_9981f74b2d109da6,
                  mid_getSedr_9981f74b2d109da6,
                  mid_getSensors_d751c1a57012b438,
                  mid_getSensorsN_d6ab429752e7c267,
                  mid_getSolveN_d6ab429752e7c267,
                  mid_getSolveStates_d751c1a57012b438,
                  mid_getTimeSinceFirstObservation_9981f74b2d109da6,
                  mid_getTimeSinceLastObservation_9981f74b2d109da6,
                  mid_getTracksAvailable_d6ab429752e7c267,
                  mid_getTracksUsed_d6ab429752e7c267,
                  mid_getWeightedRms_9981f74b2d109da6,
                  mid_setActualOdSpan_1ad26e8c8c0cd65b,
                  mid_setConfidence_1ad26e8c8c0cd65b,
                  mid_setConsiderN_8fd427ab23829bf5,
                  mid_setConsiderParameters_aa335fea495d60e0,
                  mid_setDataTypes_aa335fea495d60e0,
                  mid_setEpoch_8497861b879c83f7,
                  mid_setEpochEigenInt_1ad26e8c8c0cd65b,
                  mid_setEpochEigenMaj_1ad26e8c8c0cd65b,
                  mid_setEpochEigenMin_1ad26e8c8c0cd65b,
                  mid_setGdop_1ad26e8c8c0cd65b,
                  mid_setId_105e1eadb709d9ac,
                  mid_setMaxPredictedEigenMaj_1ad26e8c8c0cd65b,
                  mid_setMaximumObsGap_1ad26e8c8c0cd65b,
                  mid_setMethod_37ce467d38827aa0,
                  mid_setMinPredictedEigenMin_1ad26e8c8c0cd65b,
                  mid_setObsAvailable_8fd427ab23829bf5,
                  mid_setObsUsed_8fd427ab23829bf5,
                  mid_setPrevId_105e1eadb709d9ac,
                  mid_setRecommendedOdSpan_1ad26e8c8c0cd65b,
                  mid_setSedr_1ad26e8c8c0cd65b,
                  mid_setSensors_aa335fea495d60e0,
                  mid_setSensorsN_8fd427ab23829bf5,
                  mid_setSolveN_8fd427ab23829bf5,
                  mid_setSolveStates_aa335fea495d60e0,
                  mid_setTimeSinceFirstObservation_1ad26e8c8c0cd65b,
                  mid_setTimeSinceLastObservation_1ad26e8c8c0cd65b,
                  mid_setTracksAvailable_8fd427ab23829bf5,
                  mid_setTracksUsed_8fd427ab23829bf5,
                  mid_setWeightedRms_1ad26e8c8c0cd65b,
                  mid_validate_1ad26e8c8c0cd65b,
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
