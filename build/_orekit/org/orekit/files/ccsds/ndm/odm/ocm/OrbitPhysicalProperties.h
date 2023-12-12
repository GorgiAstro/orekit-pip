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
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
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

              class OrbitPhysicalProperties : public ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties {
               public:
                enum {
                  mid_init$_20affcbd28542333,
                  mid_getAttitudeActuatorType_3cffd47377eca18a,
                  mid_getAttitudeControlAccuracy_557b8123390d8d0c,
                  mid_getAttitudeControlMode_3cffd47377eca18a,
                  mid_getAttitudeKnowledgeAccuracy_557b8123390d8d0c,
                  mid_getAttitudePointingAccuracy_557b8123390d8d0c,
                  mid_getBolDv_557b8123390d8d0c,
                  mid_getBusModel_3cffd47377eca18a,
                  mid_getDockedWith_0d9551367f7ecdef,
                  mid_getDragCoefficient_557b8123390d8d0c,
                  mid_getDragConstantArea_557b8123390d8d0c,
                  mid_getDragUncertainty_557b8123390d8d0c,
                  mid_getDryMass_557b8123390d8d0c,
                  mid_getInertiaMatrix_70a207fcbc031df2,
                  mid_getInitialWetMass_557b8123390d8d0c,
                  mid_getManeuversFrequency_557b8123390d8d0c,
                  mid_getManeuversPerYear_557b8123390d8d0c,
                  mid_getManufacturer_3cffd47377eca18a,
                  mid_getMaxAreaForCollisionProbability_557b8123390d8d0c,
                  mid_getMaxThrust_557b8123390d8d0c,
                  mid_getMinAreaForCollisionProbability_557b8123390d8d0c,
                  mid_getRemainingDv_557b8123390d8d0c,
                  mid_getSrpCoefficient_557b8123390d8d0c,
                  mid_getSrpConstantArea_557b8123390d8d0c,
                  mid_getSrpUncertainty_557b8123390d8d0c,
                  mid_getTypAreaForCollisionProbability_557b8123390d8d0c,
                  mid_getWetMass_557b8123390d8d0c,
                  mid_setAttitudeActuatorType_f5ffdf29129ef90a,
                  mid_setAttitudeControlAccuracy_10f281d777284cea,
                  mid_setAttitudeControlMode_f5ffdf29129ef90a,
                  mid_setAttitudeKnowledgeAccuracy_10f281d777284cea,
                  mid_setAttitudePointingAccuracy_10f281d777284cea,
                  mid_setBolDv_10f281d777284cea,
                  mid_setBusModel_f5ffdf29129ef90a,
                  mid_setDockedWith_4ccaedadb068bdeb,
                  mid_setDragCoefficient_10f281d777284cea,
                  mid_setDragConstantArea_10f281d777284cea,
                  mid_setDragUncertainty_10f281d777284cea,
                  mid_setDryMass_10f281d777284cea,
                  mid_setInertiaMatrixEntry_754312f3734d6e2f,
                  mid_setInitialWetMass_10f281d777284cea,
                  mid_setManeuversFrequency_10f281d777284cea,
                  mid_setManufacturer_f5ffdf29129ef90a,
                  mid_setMaxAreaForCollisionProbability_10f281d777284cea,
                  mid_setMaxThrust_10f281d777284cea,
                  mid_setMinAreaForCollisionProbability_10f281d777284cea,
                  mid_setRemainingDv_10f281d777284cea,
                  mid_setSrpCoefficient_10f281d777284cea,
                  mid_setSrpConstantArea_10f281d777284cea,
                  mid_setSrpUncertainty_10f281d777284cea,
                  mid_setTypAreaForCollisionProbability_10f281d777284cea,
                  mid_setWetMass_10f281d777284cea,
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
