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
                  mid_init$_0fa09c18fee449d5,
                  mid_getActualOdSpan_dff5885c2c873297,
                  mid_getConfidence_dff5885c2c873297,
                  mid_getConsiderN_570ce0828f81a2c1,
                  mid_getConsiderParameters_2afa36052df4765d,
                  mid_getDataTypes_2afa36052df4765d,
                  mid_getEpoch_85703d13e302437e,
                  mid_getEpochEigenInt_dff5885c2c873297,
                  mid_getEpochEigenMaj_dff5885c2c873297,
                  mid_getEpochEigenMin_dff5885c2c873297,
                  mid_getGdop_dff5885c2c873297,
                  mid_getId_11b109bd155ca898,
                  mid_getMaxPredictedEigenMaj_dff5885c2c873297,
                  mid_getMaximumObsGap_dff5885c2c873297,
                  mid_getMethod_17e84526459b3be5,
                  mid_getMinPredictedEigenMin_dff5885c2c873297,
                  mid_getObsAvailable_570ce0828f81a2c1,
                  mid_getObsUsed_570ce0828f81a2c1,
                  mid_getPrevId_11b109bd155ca898,
                  mid_getRecommendedOdSpan_dff5885c2c873297,
                  mid_getSedr_dff5885c2c873297,
                  mid_getSensors_2afa36052df4765d,
                  mid_getSensorsN_570ce0828f81a2c1,
                  mid_getSolveN_570ce0828f81a2c1,
                  mid_getSolveStates_2afa36052df4765d,
                  mid_getTimeSinceFirstObservation_dff5885c2c873297,
                  mid_getTimeSinceLastObservation_dff5885c2c873297,
                  mid_getTracksAvailable_570ce0828f81a2c1,
                  mid_getTracksUsed_570ce0828f81a2c1,
                  mid_getWeightedRms_dff5885c2c873297,
                  mid_setActualOdSpan_17db3a65980d3441,
                  mid_setConfidence_17db3a65980d3441,
                  mid_setConsiderN_99803b0791f320ff,
                  mid_setConsiderParameters_de3e021e7266b71e,
                  mid_setDataTypes_de3e021e7266b71e,
                  mid_setEpoch_600a2a61652bc473,
                  mid_setEpochEigenInt_17db3a65980d3441,
                  mid_setEpochEigenMaj_17db3a65980d3441,
                  mid_setEpochEigenMin_17db3a65980d3441,
                  mid_setGdop_17db3a65980d3441,
                  mid_setId_d0bc48d5b00dc40c,
                  mid_setMaxPredictedEigenMaj_17db3a65980d3441,
                  mid_setMaximumObsGap_17db3a65980d3441,
                  mid_setMethod_13ae259d78efa15d,
                  mid_setMinPredictedEigenMin_17db3a65980d3441,
                  mid_setObsAvailable_99803b0791f320ff,
                  mid_setObsUsed_99803b0791f320ff,
                  mid_setPrevId_d0bc48d5b00dc40c,
                  mid_setRecommendedOdSpan_17db3a65980d3441,
                  mid_setSedr_17db3a65980d3441,
                  mid_setSensors_de3e021e7266b71e,
                  mid_setSensorsN_99803b0791f320ff,
                  mid_setSolveN_99803b0791f320ff,
                  mid_setSolveStates_de3e021e7266b71e,
                  mid_setTimeSinceFirstObservation_17db3a65980d3441,
                  mid_setTimeSinceLastObservation_17db3a65980d3441,
                  mid_setTracksAvailable_99803b0791f320ff,
                  mid_setTracksUsed_99803b0791f320ff,
                  mid_setWeightedRms_17db3a65980d3441,
                  mid_validate_17db3a65980d3441,
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
