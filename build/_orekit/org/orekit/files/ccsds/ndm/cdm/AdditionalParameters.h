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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getApoapsisAltitude_b74f83833fdad017,
                mid_getAreaDRG_b74f83833fdad017,
                mid_getAreaPC_b74f83833fdad017,
                mid_getAreaPCMax_b74f83833fdad017,
                mid_getAreaPCMin_b74f83833fdad017,
                mid_getAreaSRP_b74f83833fdad017,
                mid_getCDAreaOverMass_b74f83833fdad017,
                mid_getCRAreaOverMass_b74f83833fdad017,
                mid_getCovConfidence_b74f83833fdad017,
                mid_getCovConfidenceMethod_1c1fa1e935d6cdcf,
                mid_getHbr_b74f83833fdad017,
                mid_getInclination_b74f83833fdad017,
                mid_getMass_b74f83833fdad017,
                mid_getPeriapsisAltitude_b74f83833fdad017,
                mid_getSedr_b74f83833fdad017,
                mid_getThrustAcceleration_b74f83833fdad017,
                mid_setApoapsisAltitude_8ba9fe7a847cecad,
                mid_setAreaDRG_8ba9fe7a847cecad,
                mid_setAreaPC_8ba9fe7a847cecad,
                mid_setAreaPCMax_8ba9fe7a847cecad,
                mid_setAreaPCMin_8ba9fe7a847cecad,
                mid_setAreaSRP_8ba9fe7a847cecad,
                mid_setCDAreaOverMass_8ba9fe7a847cecad,
                mid_setCRAreaOverMass_8ba9fe7a847cecad,
                mid_setCovConfidence_8ba9fe7a847cecad,
                mid_setCovConfidenceMethod_734b91ac30d5f9b4,
                mid_setHbr_8ba9fe7a847cecad,
                mid_setInclination_8ba9fe7a847cecad,
                mid_setMass_8ba9fe7a847cecad,
                mid_setPeriapsisAltitude_8ba9fe7a847cecad,
                mid_setSedr_8ba9fe7a847cecad,
                mid_setThrustAcceleration_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
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
