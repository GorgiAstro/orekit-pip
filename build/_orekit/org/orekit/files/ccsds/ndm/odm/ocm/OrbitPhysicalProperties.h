#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitPhysicalProperties_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitPhysicalProperties_H

#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"

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
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
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

              class OrbitPhysicalProperties : public ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties {
               public:
                enum {
                  mid_init$_8497861b879c83f7,
                  mid_getAttitudeActuatorType_d2c8eb4129821f0e,
                  mid_getAttitudeControlAccuracy_9981f74b2d109da6,
                  mid_getAttitudeControlMode_d2c8eb4129821f0e,
                  mid_getAttitudeKnowledgeAccuracy_9981f74b2d109da6,
                  mid_getAttitudePointingAccuracy_9981f74b2d109da6,
                  mid_getBolDv_9981f74b2d109da6,
                  mid_getBusModel_d2c8eb4129821f0e,
                  mid_getDockedWith_d751c1a57012b438,
                  mid_getDragCoefficient_9981f74b2d109da6,
                  mid_getDragConstantArea_9981f74b2d109da6,
                  mid_getDragUncertainty_9981f74b2d109da6,
                  mid_getDryMass_9981f74b2d109da6,
                  mid_getInertiaMatrix_b2eebabce70526d8,
                  mid_getInitialWetMass_9981f74b2d109da6,
                  mid_getManeuversFrequency_9981f74b2d109da6,
                  mid_getManeuversPerYear_9981f74b2d109da6,
                  mid_getManufacturer_d2c8eb4129821f0e,
                  mid_getMaxAreaForCollisionProbability_9981f74b2d109da6,
                  mid_getMaxThrust_9981f74b2d109da6,
                  mid_getMinAreaForCollisionProbability_9981f74b2d109da6,
                  mid_getRemainingDv_9981f74b2d109da6,
                  mid_getSrpCoefficient_9981f74b2d109da6,
                  mid_getSrpConstantArea_9981f74b2d109da6,
                  mid_getSrpUncertainty_9981f74b2d109da6,
                  mid_getTypAreaForCollisionProbability_9981f74b2d109da6,
                  mid_getWetMass_9981f74b2d109da6,
                  mid_setAttitudeActuatorType_105e1eadb709d9ac,
                  mid_setAttitudeControlAccuracy_1ad26e8c8c0cd65b,
                  mid_setAttitudeControlMode_105e1eadb709d9ac,
                  mid_setAttitudeKnowledgeAccuracy_1ad26e8c8c0cd65b,
                  mid_setAttitudePointingAccuracy_1ad26e8c8c0cd65b,
                  mid_setBolDv_1ad26e8c8c0cd65b,
                  mid_setBusModel_105e1eadb709d9ac,
                  mid_setDockedWith_aa335fea495d60e0,
                  mid_setDragCoefficient_1ad26e8c8c0cd65b,
                  mid_setDragConstantArea_1ad26e8c8c0cd65b,
                  mid_setDragUncertainty_1ad26e8c8c0cd65b,
                  mid_setDryMass_1ad26e8c8c0cd65b,
                  mid_setInertiaMatrixEntry_e98d7b3e971b6087,
                  mid_setInitialWetMass_1ad26e8c8c0cd65b,
                  mid_setManeuversFrequency_1ad26e8c8c0cd65b,
                  mid_setManufacturer_105e1eadb709d9ac,
                  mid_setMaxAreaForCollisionProbability_1ad26e8c8c0cd65b,
                  mid_setMaxThrust_1ad26e8c8c0cd65b,
                  mid_setMinAreaForCollisionProbability_1ad26e8c8c0cd65b,
                  mid_setRemainingDv_1ad26e8c8c0cd65b,
                  mid_setSrpCoefficient_1ad26e8c8c0cd65b,
                  mid_setSrpConstantArea_1ad26e8c8c0cd65b,
                  mid_setSrpUncertainty_1ad26e8c8c0cd65b,
                  mid_setTypAreaForCollisionProbability_1ad26e8c8c0cd65b,
                  mid_setWetMass_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitPhysicalProperties(jobject obj) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitPhysicalProperties(const OrbitPhysicalProperties& obj) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(obj) {}

                OrbitPhysicalProperties(const ::org::orekit::time::AbsoluteDate &);

                ::java::lang::String getAttitudeActuatorType() const;
                jdouble getAttitudeControlAccuracy() const;
                ::java::lang::String getAttitudeControlMode() const;
                jdouble getAttitudeKnowledgeAccuracy() const;
                jdouble getAttitudePointingAccuracy() const;
                jdouble getBolDv() const;
                ::java::lang::String getBusModel() const;
                ::java::util::List getDockedWith() const;
                jdouble getDragCoefficient() const;
                jdouble getDragConstantArea() const;
                jdouble getDragUncertainty() const;
                jdouble getDryMass() const;
                ::org::hipparchus::linear::RealMatrix getInertiaMatrix() const;
                jdouble getInitialWetMass() const;
                jdouble getManeuversFrequency() const;
                jdouble getManeuversPerYear() const;
                ::java::lang::String getManufacturer() const;
                jdouble getMaxAreaForCollisionProbability() const;
                jdouble getMaxThrust() const;
                jdouble getMinAreaForCollisionProbability() const;
                jdouble getRemainingDv() const;
                jdouble getSrpCoefficient() const;
                jdouble getSrpConstantArea() const;
                jdouble getSrpUncertainty() const;
                jdouble getTypAreaForCollisionProbability() const;
                jdouble getWetMass() const;
                void setAttitudeActuatorType(const ::java::lang::String &) const;
                void setAttitudeControlAccuracy(jdouble) const;
                void setAttitudeControlMode(const ::java::lang::String &) const;
                void setAttitudeKnowledgeAccuracy(jdouble) const;
                void setAttitudePointingAccuracy(jdouble) const;
                void setBolDv(jdouble) const;
                void setBusModel(const ::java::lang::String &) const;
                void setDockedWith(const ::java::util::List &) const;
                void setDragCoefficient(jdouble) const;
                void setDragConstantArea(jdouble) const;
                void setDragUncertainty(jdouble) const;
                void setDryMass(jdouble) const;
                void setInertiaMatrixEntry(jint, jint, jdouble) const;
                void setInitialWetMass(jdouble) const;
                void setManeuversFrequency(jdouble) const;
                void setManufacturer(const ::java::lang::String &) const;
                void setMaxAreaForCollisionProbability(jdouble) const;
                void setMaxThrust(jdouble) const;
                void setMinAreaForCollisionProbability(jdouble) const;
                void setRemainingDv(jdouble) const;
                void setSrpCoefficient(jdouble) const;
                void setSrpConstantArea(jdouble) const;
                void setSrpUncertainty(jdouble) const;
                void setTypAreaForCollisionProbability(jdouble) const;
                void setWetMass(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(OrbitPhysicalProperties);
              extern PyTypeObject *PY_TYPE(OrbitPhysicalProperties);

              class t_OrbitPhysicalProperties {
              public:
                PyObject_HEAD
                OrbitPhysicalProperties object;
                static PyObject *wrap_Object(const OrbitPhysicalProperties&);
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
