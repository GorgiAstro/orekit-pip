#ifndef org_orekit_files_ccsds_ndm_cdm_AdditionalParameters_H
#define org_orekit_files_ccsds_ndm_cdm_AdditionalParameters_H

#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"

namespace java {
  namespace lang {
    class String;
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

            class AdditionalParameters : public ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getApoapsisAltitude_456d9a2f64d6b28d,
                mid_getAreaDRG_456d9a2f64d6b28d,
                mid_getAreaPC_456d9a2f64d6b28d,
                mid_getAreaPCMax_456d9a2f64d6b28d,
                mid_getAreaPCMin_456d9a2f64d6b28d,
                mid_getAreaSRP_456d9a2f64d6b28d,
                mid_getCDAreaOverMass_456d9a2f64d6b28d,
                mid_getCRAreaOverMass_456d9a2f64d6b28d,
                mid_getCovConfidence_456d9a2f64d6b28d,
                mid_getCovConfidenceMethod_0090f7797e403f43,
                mid_getHbr_456d9a2f64d6b28d,
                mid_getInclination_456d9a2f64d6b28d,
                mid_getMass_456d9a2f64d6b28d,
                mid_getPeriapsisAltitude_456d9a2f64d6b28d,
                mid_getSedr_456d9a2f64d6b28d,
                mid_getThrustAcceleration_456d9a2f64d6b28d,
                mid_setApoapsisAltitude_77e0f9a1f260e2e5,
                mid_setAreaDRG_77e0f9a1f260e2e5,
                mid_setAreaPC_77e0f9a1f260e2e5,
                mid_setAreaPCMax_77e0f9a1f260e2e5,
                mid_setAreaPCMin_77e0f9a1f260e2e5,
                mid_setAreaSRP_77e0f9a1f260e2e5,
                mid_setCDAreaOverMass_77e0f9a1f260e2e5,
                mid_setCRAreaOverMass_77e0f9a1f260e2e5,
                mid_setCovConfidence_77e0f9a1f260e2e5,
                mid_setCovConfidenceMethod_e939c6558ae8d313,
                mid_setHbr_77e0f9a1f260e2e5,
                mid_setInclination_77e0f9a1f260e2e5,
                mid_setMass_77e0f9a1f260e2e5,
                mid_setPeriapsisAltitude_77e0f9a1f260e2e5,
                mid_setSedr_77e0f9a1f260e2e5,
                mid_setThrustAcceleration_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdditionalParameters(jobject obj) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdditionalParameters(const AdditionalParameters& obj) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(obj) {}

              AdditionalParameters();

              jdouble getApoapsisAltitude() const;
              jdouble getAreaDRG() const;
              jdouble getAreaPC() const;
              jdouble getAreaPCMax() const;
              jdouble getAreaPCMin() const;
              jdouble getAreaSRP() const;
              jdouble getCDAreaOverMass() const;
              jdouble getCRAreaOverMass() const;
              jdouble getCovConfidence() const;
              ::java::lang::String getCovConfidenceMethod() const;
              jdouble getHbr() const;
              jdouble getInclination() const;
              jdouble getMass() const;
              jdouble getPeriapsisAltitude() const;
              jdouble getSedr() const;
              jdouble getThrustAcceleration() const;
              void setApoapsisAltitude(jdouble) const;
              void setAreaDRG(jdouble) const;
              void setAreaPC(jdouble) const;
              void setAreaPCMax(jdouble) const;
              void setAreaPCMin(jdouble) const;
              void setAreaSRP(jdouble) const;
              void setCDAreaOverMass(jdouble) const;
              void setCRAreaOverMass(jdouble) const;
              void setCovConfidence(jdouble) const;
              void setCovConfidenceMethod(const ::java::lang::String &) const;
              void setHbr(jdouble) const;
              void setInclination(jdouble) const;
              void setMass(jdouble) const;
              void setPeriapsisAltitude(jdouble) const;
              void setSedr(jdouble) const;
              void setThrustAcceleration(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(AdditionalParameters);
            extern PyTypeObject *PY_TYPE(AdditionalParameters);

            class t_AdditionalParameters {
            public:
              PyObject_HEAD
              AdditionalParameters object;
              static PyObject *wrap_Object(const AdditionalParameters&);
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
