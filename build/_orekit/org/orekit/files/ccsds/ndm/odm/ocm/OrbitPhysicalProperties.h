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
                  mid_init$_e82d68cd9f886886,
                  mid_getAttitudeActuatorType_0090f7797e403f43,
                  mid_getAttitudeControlAccuracy_456d9a2f64d6b28d,
                  mid_getAttitudeControlMode_0090f7797e403f43,
                  mid_getAttitudeKnowledgeAccuracy_456d9a2f64d6b28d,
                  mid_getAttitudePointingAccuracy_456d9a2f64d6b28d,
                  mid_getBolDv_456d9a2f64d6b28d,
                  mid_getBusModel_0090f7797e403f43,
                  mid_getDockedWith_a6156df500549a58,
                  mid_getDragCoefficient_456d9a2f64d6b28d,
                  mid_getDragConstantArea_456d9a2f64d6b28d,
                  mid_getDragUncertainty_456d9a2f64d6b28d,
                  mid_getDryMass_456d9a2f64d6b28d,
                  mid_getInertiaMatrix_7116bbecdd8ceb21,
                  mid_getInitialWetMass_456d9a2f64d6b28d,
                  mid_getManeuversFrequency_456d9a2f64d6b28d,
                  mid_getManeuversPerYear_456d9a2f64d6b28d,
                  mid_getManufacturer_0090f7797e403f43,
                  mid_getMaxAreaForCollisionProbability_456d9a2f64d6b28d,
                  mid_getMaxThrust_456d9a2f64d6b28d,
                  mid_getMinAreaForCollisionProbability_456d9a2f64d6b28d,
                  mid_getRemainingDv_456d9a2f64d6b28d,
                  mid_getSrpCoefficient_456d9a2f64d6b28d,
                  mid_getSrpConstantArea_456d9a2f64d6b28d,
                  mid_getSrpUncertainty_456d9a2f64d6b28d,
                  mid_getTypAreaForCollisionProbability_456d9a2f64d6b28d,
                  mid_getWetMass_456d9a2f64d6b28d,
                  mid_setAttitudeActuatorType_e939c6558ae8d313,
                  mid_setAttitudeControlAccuracy_77e0f9a1f260e2e5,
                  mid_setAttitudeControlMode_e939c6558ae8d313,
                  mid_setAttitudeKnowledgeAccuracy_77e0f9a1f260e2e5,
                  mid_setAttitudePointingAccuracy_77e0f9a1f260e2e5,
                  mid_setBolDv_77e0f9a1f260e2e5,
                  mid_setBusModel_e939c6558ae8d313,
                  mid_setDockedWith_65de9727799c5641,
                  mid_setDragCoefficient_77e0f9a1f260e2e5,
                  mid_setDragConstantArea_77e0f9a1f260e2e5,
                  mid_setDragUncertainty_77e0f9a1f260e2e5,
                  mid_setDryMass_77e0f9a1f260e2e5,
                  mid_setInertiaMatrixEntry_78e41e7b5124a628,
                  mid_setInitialWetMass_77e0f9a1f260e2e5,
                  mid_setManeuversFrequency_77e0f9a1f260e2e5,
                  mid_setManufacturer_e939c6558ae8d313,
                  mid_setMaxAreaForCollisionProbability_77e0f9a1f260e2e5,
                  mid_setMaxThrust_77e0f9a1f260e2e5,
                  mid_setMinAreaForCollisionProbability_77e0f9a1f260e2e5,
                  mid_setRemainingDv_77e0f9a1f260e2e5,
                  mid_setSrpCoefficient_77e0f9a1f260e2e5,
                  mid_setSrpConstantArea_77e0f9a1f260e2e5,
                  mid_setSrpUncertainty_77e0f9a1f260e2e5,
                  mid_setTypAreaForCollisionProbability_77e0f9a1f260e2e5,
                  mid_setWetMass_77e0f9a1f260e2e5,
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
