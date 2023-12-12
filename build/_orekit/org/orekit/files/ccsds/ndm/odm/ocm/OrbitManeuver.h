#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OnOff;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_0640e6acf969ed28,
                  mid_getAcceleration_f88961cca75a2c0a,
                  mid_getAccelerationDirectionSigma_557b8123390d8d0c,
                  mid_getAccelerationInterpolation_bc635c6bda6df121,
                  mid_getAccelerationMagnitudeSigma_557b8123390d8d0c,
                  mid_getDate_7a97f7e149e79afb,
                  mid_getDeltaMass_557b8123390d8d0c,
                  mid_getDeployDirSigma_557b8123390d8d0c,
                  mid_getDeployDv_f88961cca75a2c0a,
                  mid_getDeployDvCda_557b8123390d8d0c,
                  mid_getDeployDvRatio_557b8123390d8d0c,
                  mid_getDeployDvSigma_557b8123390d8d0c,
                  mid_getDeployId_3cffd47377eca18a,
                  mid_getDeployMass_557b8123390d8d0c,
                  mid_getDuration_557b8123390d8d0c,
                  mid_getDv_f88961cca75a2c0a,
                  mid_getDvDirSigma_557b8123390d8d0c,
                  mid_getDvMagSigma_557b8123390d8d0c,
                  mid_getThrust_f88961cca75a2c0a,
                  mid_getThrustDirectionSigma_557b8123390d8d0c,
                  mid_getThrustEfficiency_557b8123390d8d0c,
                  mid_getThrustInterpolation_bc635c6bda6df121,
                  mid_getThrustIsp_557b8123390d8d0c,
                  mid_getThrustMagnitudeSigma_557b8123390d8d0c,
                  mid_setAcceleration_89aad365fb0ed8da,
                  mid_setAccelerationDirectionSigma_10f281d777284cea,
                  mid_setAccelerationInterpolation_479e4073dd1c825d,
                  mid_setAccelerationMagnitudeSigma_10f281d777284cea,
                  mid_setDate_20affcbd28542333,
                  mid_setDeltaMass_10f281d777284cea,
                  mid_setDeployDirSigma_10f281d777284cea,
                  mid_setDeployDv_89aad365fb0ed8da,
                  mid_setDeployDvCda_10f281d777284cea,
                  mid_setDeployDvRatio_10f281d777284cea,
                  mid_setDeployDvSigma_10f281d777284cea,
                  mid_setDeployId_f5ffdf29129ef90a,
                  mid_setDeployMass_10f281d777284cea,
                  mid_setDuration_10f281d777284cea,
                  mid_setDv_89aad365fb0ed8da,
                  mid_setDvDirSigma_10f281d777284cea,
                  mid_setDvMagSigma_10f281d777284cea,
                  mid_setThrust_89aad365fb0ed8da,
                  mid_setThrustDirectionSigma_10f281d777284cea,
                  mid_setThrustEfficiency_10f281d777284cea,
                  mid_setThrustInterpolation_479e4073dd1c825d,
                  mid_setThrustIsp_10f281d777284cea,
                  mid_setThrustMagnitudeSigma_10f281d777284cea,
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
