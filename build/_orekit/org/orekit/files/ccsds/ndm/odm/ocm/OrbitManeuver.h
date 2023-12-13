#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OnOff;
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

              class OrbitManeuver : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getAcceleration_8b724f8b4fdad1a2,
                  mid_getAccelerationDirectionSigma_b74f83833fdad017,
                  mid_getAccelerationInterpolation_ae5979149ea75603,
                  mid_getAccelerationMagnitudeSigma_b74f83833fdad017,
                  mid_getDate_c325492395d89b24,
                  mid_getDeltaMass_b74f83833fdad017,
                  mid_getDeployDirSigma_b74f83833fdad017,
                  mid_getDeployDv_8b724f8b4fdad1a2,
                  mid_getDeployDvCda_b74f83833fdad017,
                  mid_getDeployDvRatio_b74f83833fdad017,
                  mid_getDeployDvSigma_b74f83833fdad017,
                  mid_getDeployId_1c1fa1e935d6cdcf,
                  mid_getDeployMass_b74f83833fdad017,
                  mid_getDuration_b74f83833fdad017,
                  mid_getDv_8b724f8b4fdad1a2,
                  mid_getDvDirSigma_b74f83833fdad017,
                  mid_getDvMagSigma_b74f83833fdad017,
                  mid_getThrust_8b724f8b4fdad1a2,
                  mid_getThrustDirectionSigma_b74f83833fdad017,
                  mid_getThrustEfficiency_b74f83833fdad017,
                  mid_getThrustInterpolation_ae5979149ea75603,
                  mid_getThrustIsp_b74f83833fdad017,
                  mid_getThrustMagnitudeSigma_b74f83833fdad017,
                  mid_setAcceleration_d5322b8b512aeb26,
                  mid_setAccelerationDirectionSigma_8ba9fe7a847cecad,
                  mid_setAccelerationInterpolation_9e83239fe51dc6dd,
                  mid_setAccelerationMagnitudeSigma_8ba9fe7a847cecad,
                  mid_setDate_02135a6ef25adb4b,
                  mid_setDeltaMass_8ba9fe7a847cecad,
                  mid_setDeployDirSigma_8ba9fe7a847cecad,
                  mid_setDeployDv_d5322b8b512aeb26,
                  mid_setDeployDvCda_8ba9fe7a847cecad,
                  mid_setDeployDvRatio_8ba9fe7a847cecad,
                  mid_setDeployDvSigma_8ba9fe7a847cecad,
                  mid_setDeployId_734b91ac30d5f9b4,
                  mid_setDeployMass_8ba9fe7a847cecad,
                  mid_setDuration_8ba9fe7a847cecad,
                  mid_setDv_d5322b8b512aeb26,
                  mid_setDvDirSigma_8ba9fe7a847cecad,
                  mid_setDvMagSigma_8ba9fe7a847cecad,
                  mid_setThrust_d5322b8b512aeb26,
                  mid_setThrustDirectionSigma_8ba9fe7a847cecad,
                  mid_setThrustEfficiency_8ba9fe7a847cecad,
                  mid_setThrustInterpolation_9e83239fe51dc6dd,
                  mid_setThrustIsp_8ba9fe7a847cecad,
                  mid_setThrustMagnitudeSigma_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitManeuver(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitManeuver(const OrbitManeuver& obj) : ::java::lang::Object(obj) {}

                OrbitManeuver();

                ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration() const;
                jdouble getAccelerationDirectionSigma() const;
                ::org::orekit::files::ccsds::definitions::OnOff getAccelerationInterpolation() const;
                jdouble getAccelerationMagnitudeSigma() const;
                ::org::orekit::time::AbsoluteDate getDate() const;
                jdouble getDeltaMass() const;
                jdouble getDeployDirSigma() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDeployDv() const;
                jdouble getDeployDvCda() const;
                jdouble getDeployDvRatio() const;
                jdouble getDeployDvSigma() const;
                ::java::lang::String getDeployId() const;
                jdouble getDeployMass() const;
                jdouble getDuration() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDv() const;
                jdouble getDvDirSigma() const;
                jdouble getDvMagSigma() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrust() const;
                jdouble getThrustDirectionSigma() const;
                jdouble getThrustEfficiency() const;
                ::org::orekit::files::ccsds::definitions::OnOff getThrustInterpolation() const;
                jdouble getThrustIsp() const;
                jdouble getThrustMagnitudeSigma() const;
                void setAcceleration(jint, jdouble) const;
                void setAccelerationDirectionSigma(jdouble) const;
                void setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff &) const;
                void setAccelerationMagnitudeSigma(jdouble) const;
                void setDate(const ::org::orekit::time::AbsoluteDate &) const;
                void setDeltaMass(jdouble) const;
                void setDeployDirSigma(jdouble) const;
                void setDeployDv(jint, jdouble) const;
                void setDeployDvCda(jdouble) const;
                void setDeployDvRatio(jdouble) const;
                void setDeployDvSigma(jdouble) const;
                void setDeployId(const ::java::lang::String &) const;
                void setDeployMass(jdouble) const;
                void setDuration(jdouble) const;
                void setDv(jint, jdouble) const;
                void setDvDirSigma(jdouble) const;
                void setDvMagSigma(jdouble) const;
                void setThrust(jint, jdouble) const;
                void setThrustDirectionSigma(jdouble) const;
                void setThrustEfficiency(jdouble) const;
                void setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff &) const;
                void setThrustIsp(jdouble) const;
                void setThrustMagnitudeSigma(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(OrbitManeuver);
              extern PyTypeObject *PY_TYPE(OrbitManeuver);

              class t_OrbitManeuver {
              public:
                PyObject_HEAD
                OrbitManeuver object;
                static PyObject *wrap_Object(const OrbitManeuver&);
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
