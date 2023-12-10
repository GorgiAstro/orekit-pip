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
                  mid_init$_7ae3461a92a43152,
                  mid_getAcceleration_17a952530a808943,
                  mid_getAccelerationDirectionSigma_456d9a2f64d6b28d,
                  mid_getAccelerationInterpolation_2c7c60132dafe913,
                  mid_getAccelerationMagnitudeSigma_456d9a2f64d6b28d,
                  mid_getDate_aaa854c403487cf3,
                  mid_getDeltaMass_456d9a2f64d6b28d,
                  mid_getDeployDirSigma_456d9a2f64d6b28d,
                  mid_getDeployDv_17a952530a808943,
                  mid_getDeployDvCda_456d9a2f64d6b28d,
                  mid_getDeployDvRatio_456d9a2f64d6b28d,
                  mid_getDeployDvSigma_456d9a2f64d6b28d,
                  mid_getDeployId_0090f7797e403f43,
                  mid_getDeployMass_456d9a2f64d6b28d,
                  mid_getDuration_456d9a2f64d6b28d,
                  mid_getDv_17a952530a808943,
                  mid_getDvDirSigma_456d9a2f64d6b28d,
                  mid_getDvMagSigma_456d9a2f64d6b28d,
                  mid_getThrust_17a952530a808943,
                  mid_getThrustDirectionSigma_456d9a2f64d6b28d,
                  mid_getThrustEfficiency_456d9a2f64d6b28d,
                  mid_getThrustInterpolation_2c7c60132dafe913,
                  mid_getThrustIsp_456d9a2f64d6b28d,
                  mid_getThrustMagnitudeSigma_456d9a2f64d6b28d,
                  mid_setAcceleration_987a5fb872043b12,
                  mid_setAccelerationDirectionSigma_77e0f9a1f260e2e5,
                  mid_setAccelerationInterpolation_29b37ced46ce95fa,
                  mid_setAccelerationMagnitudeSigma_77e0f9a1f260e2e5,
                  mid_setDate_e82d68cd9f886886,
                  mid_setDeltaMass_77e0f9a1f260e2e5,
                  mid_setDeployDirSigma_77e0f9a1f260e2e5,
                  mid_setDeployDv_987a5fb872043b12,
                  mid_setDeployDvCda_77e0f9a1f260e2e5,
                  mid_setDeployDvRatio_77e0f9a1f260e2e5,
                  mid_setDeployDvSigma_77e0f9a1f260e2e5,
                  mid_setDeployId_e939c6558ae8d313,
                  mid_setDeployMass_77e0f9a1f260e2e5,
                  mid_setDuration_77e0f9a1f260e2e5,
                  mid_setDv_987a5fb872043b12,
                  mid_setDvDirSigma_77e0f9a1f260e2e5,
                  mid_setDvMagSigma_77e0f9a1f260e2e5,
                  mid_setThrust_987a5fb872043b12,
                  mid_setThrustDirectionSigma_77e0f9a1f260e2e5,
                  mid_setThrustEfficiency_77e0f9a1f260e2e5,
                  mid_setThrustInterpolation_29b37ced46ce95fa,
                  mid_setThrustIsp_77e0f9a1f260e2e5,
                  mid_setThrustMagnitudeSigma_77e0f9a1f260e2e5,
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
