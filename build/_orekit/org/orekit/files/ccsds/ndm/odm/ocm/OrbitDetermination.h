#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitDetermination_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitDetermination_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
                  mid_init$_0640e6acf969ed28,
                  mid_getActualOdSpan_557b8123390d8d0c,
                  mid_getConfidence_557b8123390d8d0c,
                  mid_getConsiderN_412668abc8d889e9,
                  mid_getConsiderParameters_0d9551367f7ecdef,
                  mid_getDataTypes_0d9551367f7ecdef,
                  mid_getEpoch_7a97f7e149e79afb,
                  mid_getEpochEigenInt_557b8123390d8d0c,
                  mid_getEpochEigenMaj_557b8123390d8d0c,
                  mid_getEpochEigenMin_557b8123390d8d0c,
                  mid_getGdop_557b8123390d8d0c,
                  mid_getId_3cffd47377eca18a,
                  mid_getMaxPredictedEigenMaj_557b8123390d8d0c,
                  mid_getMaximumObsGap_557b8123390d8d0c,
                  mid_getMethod_969c9256ca143e68,
                  mid_getMinPredictedEigenMin_557b8123390d8d0c,
                  mid_getObsAvailable_412668abc8d889e9,
                  mid_getObsUsed_412668abc8d889e9,
                  mid_getPrevId_3cffd47377eca18a,
                  mid_getRecommendedOdSpan_557b8123390d8d0c,
                  mid_getSedr_557b8123390d8d0c,
                  mid_getSensors_0d9551367f7ecdef,
                  mid_getSensorsN_412668abc8d889e9,
                  mid_getSolveN_412668abc8d889e9,
                  mid_getSolveStates_0d9551367f7ecdef,
                  mid_getTimeSinceFirstObservation_557b8123390d8d0c,
                  mid_getTimeSinceLastObservation_557b8123390d8d0c,
                  mid_getTracksAvailable_412668abc8d889e9,
                  mid_getTracksUsed_412668abc8d889e9,
                  mid_getWeightedRms_557b8123390d8d0c,
                  mid_setActualOdSpan_10f281d777284cea,
                  mid_setConfidence_10f281d777284cea,
                  mid_setConsiderN_a3da1a935cb37f7b,
                  mid_setConsiderParameters_4ccaedadb068bdeb,
                  mid_setDataTypes_4ccaedadb068bdeb,
                  mid_setEpoch_20affcbd28542333,
                  mid_setEpochEigenInt_10f281d777284cea,
                  mid_setEpochEigenMaj_10f281d777284cea,
                  mid_setEpochEigenMin_10f281d777284cea,
                  mid_setGdop_10f281d777284cea,
                  mid_setId_f5ffdf29129ef90a,
                  mid_setMaxPredictedEigenMaj_10f281d777284cea,
                  mid_setMaximumObsGap_10f281d777284cea,
                  mid_setMethod_344785fcd4d01936,
                  mid_setMinPredictedEigenMin_10f281d777284cea,
                  mid_setObsAvailable_a3da1a935cb37f7b,
                  mid_setObsUsed_a3da1a935cb37f7b,
                  mid_setPrevId_f5ffdf29129ef90a,
                  mid_setRecommendedOdSpan_10f281d777284cea,
                  mid_setSedr_10f281d777284cea,
                  mid_setSensors_4ccaedadb068bdeb,
                  mid_setSensorsN_a3da1a935cb37f7b,
                  mid_setSolveN_a3da1a935cb37f7b,
                  mid_setSolveStates_4ccaedadb068bdeb,
                  mid_setTimeSinceFirstObservation_10f281d777284cea,
                  mid_setTimeSinceLastObservation_10f281d777284cea,
                  mid_setTracksAvailable_a3da1a935cb37f7b,
                  mid_setTracksUsed_a3da1a935cb37f7b,
                  mid_setWeightedRms_10f281d777284cea,
                  mid_validate_10f281d777284cea,
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
