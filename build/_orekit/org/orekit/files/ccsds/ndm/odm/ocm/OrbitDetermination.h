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
                  mid_init$_7ae3461a92a43152,
                  mid_getActualOdSpan_456d9a2f64d6b28d,
                  mid_getConfidence_456d9a2f64d6b28d,
                  mid_getConsiderN_f2f64475e4580546,
                  mid_getConsiderParameters_a6156df500549a58,
                  mid_getDataTypes_a6156df500549a58,
                  mid_getEpoch_aaa854c403487cf3,
                  mid_getEpochEigenInt_456d9a2f64d6b28d,
                  mid_getEpochEigenMaj_456d9a2f64d6b28d,
                  mid_getEpochEigenMin_456d9a2f64d6b28d,
                  mid_getGdop_456d9a2f64d6b28d,
                  mid_getId_0090f7797e403f43,
                  mid_getMaxPredictedEigenMaj_456d9a2f64d6b28d,
                  mid_getMaximumObsGap_456d9a2f64d6b28d,
                  mid_getMethod_d516ab93379ac969,
                  mid_getMinPredictedEigenMin_456d9a2f64d6b28d,
                  mid_getObsAvailable_f2f64475e4580546,
                  mid_getObsUsed_f2f64475e4580546,
                  mid_getPrevId_0090f7797e403f43,
                  mid_getRecommendedOdSpan_456d9a2f64d6b28d,
                  mid_getSedr_456d9a2f64d6b28d,
                  mid_getSensors_a6156df500549a58,
                  mid_getSensorsN_f2f64475e4580546,
                  mid_getSolveN_f2f64475e4580546,
                  mid_getSolveStates_a6156df500549a58,
                  mid_getTimeSinceFirstObservation_456d9a2f64d6b28d,
                  mid_getTimeSinceLastObservation_456d9a2f64d6b28d,
                  mid_getTracksAvailable_f2f64475e4580546,
                  mid_getTracksUsed_f2f64475e4580546,
                  mid_getWeightedRms_456d9a2f64d6b28d,
                  mid_setActualOdSpan_77e0f9a1f260e2e5,
                  mid_setConfidence_77e0f9a1f260e2e5,
                  mid_setConsiderN_0a2a1ac2721c0336,
                  mid_setConsiderParameters_65de9727799c5641,
                  mid_setDataTypes_65de9727799c5641,
                  mid_setEpoch_e82d68cd9f886886,
                  mid_setEpochEigenInt_77e0f9a1f260e2e5,
                  mid_setEpochEigenMaj_77e0f9a1f260e2e5,
                  mid_setEpochEigenMin_77e0f9a1f260e2e5,
                  mid_setGdop_77e0f9a1f260e2e5,
                  mid_setId_e939c6558ae8d313,
                  mid_setMaxPredictedEigenMaj_77e0f9a1f260e2e5,
                  mid_setMaximumObsGap_77e0f9a1f260e2e5,
                  mid_setMethod_a7950f94a213a00d,
                  mid_setMinPredictedEigenMin_77e0f9a1f260e2e5,
                  mid_setObsAvailable_0a2a1ac2721c0336,
                  mid_setObsUsed_0a2a1ac2721c0336,
                  mid_setPrevId_e939c6558ae8d313,
                  mid_setRecommendedOdSpan_77e0f9a1f260e2e5,
                  mid_setSedr_77e0f9a1f260e2e5,
                  mid_setSensors_65de9727799c5641,
                  mid_setSensorsN_0a2a1ac2721c0336,
                  mid_setSolveN_0a2a1ac2721c0336,
                  mid_setSolveStates_65de9727799c5641,
                  mid_setTimeSinceFirstObservation_77e0f9a1f260e2e5,
                  mid_setTimeSinceLastObservation_77e0f9a1f260e2e5,
                  mid_setTracksAvailable_0a2a1ac2721c0336,
                  mid_setTracksUsed_0a2a1ac2721c0336,
                  mid_setWeightedRms_77e0f9a1f260e2e5,
                  mid_validate_77e0f9a1f260e2e5,
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
