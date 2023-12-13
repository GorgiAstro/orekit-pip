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
                  mid_init$_02135a6ef25adb4b,
                  mid_getAttitudeActuatorType_1c1fa1e935d6cdcf,
                  mid_getAttitudeControlAccuracy_b74f83833fdad017,
                  mid_getAttitudeControlMode_1c1fa1e935d6cdcf,
                  mid_getAttitudeKnowledgeAccuracy_b74f83833fdad017,
                  mid_getAttitudePointingAccuracy_b74f83833fdad017,
                  mid_getBolDv_b74f83833fdad017,
                  mid_getBusModel_1c1fa1e935d6cdcf,
                  mid_getDockedWith_e62d3bb06d56d7e3,
                  mid_getDragCoefficient_b74f83833fdad017,
                  mid_getDragConstantArea_b74f83833fdad017,
                  mid_getDragUncertainty_b74f83833fdad017,
                  mid_getDryMass_b74f83833fdad017,
                  mid_getInertiaMatrix_f77d745f2128c391,
                  mid_getInitialWetMass_b74f83833fdad017,
                  mid_getManeuversFrequency_b74f83833fdad017,
                  mid_getManeuversPerYear_b74f83833fdad017,
                  mid_getManufacturer_1c1fa1e935d6cdcf,
                  mid_getMaxAreaForCollisionProbability_b74f83833fdad017,
                  mid_getMaxThrust_b74f83833fdad017,
                  mid_getMinAreaForCollisionProbability_b74f83833fdad017,
                  mid_getRemainingDv_b74f83833fdad017,
                  mid_getSrpCoefficient_b74f83833fdad017,
                  mid_getSrpConstantArea_b74f83833fdad017,
                  mid_getSrpUncertainty_b74f83833fdad017,
                  mid_getTypAreaForCollisionProbability_b74f83833fdad017,
                  mid_getWetMass_b74f83833fdad017,
                  mid_setAttitudeActuatorType_734b91ac30d5f9b4,
                  mid_setAttitudeControlAccuracy_8ba9fe7a847cecad,
                  mid_setAttitudeControlMode_734b91ac30d5f9b4,
                  mid_setAttitudeKnowledgeAccuracy_8ba9fe7a847cecad,
                  mid_setAttitudePointingAccuracy_8ba9fe7a847cecad,
                  mid_setBolDv_8ba9fe7a847cecad,
                  mid_setBusModel_734b91ac30d5f9b4,
                  mid_setDockedWith_0e7c3032c7c93ed3,
                  mid_setDragCoefficient_8ba9fe7a847cecad,
                  mid_setDragConstantArea_8ba9fe7a847cecad,
                  mid_setDragUncertainty_8ba9fe7a847cecad,
                  mid_setDryMass_8ba9fe7a847cecad,
                  mid_setInertiaMatrixEntry_94fe8d9ffeb50676,
                  mid_setInitialWetMass_8ba9fe7a847cecad,
                  mid_setManeuversFrequency_8ba9fe7a847cecad,
                  mid_setManufacturer_734b91ac30d5f9b4,
                  mid_setMaxAreaForCollisionProbability_8ba9fe7a847cecad,
                  mid_setMaxThrust_8ba9fe7a847cecad,
                  mid_setMinAreaForCollisionProbability_8ba9fe7a847cecad,
                  mid_setRemainingDv_8ba9fe7a847cecad,
                  mid_setSrpCoefficient_8ba9fe7a847cecad,
                  mid_setSrpConstantArea_8ba9fe7a847cecad,
                  mid_setSrpUncertainty_8ba9fe7a847cecad,
                  mid_setTypAreaForCollisionProbability_8ba9fe7a847cecad,
                  mid_setWetMass_8ba9fe7a847cecad,
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
