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
                mid_init$_0640e6acf969ed28,
                mid_getApoapsisAltitude_557b8123390d8d0c,
                mid_getAreaDRG_557b8123390d8d0c,
                mid_getAreaPC_557b8123390d8d0c,
                mid_getAreaPCMax_557b8123390d8d0c,
                mid_getAreaPCMin_557b8123390d8d0c,
                mid_getAreaSRP_557b8123390d8d0c,
                mid_getCDAreaOverMass_557b8123390d8d0c,
                mid_getCRAreaOverMass_557b8123390d8d0c,
                mid_getCovConfidence_557b8123390d8d0c,
                mid_getCovConfidenceMethod_3cffd47377eca18a,
                mid_getHbr_557b8123390d8d0c,
                mid_getInclination_557b8123390d8d0c,
                mid_getMass_557b8123390d8d0c,
                mid_getPeriapsisAltitude_557b8123390d8d0c,
                mid_getSedr_557b8123390d8d0c,
                mid_getThrustAcceleration_557b8123390d8d0c,
                mid_setApoapsisAltitude_10f281d777284cea,
                mid_setAreaDRG_10f281d777284cea,
                mid_setAreaPC_10f281d777284cea,
                mid_setAreaPCMax_10f281d777284cea,
                mid_setAreaPCMin_10f281d777284cea,
                mid_setAreaSRP_10f281d777284cea,
                mid_setCDAreaOverMass_10f281d777284cea,
                mid_setCRAreaOverMass_10f281d777284cea,
                mid_setCovConfidence_10f281d777284cea,
                mid_setCovConfidenceMethod_f5ffdf29129ef90a,
                mid_setHbr_10f281d777284cea,
                mid_setInclination_10f281d777284cea,
                mid_setMass_10f281d777284cea,
                mid_setPeriapsisAltitude_10f281d777284cea,
                mid_setSedr_10f281d777284cea,
                mid_setThrustAcceleration_10f281d777284cea,
                mid_validate_10f281d777284cea,
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
