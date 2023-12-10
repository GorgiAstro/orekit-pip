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
                  mid_init$_600a2a61652bc473,
                  mid_getAttitudeActuatorType_11b109bd155ca898,
                  mid_getAttitudeControlAccuracy_dff5885c2c873297,
                  mid_getAttitudeControlMode_11b109bd155ca898,
                  mid_getAttitudeKnowledgeAccuracy_dff5885c2c873297,
                  mid_getAttitudePointingAccuracy_dff5885c2c873297,
                  mid_getBolDv_dff5885c2c873297,
                  mid_getBusModel_11b109bd155ca898,
                  mid_getDockedWith_2afa36052df4765d,
                  mid_getDragCoefficient_dff5885c2c873297,
                  mid_getDragConstantArea_dff5885c2c873297,
                  mid_getDragUncertainty_dff5885c2c873297,
                  mid_getDryMass_dff5885c2c873297,
                  mid_getInertiaMatrix_688b496048ff947b,
                  mid_getInitialWetMass_dff5885c2c873297,
                  mid_getManeuversFrequency_dff5885c2c873297,
                  mid_getManeuversPerYear_dff5885c2c873297,
                  mid_getManufacturer_11b109bd155ca898,
                  mid_getMaxAreaForCollisionProbability_dff5885c2c873297,
                  mid_getMaxThrust_dff5885c2c873297,
                  mid_getMinAreaForCollisionProbability_dff5885c2c873297,
                  mid_getRemainingDv_dff5885c2c873297,
                  mid_getSrpCoefficient_dff5885c2c873297,
                  mid_getSrpConstantArea_dff5885c2c873297,
                  mid_getSrpUncertainty_dff5885c2c873297,
                  mid_getTypAreaForCollisionProbability_dff5885c2c873297,
                  mid_getWetMass_dff5885c2c873297,
                  mid_setAttitudeActuatorType_d0bc48d5b00dc40c,
                  mid_setAttitudeControlAccuracy_17db3a65980d3441,
                  mid_setAttitudeControlMode_d0bc48d5b00dc40c,
                  mid_setAttitudeKnowledgeAccuracy_17db3a65980d3441,
                  mid_setAttitudePointingAccuracy_17db3a65980d3441,
                  mid_setBolDv_17db3a65980d3441,
                  mid_setBusModel_d0bc48d5b00dc40c,
                  mid_setDockedWith_de3e021e7266b71e,
                  mid_setDragCoefficient_17db3a65980d3441,
                  mid_setDragConstantArea_17db3a65980d3441,
                  mid_setDragUncertainty_17db3a65980d3441,
                  mid_setDryMass_17db3a65980d3441,
                  mid_setInertiaMatrixEntry_1506189166690b5e,
                  mid_setInitialWetMass_17db3a65980d3441,
                  mid_setManeuversFrequency_17db3a65980d3441,
                  mid_setManufacturer_d0bc48d5b00dc40c,
                  mid_setMaxAreaForCollisionProbability_17db3a65980d3441,
                  mid_setMaxThrust_17db3a65980d3441,
                  mid_setMinAreaForCollisionProbability_17db3a65980d3441,
                  mid_setRemainingDv_17db3a65980d3441,
                  mid_setSrpCoefficient_17db3a65980d3441,
                  mid_setSrpConstantArea_17db3a65980d3441,
                  mid_setSrpUncertainty_17db3a65980d3441,
                  mid_setTypAreaForCollisionProbability_17db3a65980d3441,
                  mid_setWetMass_17db3a65980d3441,
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
