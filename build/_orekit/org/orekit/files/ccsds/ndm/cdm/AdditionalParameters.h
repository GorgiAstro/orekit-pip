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
                mid_init$_ff7cb6c242604316,
                mid_getApoapsisAltitude_9981f74b2d109da6,
                mid_getAreaDRG_9981f74b2d109da6,
                mid_getAreaPC_9981f74b2d109da6,
                mid_getAreaPCMax_9981f74b2d109da6,
                mid_getAreaPCMin_9981f74b2d109da6,
                mid_getAreaSRP_9981f74b2d109da6,
                mid_getCDAreaOverMass_9981f74b2d109da6,
                mid_getCRAreaOverMass_9981f74b2d109da6,
                mid_getCovConfidence_9981f74b2d109da6,
                mid_getCovConfidenceMethod_d2c8eb4129821f0e,
                mid_getHbr_9981f74b2d109da6,
                mid_getInclination_9981f74b2d109da6,
                mid_getMass_9981f74b2d109da6,
                mid_getPeriapsisAltitude_9981f74b2d109da6,
                mid_getSedr_9981f74b2d109da6,
                mid_getThrustAcceleration_9981f74b2d109da6,
                mid_setApoapsisAltitude_1ad26e8c8c0cd65b,
                mid_setAreaDRG_1ad26e8c8c0cd65b,
                mid_setAreaPC_1ad26e8c8c0cd65b,
                mid_setAreaPCMax_1ad26e8c8c0cd65b,
                mid_setAreaPCMin_1ad26e8c8c0cd65b,
                mid_setAreaSRP_1ad26e8c8c0cd65b,
                mid_setCDAreaOverMass_1ad26e8c8c0cd65b,
                mid_setCRAreaOverMass_1ad26e8c8c0cd65b,
                mid_setCovConfidence_1ad26e8c8c0cd65b,
                mid_setCovConfidenceMethod_105e1eadb709d9ac,
                mid_setHbr_1ad26e8c8c0cd65b,
                mid_setInclination_1ad26e8c8c0cd65b,
                mid_setMass_1ad26e8c8c0cd65b,
                mid_setPeriapsisAltitude_1ad26e8c8c0cd65b,
                mid_setSedr_1ad26e8c8c0cd65b,
                mid_setThrustAcceleration_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
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
