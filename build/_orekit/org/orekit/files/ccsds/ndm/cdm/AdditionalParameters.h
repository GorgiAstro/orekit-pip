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
                mid_init$_0fa09c18fee449d5,
                mid_getApoapsisAltitude_dff5885c2c873297,
                mid_getAreaDRG_dff5885c2c873297,
                mid_getAreaPC_dff5885c2c873297,
                mid_getAreaPCMax_dff5885c2c873297,
                mid_getAreaPCMin_dff5885c2c873297,
                mid_getAreaSRP_dff5885c2c873297,
                mid_getCDAreaOverMass_dff5885c2c873297,
                mid_getCRAreaOverMass_dff5885c2c873297,
                mid_getCovConfidence_dff5885c2c873297,
                mid_getCovConfidenceMethod_11b109bd155ca898,
                mid_getHbr_dff5885c2c873297,
                mid_getInclination_dff5885c2c873297,
                mid_getMass_dff5885c2c873297,
                mid_getPeriapsisAltitude_dff5885c2c873297,
                mid_getSedr_dff5885c2c873297,
                mid_getThrustAcceleration_dff5885c2c873297,
                mid_setApoapsisAltitude_17db3a65980d3441,
                mid_setAreaDRG_17db3a65980d3441,
                mid_setAreaPC_17db3a65980d3441,
                mid_setAreaPCMax_17db3a65980d3441,
                mid_setAreaPCMin_17db3a65980d3441,
                mid_setAreaSRP_17db3a65980d3441,
                mid_setCDAreaOverMass_17db3a65980d3441,
                mid_setCRAreaOverMass_17db3a65980d3441,
                mid_setCovConfidence_17db3a65980d3441,
                mid_setCovConfidenceMethod_d0bc48d5b00dc40c,
                mid_setHbr_17db3a65980d3441,
                mid_setInclination_17db3a65980d3441,
                mid_setMass_17db3a65980d3441,
                mid_setPeriapsisAltitude_17db3a65980d3441,
                mid_setSedr_17db3a65980d3441,
                mid_setThrustAcceleration_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
